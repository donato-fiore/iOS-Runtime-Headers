// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHASSETEXPORTREQUEST_H
#define PHASSETEXPORTREQUEST_H

@class NSURL, NSString, PFMetadata, NSDate, NSMutableDictionary, NSProgress, NSDictionary;
@protocol NSProgressReporting, OS_dispatch_queue, PHAssetExportRequestDelegate;

#import <Foundation/Foundation.h>

#import "PHAsset.h"

@interface PHAssetExportRequest : NSObject <NSProgressReporting>

 {
    NSURL *_outputDirectory;
    NSObject<OS_dispatch_queue> *_resourceProcessingQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
}


@property (copy, nonatomic) NSString *analyticsActivityType; // ivar: _analyticsActivityType
@property (readonly, nonatomic) PHAsset *asset; // ivar: _asset
@property (readonly, nonatomic) PFMetadata *assetMetadata; // ivar: _assetMetadata
@property (nonatomic) BOOL assetMetadataRetrievalAttempted; // ivar: _assetMetadataRetrievalAttempted
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PHAssetExportRequestDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *exportUUID; // ivar: _exportUUID
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *preparationStepSignpostIntervalStartTime; // ivar: _preparationStepSignpostIntervalStartTime
@property (retain, nonatomic) NSMutableDictionary *preparationStepTimingInfo; // ivar: _preparationStepTimingInfo
@property (nonatomic) NSInteger prepareItemEventCPAnalyticsSignpostId; // ivar: _prepareItemEventCPAnalyticsSignpostId
@property (readonly, nonatomic) NSProgress *progress; // ivar: _progress
@property (nonatomic) BOOL shouldSendTimingIntervalsToAnalytics; // ivar: _shouldSendTimingIntervalsToAnalytics
@property (readonly, nonatomic) NSUInteger signpostId; // ivar: _signpostId
@property (readonly, nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDictionary *variants; // ivar: _variants


+(BOOL)errorIsLowDiskSpaceRelated:(id)arg0 ;
+(id)exportRequestForAsset:(id)arg0 error:(*id)arg1 ;
+(id)exportRequestForAsset:(id)arg0 variants:(id)arg1 error:(*id)arg2 ;
-(BOOL)reassembleAdjustmentsPropertyListIfNeeded:(id)arg0 toOutputDirectory:(id)arg1 outputURL:(*id)arg2 error:(*id)arg3 ;
-(id)_generateAnalyticsPayloadWithTimingInfo:(id)arg0 preparationOptions:(id)arg1 ;
-(id)copyFileURLsIfNeeded:(id)arg0 toOutputDirectory:(id)arg1 options:(id)arg2 originalFilenameBase:(id)arg3 error:(*id)arg4 ;
-(id)finalizeTotalPreparationDurationTimingInfoDictionary;
-(id)init;
-(id)initWithAsset:(id)arg0 variants:(id)arg1 ;
-(id)outputDirectory;
-(void)bundleResourcesIfNeededForAsset:(id)arg0 withFileURLs:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(void)commitTimingInfoForPreparationStep:(id)arg0 fromStartTime:(id)arg1 ;
-(void)exportWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)handleResultWithFileURLs:(id)arg0 cancelled:(BOOL)arg1 withError:(id)arg2 forAsset:(id)arg3 withOptions:(id)arg4 progress:(id)arg5 processingUnitCount:(NSInteger)arg6 completionHandler:(id)arg7 ;
-(void)performCompletionWithFileURLs:(id)arg0 preparationOptions:(id)arg1 error:(id)arg2 completionHandler:(id)arg3 ;
-(void)preflightExportWithOptions:(id)arg0 assetAvailability:(*NSInteger)arg1 isProcessingRequired:(*BOOL)arg2 fileURLs:(*id)arg3 info:(*id)arg4 ;
-(void)processResourcesAtFileURLs:(id)arg0 forAsset:(id)arg1 withOptions:(id)arg2 progress:(id)arg3 processingUnitCount:(NSInteger)arg4 completion:(id)arg5 ;
-(void)sendPreparationCompletedEventWithPreparationTimingInfo:(id)arg0 forActivityType:(id)arg1 preparationOptions:(id)arg2 withError:(id)arg3 didCancel:(BOOL)arg4 ;
-(void)updateSignpostIntervalsChangingFromState:(NSUInteger)arg0 toState:(NSUInteger)arg1 ;


@end


#endif