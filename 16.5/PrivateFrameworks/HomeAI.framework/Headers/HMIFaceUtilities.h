// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIFACEUTILITIES_H
#define HMIFACEUTILITIES_H

@class HMFObject, NSString;
@protocol HMFLogging;



@interface HMIFaceUtilities : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isValidFaceCrop:(id)arg0 ;
+(BOOL)saveFaceClassifications:(id)arg0 videoId:(id)arg1 fragmentId:(NSUInteger)arg2 frameId:(id)arg3 baseURL:(id)arg4 error:(*id)arg5 ;
+(BOOL)serializeJSONObject:(id)arg0 url:(id)arg1 error:(*id)arg2 ;
+(NSUInteger)faceprintDefaultRevision;
+(id)croppedJpegDataFromFaceCrop:(id)arg0 ;
+(id)faceObservationFromFaceprint:(id)arg0 ;
+(id)faceObservationFromTorsoprint:(id)arg0 ;
+(id)faceObservationsFromFaceprintsForClustering:(id)arg0 ;
+(id)imageCreationOptions;
+(id)logCategory;
+(id)mergedPersonEventsFromEvents:(id)arg0 ;
+(id)newDictionaryPopulatedWithFaceCropDataFromImageData:(id)arg0 ;
+(struct CGRect )absoluteFaceBoxFromPhotosFaceCropImageData:(id)arg0 ;
+(struct CGRect )faceBoundingBoxFromPhotosFaceCropData:(id)arg0 ;
+(struct CGSize )faceCropDimensionsFromFaceCrop:(id)arg0 error:(*id)arg1 ;


@end


#endif