// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMATCHMOVEANIMATION_H
#define CAMATCHMOVEANIMATION_H

@class NSString, NSArray;


#import "CAAnimation.h"
#import "CALayer.h"

@interface CAMatchMoveAnimation : CAAnimation

@property (getter=isAdditive) BOOL additive;
@property BOOL appliesRotation;
@property BOOL appliesScale;
@property BOOL appliesX;
@property BOOL appliesY;
@property (copy) NSString *keyPath;
@property unsigned int sourceContextId;
@property (weak) CALayer *sourceLayer;
@property NSUInteger sourceLayerRenderId;
@property (copy) NSArray *sourcePoints;
@property BOOL targetsSuperlayer;
@property BOOL usesNormalizedCoordinates;


+(id)defaultValueForKey:(id)arg0 ;
-(*void)_copyRenderAnimationForLayer:(id)arg0 ;
-(BOOL)CA_validateValue:(id)arg0 forKey:(id)arg1 ;
-(BOOL)_setCARenderAnimation:(*void)arg0 layer:(id)arg1 ;
-(unsigned int)_propertyFlagsForLayer:(id)arg0 ;
-(void)applyForTime:(CGFloat)arg0 presentationObject:(id)arg1 modelObject:(id)arg2 ;


@end


#endif