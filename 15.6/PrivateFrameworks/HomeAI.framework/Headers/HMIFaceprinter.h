// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIFACEPRINTER_H
#define HMIFACEPRINTER_H

@class HMFObject, NSString;
@protocol HMFLogging;



@interface HMIFaceprinter : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)_minorVersionFromVisionVersion:(int)arg0 ;
+(id)currentModelUUID;
+(id)logCategory;
+(struct __CVBuffer *)createFacePixelBufferForFaceDetection:(id)arg0 pixelBuffer:(struct __CVBuffer *)arg1 roll:(id)arg2 error:(*id)arg3 ;
+(struct __CVBuffer *)createFacePixelBufferForFaceEvent:(id)arg0 pixelBuffer:(struct __CVBuffer *)arg1 roll:(id)arg2 error:(*id)arg3 ;
-(id)createFaceprintForFacePixelBuffer:(struct __CVBuffer *)arg0 fastMode:(BOOL)arg1 error:(*id)arg2 ;
-(id)generateFaceprintForFaceCrop:(id)arg0 error:(*id)arg1 ;
-(id)updatedFaceprintsForFaceCrops:(id)arg0 withExistingFaceprints:(id)arg1 error:(*id)arg2 ;
-(struct __CVBuffer *)createFacePixelBufferFromFaceCrop:(id)arg0 error:(*id)arg1 ;
-(void)warmStart;


@end


#endif