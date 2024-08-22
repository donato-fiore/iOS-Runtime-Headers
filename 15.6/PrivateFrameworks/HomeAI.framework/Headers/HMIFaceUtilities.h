// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIFACEUTILITIES_H
#define HMIFACEUTILITIES_H

@class HMFObject, NSString;
@protocol HMFLogging;



@interface HMIFaceUtilities : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)saveFaceClassifications:(id)arg0 videoId:(id)arg1 fragmentId:(NSUInteger)arg2 frameId:(id)arg3 baseURL:(id)arg4 error:(*id)arg5 ;
+(BOOL)serializeJSONObject:(id)arg0 url:(id)arg1 error:(*id)arg2 ;
+(NSUInteger)faceprintDefaultRevision;
+(id)faceObservationFromFaceprint:(id)arg0 ;
+(id)faceObservationsFromFaceprintsForClustering:(id)arg0 ;
+(id)logCategory;
+(id)mergedPersonEventsFromEvents:(id)arg0 ;


@end


#endif