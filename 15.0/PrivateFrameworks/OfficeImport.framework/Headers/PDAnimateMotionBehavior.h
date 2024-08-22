// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDANIMATEMOTIONBEHAVIOR_H
#define PDANIMATEMOTIONBEHAVIOR_H

@class NSString;


#import "PDAnimateScaleBehavior.h"
#import "OITSUBezierPath.h"

@interface PDAnimateMotionBehavior : PDAnimateScaleBehavior {
    OITSUBezierPath *mPath;
    BOOL mHasAngle;
    CGFloat mAngle;
    NSString *mPointsTypes;
    BOOL mHasOriginType;
    int mOriginType;
    BOOL mHasRotationCenter;
    CGPoint mRotationCenter;
    BOOL mHasPathEditMode;
    int mPathEditMode;
}




+(id)NSStringForBezierPath:(id)arg0 ;
+(id)bezierPathFromNSString:(id)arg0 ;
-(BOOL)hasAngle;
-(BOOL)hasOriginType;
-(BOOL)hasPath;
-(BOOL)hasPathEditMode;
-(BOOL)hasRotationCenter;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)angle;
-(NSUInteger)hash;
-(id)path;
-(id)pointsTypes;
-(int)originType;
-(int)pathEditMode;
-(struct CGPoint )rotationCenter;
-(void)setAngle:(CGFloat)arg0 ;
-(void)setOriginType:(int)arg0 ;
-(void)setPath:(id)arg0 ;
-(void)setPathEditMode:(int)arg0 ;
-(void)setPointsTypes:(id)arg0 ;
-(void)setRotationCenter:(struct CGPoint )arg0 ;


@end


#endif