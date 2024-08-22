// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSONSCREENCODEVIEWMODEL_H
#define VSONSCREENCODEVIEWMODEL_H

@class NSString, UIImage, NSItemProvider, NSURL;
@protocol VSLogoImageViewModel;


#import "VSViewModel.h"
#import "VSMessageQueue.h"

@interface VSOnscreenCodeViewModel : VSViewModel <VSLogoImageViewModel>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *footerText; // ivar: _footerText
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *logo; // ivar: _logo
@property (copy, nonatomic) NSString *logoAccessibilityLabel; // ivar: _logoAccessibilityLabel
@property (retain, nonatomic) NSItemProvider *logoProvider; // ivar: _logoProvider
@property (copy, nonatomic) NSString *onscreenCode; // ivar: _onscreenCode
@property (copy, nonatomic) NSString *regenerateCodeButtonTitle; // ivar: _regenerateCodeButtonTitle
@property (retain, nonatomic) VSMessageQueue *regenerateCodeEventQueue; // ivar: _regenerateCodeEventQueue
@property (nonatomic) BOOL shouldShowRegenerateCodeButton; // ivar: _shouldShowRegenerateCodeButton
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *webPagePostamble; // ivar: _webPagePostamble
@property (copy, nonatomic) NSString *webPagePreamble; // ivar: _webPagePreamble
@property (copy, nonatomic) NSURL *webPageURL; // ivar: _webPageURL


-(id)init;
-(void)configureWithRequest:(id)arg0 ;


@end


#endif