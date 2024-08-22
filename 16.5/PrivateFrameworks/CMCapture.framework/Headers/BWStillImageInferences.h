// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWSTILLIMAGEINFERENCES_H
#define BWSTILLIMAGEINFERENCES_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface BWStillImageInferences : NSObject {
    NSDictionary *_smartCameraClassifications;
}


@property (readonly, nonatomic) NSArray *faceObservations; // ivar: _faceObservations
@property (readonly, nonatomic) NSDictionary *inferenceAttachedMediaMetadata; // ivar: _inferenceAttachedMediaMetadata
@property (readonly, nonatomic) NSArray *lowResPersonInstanceBoundingBoxes; // ivar: _lowResPersonInstanceBoundingBoxes
@property (readonly, nonatomic) NSArray *lowResPersonInstanceConfidences; // ivar: _lowResPersonInstanceConfidences
@property (readonly, nonatomic) NSArray *lowResPersonInstanceMasks; // ivar: _lowResPersonInstanceMasks
@property (readonly, nonatomic) *__CVBuffer lowResPersonMask; // ivar: _lowResPersonMask
@property (readonly, nonatomic) *__CVBuffer personMask; // ivar: _personMask
@property (readonly, nonatomic) *__CVBuffer skinMask; // ivar: _skinMask
@property (readonly, nonatomic) NSArray *skinToneClassifications; // ivar: _skinToneClassifications
@property (readonly, nonatomic) *__CVBuffer skyMask; // ivar: _skyMask


-(id)description;
-(id)initWithSkinMask:(struct __CVBuffer *)arg0 skyMask:(struct __CVBuffer *)arg1 personMask:(struct __CVBuffer *)arg2 lowResPersonMask:(struct __CVBuffer *)arg3 lowResPersonInstanceMasks:(id)arg4 lowResPersonInstanceConfidences:(id)arg5 lowResPersonInstanceBoundingBoxes:(id)arg6 skinToneClassifications:(id)arg7 faceObservations:(id)arg8 inferenceAttachedMediaMetadata:(id)arg9 ;
-(void)addInference:(id)arg0 inferenceAttachmentKey:(id)arg1 ;
-(void)addInferenceAttachedMediaMetadata:(id)arg0 ;
-(void)addInferenceBuffer:(struct __CVBuffer *)arg0 inferenceAttachedMediaKey:(id)arg1 ;
-(void)dealloc;


@end


#endif