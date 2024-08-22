// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFCERTIFICATEWARNINGJSCONTROLLER_H
#define SFCERTIFICATEWARNINGJSCONTROLLER_H

@protocol SFCertificateWarningJSControllerMethods;

#import <Foundation/Foundation.h>

#import "SFWebProcessPlugInCertificateWarningController.h"

@interface SFCertificateWarningJSController : NSObject <SFCertificateWarningJSControllerMethods>

 {
    SFWebProcessPlugInCertificateWarningController *_certificateWarningController;
}




-(id)initWithCertificateWarningController:(id)arg0 ;
-(void)goBackSelected;
-(void)openClockSettings;
-(void)pageLoaded;
-(void)showCertificateInformation;
-(void)visitInsecureWebsite;
-(void)visitInsecureWebsiteWithTemporaryBypass;


@end


#endif