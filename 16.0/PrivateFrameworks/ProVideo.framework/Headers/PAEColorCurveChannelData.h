// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PAECOLORCURVECHANNELDATA_H
#define PAECOLORCURVECHANNELDATA_H

@protocol NSSecureCoding, NSCopying, FxCustomParameterInterpolation_v2;

#import <Foundation/Foundation.h>


@interface PAEColorCurveChannelData : NSObject <NSSecureCoding, NSCopying, FxCustomParameterInterpolation_v2>

 {
    *void _curve_private;
}




+(BOOL)supportsSecureCoding;
+(id)channelDataWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 ;
+(id)channelDataWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 curve:(*void)arg3 ;
-(*void)curveRef;
-(BOOL)isAtDefaults;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)blue;
-(CGFloat)evaluate:(CGFloat)arg0 ;
-(CGFloat)green;
-(CGFloat)red;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 ;
-(id)initWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 curve:(*void)arg3 ;
-(id)interpolateBetween:(id)arg0 withWeight:(float)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)reset;


@end


#endif