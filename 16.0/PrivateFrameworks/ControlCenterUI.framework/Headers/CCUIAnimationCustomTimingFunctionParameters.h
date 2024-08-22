// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CCUIANIMATIONCUSTOMTIMINGFUNCTIONPARAMETERS_H
#define CCUIANIMATIONCUSTOMTIMINGFUNCTIONPARAMETERS_H

@class NSString;
@protocol CCUIAnimationTimingFunctionDescription;

#import <Foundation/Foundation.h>


@interface CCUIAnimationCustomTimingFunctionParameters : NSObject <CCUIAnimationTimingFunctionDescription>



@property (readonly, nonatomic) CGPoint controlPoint1; // ivar: _controlPoint1
@property (readonly, nonatomic) CGPoint controlPoint2; // ivar: _controlPoint2
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)functionWithControlPoint1:(struct CGPoint )arg0 controlPoint2:(struct CGPoint )arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithControlPoint1:(struct CGPoint )arg0 controlPoint2:(struct CGPoint )arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif