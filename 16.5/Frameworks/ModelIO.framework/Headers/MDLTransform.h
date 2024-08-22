// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDLTRANSFORM_H
#define MDLTRANSFORM_H

@class NSString, NSArray, CAAnimation;
@protocol NSCopying, MDLTransformComponent;

#import <Foundation/Foundation.h>


@interface MDLTransform : NSObject <NSCopying, MDLTransformComponent>

 {
    MDLAffineTransform _transform;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *keyTimes;
@property (nonatomic) ? matrix;
@property (readonly, nonatomic) CGFloat maximumTime;
@property (readonly, nonatomic) CGFloat minimumTime;
@property (nonatomic) BOOL resetsTransform;
@property ? rotation;
@property ? scale;
@property ? shear;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CAAnimation *transformAnimation;
@property ? translation;


+(struct ? )globalTransformWithObject:(id)arg0 atTime:(CGFloat)arg1 ;
+(struct ? )localTransformWithObject:(id)arg0 atTime:(CGFloat)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMatrix:(struct ? )arg0 ;
-(id)initWithTransformComponent:(id)arg0 ;
-(id)rotationAtTime;
-(id)scaleAtTime;
-(id)shearAtTime;
-(id)translationAtTime;
-(struct ? )localTransformAtTime:(CGFloat)arg0 ;
-(struct ? )rotationMatrixAtTime:(CGFloat)arg0 ;


@end


#endif