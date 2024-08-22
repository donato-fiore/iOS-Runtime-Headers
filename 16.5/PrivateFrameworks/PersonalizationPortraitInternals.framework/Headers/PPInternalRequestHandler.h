// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPINTERNALREQUESTHANDLER_H
#define PPINTERNALREQUESTHANDLER_H

@protocol PPInternalServerProtocol;

#import <Foundation/Foundation.h>


@interface PPInternalRequestHandler : NSObject <PPInternalServerProtocol>





-(void)abGroupInfoWithCompletion:(id)arg0 ;
-(void)assetDefaultBundleOverridePathForAssetIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)assetMetadataRefreshIntervalSecondsWithCompletion:(id)arg0 ;
-(void)assetVersionsWithCompletion:(id)arg0 ;
-(void)clearAssetMetadataRefreshIntervalSecondsWithCompletion:(id)arg0 ;
-(void)downloadAssetMetadataWithCompletion:(id)arg0 ;
-(void)setAssetDefaultBundleOverridePath:(id)arg0 assetIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)setAssetMetadataRefreshIntervalSeconds:(CGFloat)arg0 completion:(id)arg1 ;
-(void)setTrialUseDefaultFiles:(BOOL)arg0 completion:(id)arg1 ;
-(void)sysdiagnoseInformationWithCompletion:(id)arg0 ;
-(void)trialOverridePath:(id)arg0 namespaceName:(id)arg1 factorName:(id)arg2 completion:(id)arg3 ;


@end


#endif