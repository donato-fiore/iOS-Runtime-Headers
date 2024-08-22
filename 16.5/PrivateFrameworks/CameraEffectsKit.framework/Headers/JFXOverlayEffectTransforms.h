// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JFXOVERLAYEFFECTTRANSFORMS_H
#define JFXOVERLAYEFFECTTRANSFORMS_H

@class PVTransformAnimation;


#import "JFXTextEffectTransforms.h"
#import "JFXFaceTrackedEffectTransform.h"

@interface JFXOverlayEffectTransforms : JFXTextEffectTransforms

@property (copy, nonatomic) JFXFaceTrackedEffectTransform *faceTrackingTransform; // ivar: _faceTrackingTransform
@property (copy, nonatomic) PVTransformAnimation *transformAnimation; // ivar: _transformAnimation


+(id)transformsWithEffect:(id)arg0 ;
+(id)transformsWithTransform:(id)arg0 transformAnimation:(id)arg1 faceTrackingTransform:(id)arg2 ;
-(id)initWithEffect:(id)arg0 ;
-(id)initWithTransform:(id)arg0 transformAnimation:(id)arg1 faceTrackingTransform:(id)arg2 ;
-(void)applyToEffect:(id)arg0 ;


@end


#endif