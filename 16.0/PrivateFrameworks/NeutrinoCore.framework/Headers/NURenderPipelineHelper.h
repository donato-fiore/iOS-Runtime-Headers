// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NURENDERPIPELINEHELPER_H
#define NURENDERPIPELINEHELPER_H


#import <Foundation/Foundation.h>

#import "NURenderPipelineState.h"

@interface NURenderPipelineHelper : NSObject

@property (readonly, nonatomic) NURenderPipelineState *pipelineState; // ivar: _pipelineState


-(BOOL)endGroupWithName:(id)arg0 error:(*id)arg1 ;
-(BOOL)hasStaticTime;
-(BOOL)isCIFilterAvailable:(id)arg0 propertyName:(id)arg1 ;
-(BOOL)isSourceAvailable:(id)arg0 sourceSettings:(id)arg1 ;
-(BOOL)resetTag:(id)arg0 input:(id)arg1 error:(*id)arg2 ;
-(NSInteger)mediaTypeForComposition:(id)arg0 ;
-(id)addTagWithName:(id)arg0 inputNode:(id)arg1 error:(*id)arg2 ;
-(id)auxiliaryImageFromComposition:(id)arg0 type:(id)arg1 mediaComponentType:(id)arg2 error:(*id)arg3 ;
-(id)beginGroupWithName:(id)arg0 error:(*id)arg1 ;
-(id)cacheNode:(id)arg0 type:(id)arg1 settings:(id)arg2 error:(*id)arg3 ;
-(id)createSloMoWithInput:(id)arg0 startTime:(struct ? )arg1 endTime:(struct ? )arg2 rate:(float)arg3 error:(*id)arg4 ;
-(id)cropNode:(id)arg0 cropRect:(struct ? )arg1 cropSettings:(id)arg2 ;
-(id)getTagWithPath:(id)arg0 error:(*id)arg1 ;
-(id)initWithPipelineState:(id)arg0 ;
-(id)inputForPath:(id)arg0 error:(*id)arg1 ;
-(id)livePhotoKeyFrameMetadataFromNode:(id)arg0 time:(struct ? )arg1 error:(*id)arg2 ;
-(id)orientedNode:(id)arg0 withOrientation:(NSInteger)arg1 ;
-(id)perspectiveTransformWithPitch:(CGFloat)arg0 yaw:(CGFloat)arg1 roll:(CGFloat)arg2 imageRect:(struct CGRect )arg3 ;
-(id)renderNodeFromSource:(id)arg0 settings:(id)arg1 error:(*id)arg2 ;
-(id)scaleNode:(id)arg0 scale:(struct ? )arg1 error:(*id)arg2 ;
-(id)straightenTransformWithAngle:(CGFloat)arg0 extent:(struct ? )arg1 ;
-(id)trimInput:(id)arg0 startTime:(struct ? )arg1 endTime:(struct ? )arg2 error:(*id)arg3 ;
-(id)vectorWithFloats:(id)arg0 ;
-(void)resetTag:(id)arg0 input:(id)arg1 ;


@end


#endif