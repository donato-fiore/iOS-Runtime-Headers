// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFEEDBACKTAPTORADARUTILITIES_H
#define PXFEEDBACKTAPTORADARUTILITIES_H


#import <Foundation/Foundation.h>


@interface PXFeedbackTapToRadarUtilities : NSObject



+(id)_tempDirectoryURL;
+(id)alertControllerWithInternalReleaseAgreementAndCompletion:(id)arg0 ;
+(id)alertControllerWithPrivacyTitle:(id)arg0 message:(id)arg1 completion:(id)arg2 ;
+(id)attachmentURLForDiagnosticDictionaries:(id)arg0 descriptionName:(id)arg1 ;
+(id)captureScreenshot;
+(id)defaultDescription;
+(id)defaultTitlePrefix;
+(id)detailedDebugDescriptionFileForAsset:(id)arg0 ;
+(id)imageFileURLForAsset:(id)arg0 ;
+(id)internalReleaseAgreement;
+(id)summaryDescription;
+(id)thumbnailFileURLForAsset:(id)arg0 ;
+(void)fileRadarWithTitle:(id)arg0 description:(id)arg1 classification:(id)arg2 componentID:(id)arg3 componentName:(id)arg4 componentVersion:(id)arg5 keyword:(id)arg6 attachmentURLs:(id)arg7 includeSysDiagnose:(BOOL)arg8 completionHandler:(id)arg9 ;
+(void)fileRadarWithTitle:(id)arg0 description:(id)arg1 classification:(id)arg2 componentID:(id)arg3 componentName:(id)arg4 componentVersion:(id)arg5 keyword:(id)arg6 screenshotURLs:(id)arg7 attachmentURLs:(id)arg8 includeSysDiagnose:(BOOL)arg9 includeInternalRelease:(BOOL)arg10 additionalExtensionIdentifiers:(id)arg11 completionHandler:(id)arg12 ;
+(void)presentTermsAndConditionsForUIViewController:(id)arg0 completion:(id)arg1 ;


@end


#endif