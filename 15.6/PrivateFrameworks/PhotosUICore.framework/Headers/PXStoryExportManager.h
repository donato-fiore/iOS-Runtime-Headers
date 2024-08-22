// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYEXPORTMANAGER_H
#define PXSTORYEXPORTMANAGER_H

@class NSOperationQueue;

#import <Foundation/Foundation.h>


@interface PXStoryExportManager : NSObject

@property (nonatomic) NSInteger maxConcurrentExportCount;
@property (readonly, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (nonatomic) NSInteger qualityOfService; // ivar: _qualityOfService


+(BOOL)collectAnalyticsForFixationWithAppleMusicAsset:(id)arg0 configuration:(id)arg1 ;
+(id)_appleIDCountry;
+(id)_aspectDescriptionFromSize:(struct CGSize )arg0 ;
+(id)_defaultPayloadForConfiguration:(id)arg0 ;
+(id)collectAnalyticsForExportBeginWithConfiguration:(id)arg0 ;
+(id)frequentSignpostLog;
+(id)photoLibraryForStoryConfiguration:(id)arg0 ;
+(void)_incrementShareCountForMemory:(id)arg0 ;
+(void)collectAnalyticsForExportEndWithConfiguration:(id)arg0 analyticsToken:(id)arg1 model:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4 ;
+(void)collectDataContinuationAnalyticsForExportWithConfiguration:(id)arg0 withSuccess:(BOOL)arg1 error:(id)arg2 ;
-(id)init;
// -(id)requestExportWithDestinationURL:(id)arg0 configuration:(id)arg1 progressHandler:(id)arg2 completionHandler:(unk)arg3  ;
-(void)cancelAllExports;


@end


#endif