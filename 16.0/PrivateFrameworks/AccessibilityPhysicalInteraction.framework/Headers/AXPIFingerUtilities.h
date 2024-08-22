// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXPIFINGERUTILITIES_H
#define AXPIFINGERUTILITIES_H


#import <Foundation/Foundation.h>


@interface AXPIFingerUtilities : NSObject



+(BOOL)laserEnabled;
+(NSUInteger)fingerShapeForCorner:(NSUInteger)arg0 ;
+(id)_points:(id)arg0 adjustedForBounds:(struct CGRect )arg1 ;
+(id)defaultLocationsForNumberOfFingers:(NSUInteger)arg0 aroundPoint:(struct CGPoint )arg1 ;
+(id)defaultLocationsForNumberOfFingers:(NSUInteger)arg0 aroundPoint:(struct CGPoint )arg1 withinBounds:(struct CGRect )arg2 ;
+(id)defaultPinchLocationsAroundPoint:(struct CGPoint )arg0 withinBounds:(struct CGRect )arg1 ;
+(id)fingerModelsForPointStrings:(id)arg0 ;
+(id)pointStringsForFingerModels:(id)arg0 ;
+(id)pointerAnimationSettings;
+(id)pointerFiltersForLuminanceLevel:(NSUInteger)arg0 ;
+(void)updateFirstLocation:(struct CGPoint *)arg0 secondLocation:(struct CGPoint *)arg1 forPinchWithRadiusDelta:(CGFloat)arg2 angleDelta:(CGFloat)arg3 ;


@end


#endif