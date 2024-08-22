// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHARINGCONFIDENTIALITYCONTROLLER_H
#define PXSHARINGCONFIDENTIALITYCONTROLLER_H


#import <Foundation/Foundation.h>


@interface PXSharingConfidentialityController : NSObject



+(BOOL)confidentialWarningRequiredForAsset:(id)arg0 ;
+(BOOL)confidentialWarningRequiredForAssetReferences:(id)arg0 ;
+(BOOL)confidentialWarningRequiredForAssets:(id)arg0 ;
+(BOOL)confidentialWarningRequiredForShareableSelection:(id)arg0 ;
+(BOOL)confidentialityCheckRequired;
+(id)confidentialFeatureWarningMessage;
+(id)confidentialityAlertWithActions:(id)arg0 ;
+(id)confidentialityAlertWithConfirmAction:(id)arg0 ;
// +(id)confidentialityAlertWithConfirmAction:(id)arg0 abortAction:(unk)arg1  ;
+(id)confidentialityWarningMessage;
+(id)confidentialityWarningTitle;


@end


#endif