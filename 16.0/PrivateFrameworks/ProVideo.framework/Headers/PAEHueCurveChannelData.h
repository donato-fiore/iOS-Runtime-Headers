// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PAEHUECURVECHANNELDATA_H
#define PAEHUECURVECHANNELDATA_H

@protocol NSSecureCoding, NSCopying, FxCustomParameterInterpolation_v2;

#import <Foundation/Foundation.h>


@interface PAEHueCurveChannelData : NSObject <NSSecureCoding, NSCopying, FxCustomParameterInterpolation_v2>

 {
    *void _curve_private;
}




+(BOOL)supportsSecureCoding;
+(id)channelDataWithCurve:(*void)arg0 ;
-(*void)curveRef;
-(BOOL)isAtDefaults;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)evaluate:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCurve:(*void)arg0 ;
-(id)interpolateBetween:(id)arg0 withWeight:(float)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)reset;


@end


#endif