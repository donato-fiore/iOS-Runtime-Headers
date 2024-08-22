// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FRCFACEHANDLEGRECTANGLE_H
#define FRCFACEHANDLEGRECTANGLE_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface FRCFaceHandLegRectangle : NSObject

@property (nonatomic) CGRect boundingBox; // ivar: _boundingBox
@property (nonatomic) NSUInteger category; // ivar: _category
@property (copy, nonatomic) NSNumber *roll; // ivar: _roll
@property (copy, nonatomic) NSNumber *yaw; // ivar: _yaw


+(id)bodyRectangleWithCenter:(struct CGPoint )arg0 tip:(struct CGPoint )arg1 category:(NSUInteger)arg2 frameAspectRatio:(float)arg3 ;
+(id)faceRectangleWithBoundingBox:(struct CGRect )arg0 roll:(id)arg1 yaw:(id)arg2 ;
+(id)handRectangleWithObservation:(id)arg0 ;
+(id)humanRectangleWithBoundingBox:(struct CGRect )arg0 ;


@end


#endif