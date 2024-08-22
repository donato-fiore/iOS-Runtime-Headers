// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMATCHPROPERTYANIMATION_H
#define CAMATCHPROPERTYANIMATION_H

@class NSString;


#import "CAAnimation.h"
#import "CALayer.h"

@interface CAMatchPropertyAnimation : CAAnimation

@property (getter=isAdditive) BOOL additive;
@property (copy) NSString *keyPath;
@property unsigned int sourceContextId;
@property (weak) CALayer *sourceLayer;
@property NSUInteger sourceLayerRenderId;


-(*void)_copyRenderAnimationForLayer:(id)arg0 ;
-(BOOL)_setCARenderAnimation:(*void)arg0 layer:(id)arg1 ;
-(unsigned int)_propertyFlagsForLayer:(id)arg0 ;
-(void)applyForTime:(CGFloat)arg0 presentationObject:(id)arg1 modelObject:(id)arg2 ;


@end


#endif