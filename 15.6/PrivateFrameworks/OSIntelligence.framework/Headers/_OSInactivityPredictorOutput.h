// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _OSINACTIVITYPREDICTOROUTPUT_H
#define _OSINACTIVITYPREDICTOROUTPUT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _OSInactivityPredictorOutput : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger confidenceLevel; // ivar: _confidenceLevel
@property (readonly, nonatomic) CGFloat confidenceValue; // ivar: _confidenceValue
@property (readonly, nonatomic) CGFloat predictedDuration; // ivar: _predictedDuration


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initInvalidOutput;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfidenceLevel:(NSInteger)arg0 andConfidenceValue:(CGFloat)arg1 andPredictedDuration:(CGFloat)arg2 ;
-(id)initWithConfidenceValue:(CGFloat)arg0 andRelaxedThreshold:(CGFloat)arg1 andStrictThreshold:(CGFloat)arg2 andPredictedDuration:(CGFloat)arg3 ;
-(void)adjustPredictedDurationWithStrictLeeway:(CGFloat)arg0 andRelaxedLeeway:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif