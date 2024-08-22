// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDGRADIENTFILL_H
#define EDGRADIENTFILL_H

@class NSMutableDictionary;


#import "EDFill.h"

@interface EDGradientFill : EDFill {
    int mType;
    NSMutableDictionary *mStops;
    CGFloat mDegree;
    CGRect mFocusRect;
}




+(id)gradientWithType:(int)arg0 degree:(CGFloat)arg1 focusRect:(struct CGRect )arg2 stops:(id)arg3 resources:(id)arg4 ;
+(id)gradientWithType:(int)arg0 degree:(CGFloat)arg1 top:(CGFloat)arg2 bottom:(CGFloat)arg3 right:(CGFloat)arg4 left:(CGFloat)arg5 stops:(id)arg6 resources:(id)arg7 ;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToGradientFill:(id)arg0 ;
-(CGFloat)degree;
-(NSUInteger)hash;
-(id)colorForStopAtPosition:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithResources:(id)arg0 ;
-(id)initWithType:(int)arg0 degree:(CGFloat)arg1 focusRect:(struct CGRect )arg2 stops:(id)arg3 resources:(id)arg4 ;
-(id)initWithType:(int)arg0 degree:(CGFloat)arg1 top:(CGFloat)arg2 bottom:(CGFloat)arg3 right:(CGFloat)arg4 left:(CGFloat)arg5 stops:(id)arg6 resources:(id)arg7 ;
-(id)stops;
-(int)type;
-(struct CGRect )focusRect;
-(void)setDegree:(CGFloat)arg0 ;
-(void)setFocusRect:(struct CGRect )arg0 ;
-(void)setStopColor:(id)arg0 atPosition:(id)arg1 ;
-(void)setStops:(id)arg0 ;
-(void)setType:(int)arg0 ;


@end


#endif