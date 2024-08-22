// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSAPPLICATIONSCREENSHOTSUPPLEMENTALDATACAPTURER_H
#define SSAPPLICATIONSCREENSHOTSUPPLEMENTALDATACAPTURER_H

@class FBSOpenApplicationService;

#import <Foundation/Foundation.h>


@interface SSApplicationScreenshotSupplementalDataCapturer : NSObject {
    FBSOpenApplicationService *_openAppService;
}




+(id)settingsForDocumentCapture:(BOOL)arg0 elementIdentifier:(id)arg1 ;
-(id)init;
-(void)_sendRequestForEnvironmentElement:(id)arg0 info:(id)arg1 completionBlock:(id)arg2 ;
-(void)captureDocumentForEnvironmentElement:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)captureMetadataForEnvironmentElement:(id)arg0 withCompletionBlock:(id)arg1 ;


@end


#endif