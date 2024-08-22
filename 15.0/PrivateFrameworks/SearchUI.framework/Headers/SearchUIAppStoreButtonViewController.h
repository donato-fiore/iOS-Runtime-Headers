// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIAPPSTOREBUTTONVIEWCONTROLLER_H
#define SEARCHUIAPPSTOREBUTTONVIEWCONTROLLER_H

@class NSString, ASCLockupView;
@protocol ASCLockupViewDelegate;


#import "SearchUIAccessoryViewController.h"

@interface SearchUIAppStoreButtonViewController : SearchUIAccessoryViewController <ASCLockupViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ASCLockupView *lockupView; // ivar: _lockupView
@property (readonly) Class superclass;


+(BOOL)supportsRowModel:(id)arg0 ;
+(id)lockupCache;
+(id)storeIdentifierForRowModel:(id)arg0 ;
-(NSUInteger)type;
-(id)metricsActivityForLockupView:(id)arg0 toPerformActionOfOffer:(id)arg1 ;
-(id)presentingViewControllerForLockupView:(id)arg0 ;
-(id)setupView;
-(void)lockupViewDidFinishRequest:(id)arg0 ;
-(void)lockupViewDidInvalidateIntrinsicContentSize:(id)arg0 ;
-(void)tlk_updateForAppearance:(id)arg0 ;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif