// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSONSCREENCODEVIEWMODEL_H
#define VSONSCREENCODEVIEWMODEL_H

@class NSString, UIImage, NSItemProvider, NSURL;
@protocol VSLogoImageViewModel, VSOnscreenCodeViewModelDelegate;


#import "VSViewModel.h"

@interface VSOnscreenCodeViewModel : VSViewModel <VSLogoImageViewModel>



@property (copy, nonatomic) NSString *buttonLockupTitle; // ivar: _buttonLockupTitle
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VSOnscreenCodeViewModelDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *logo; // ivar: _logo
@property (copy, nonatomic) NSString *logoAccessibilityLabel; // ivar: _logoAccessibilityLabel
@property (retain, nonatomic) NSItemProvider *logoProvider; // ivar: _logoProvider
@property (copy, nonatomic) NSString *onscreenCode; // ivar: _onscreenCode
@property (retain, nonatomic) UIImage *qrCode; // ivar: _qrCode
@property (nonatomic) BOOL showButtonLockup; // ivar: _showButtonLockup
@property (readonly) Class superclass;
@property (copy, nonatomic) NSURL *webPageURL; // ivar: _webPageURL


-(id)formattedWebsiteURL;
-(id)websiteURLWithQueryParameters;
-(void)configureWithRequest:(id)arg0 ;
-(void)generateQRCode;


@end


#endif