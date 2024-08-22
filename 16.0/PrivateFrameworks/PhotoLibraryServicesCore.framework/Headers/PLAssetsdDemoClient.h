// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLASSETSDDEMOCLIENT_H
#define PLASSETSDDEMOCLIENT_H



#import "PLAssetsdBaseClient.h"

@interface PLAssetsdDemoClient : PLAssetsdBaseClient



-(BOOL)hasCompletedMomentAnalysis:(*BOOL)arg0 error:(*id)arg1 ;
-(BOOL)hasCompletedRestorePostProcessing:(*BOOL)arg0 error:(*id)arg1 ;
-(void)cleanupForStoreDemoMode;


@end


#endif