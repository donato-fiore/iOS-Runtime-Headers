// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIPURCHASEREQUESTBUTTON_H
#define SEARCHUIPURCHASEREQUESTBUTTON_H

@class TLKStoreButton, SFShowPurchaseRequestSheetCommand, TLKImageView, TLKStackView;
@protocol NSObject;


#import "SearchUIAccessoryViewController.h"

@interface SearchUIPurchaseRequestButton : SearchUIAccessoryViewController

@property (retain, nonatomic) TLKStoreButton *appStoreButton; // ivar: _appStoreButton
@property (retain, nonatomic) SFShowPurchaseRequestSheetCommand *command; // ivar: _command
@property (retain, nonatomic) TLKImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) NSObject<NSObject> *purchaseRequestStatusObserver; // ivar: _purchaseRequestStatusObserver
@property (retain, nonatomic) TLKStackView *stackView; // ivar: _stackView


+(BOOL)supportsRowModel:(id)arg0 ;
-(NSUInteger)type;
-(id)imageWithSymbolName:(id)arg0 accessibilityDescription:(id)arg1 ;
-(id)setupView;
-(void)buttonPressed;
-(void)dealloc;
-(void)setupSubscription;
-(void)updateButtonState;
-(void)updateWithRowModel:(id)arg0 ;
-(void)updateWithStatus:(int)arg0 forRequestID:(id)arg1 ;


@end


#endif