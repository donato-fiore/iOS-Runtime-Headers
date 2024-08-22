// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIANALYTICS_H
#define HMIANALYTICS_H

@class HMFObject, NSString;
@protocol HMFLogging;



@interface HMIAnalytics : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)lazyPayloads;
+(BOOL)sendEventWithName:(id)arg0 payloadBuilder:(id)arg1 ;
+(BOOL)upload;
+(NSInteger)bucketForValue:(NSInteger)arg0 usingBuckets:(id)arg1 ;
+(id)logCategory;
+(id)payloadWithCamera:(id)arg0 ;
+(void)sendEventForClusteringTask:(id)arg0 ;
+(void)sendEventForFaceEvent:(id)arg0 homePersonManagerUUID:(id)arg1 camera:(id)arg2 ;
+(void)sendEventForPersonRecognitionType:(NSInteger)arg0 camera:(id)arg1 ;
+(void)sendEventForPersonsModels:(id)arg0 ;
+(void)sendEventsForFragmentResult:(id)arg0 ;
+(void)videoAnalyzerDidAnalyzeFragmentWithResult:(id)arg0 state:(id)arg1 ;
+(void)videoAnalyzerDidCreateTimelapseFragment:(id)arg0 state:(id)arg1 ;
+(void)videoAnalyzerDidFindFaceEvent:(id)arg0 homePersonManagerUUID:(id)arg1 camera:(id)arg2 ;
+(void)videoAnalyzerDidTerminateWithError:(id)arg0 state:(id)arg1 ;
+(void)videoPackageAnalyzerDidClassifyCandidateAsPackage:(BOOL)arg0 camera:(id)arg1 ;
+(void)videoPackageAnalyzerDidResetReferenceImageWithInterval:(CGFloat)arg0 camera:(id)arg1 ;


@end


#endif