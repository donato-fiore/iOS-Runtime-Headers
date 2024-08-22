// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSONSCREENCODECONTENTVIEW_H
#define VSONSCREENCODECONTENTVIEW_H

@class UIView, NSString;
@protocol VSOnscreenCodeViewDelegate;


#import "VSOnscreenCodeWrapperView.h"

@interface VSOnscreenCodeContentView : UIView <VSOnscreenCodeViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VSOnscreenCodeViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VSOnscreenCodeWrapperView *qrCodeWrapperView; // ivar: _qrCodeWrapperView
@property (retain, nonatomic) VSOnscreenCodeWrapperView *separatorWrapperView; // ivar: _separatorWrapperView
@property (nonatomic) BOOL showButtonLockup; // ivar: _showButtonLockup
@property (readonly) Class superclass;
@property (retain, nonatomic) VSOnscreenCodeWrapperView *websiteWrapperView; // ivar: _websiteWrapperView


-(id)initWithButtonLockup:(BOOL)arg0 ;
-(void)buttonLockupPressed;
-(void)setupLayout;
-(void)setupQRCodeContainer;
-(void)setupSeparatorContainer;
-(void)setupViews;
-(void)setupWebsiteContainer;
-(void)updateUIWithViewModel:(id)arg0 ;


@end


#endif