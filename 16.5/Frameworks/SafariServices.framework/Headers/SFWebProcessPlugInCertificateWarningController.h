// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFWEBPROCESSPLUGINCERTIFICATEWARNINGCONTROLLER_H
#define SFWEBPROCESSPLUGINCERTIFICATEWARNINGCONTROLLER_H

@class _WKRemoteObjectInterface, WBSCertificateWarningPageContext, NSString;
@protocol WBSCertificateWarningPagePresenter, WBSCertificateWarningPageHandler;

#import <Foundation/Foundation.h>

#import "_SFWebProcessPlugInPageController.h"

@interface SFWebProcessPlugInCertificateWarningController : NSObject <WBSCertificateWarningPagePresenter>

 {
    _SFWebProcessPlugInPageController *_pageController;
    _WKRemoteObjectInterface *_certificateWarningPagePresenterInterface;
    WBSCertificateWarningPageContext *_warningPageContext;
    id<WBSCertificateWarningPageHandler> *_certificateWarningPageHandlerProxy;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_certificateWarningPageHandlerProxy;
-(id)initWithPageController:(id)arg0 ;
-(void)_clearCertificateWarningPagePresenterInterface;
-(void)_setUpCertificateWarningPagePresenterInterface;
-(void)certificateWarningPageLoaded;
-(void)dealloc;
-(void)goBackSelected;
-(void)injectCertificateWarningBindingsForFrame:(id)arg0 inScriptWorld:(id)arg1 ;
-(void)openClockSettings;
-(void)prepareCertificateWarningPage:(id)arg0 ;
-(void)showCertificateInformation;
-(void)visitInsecureWebsite;
-(void)visitInsecureWebsiteWithTemporaryBypass;


@end


#endif