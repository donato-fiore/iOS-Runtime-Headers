// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EFLINEARFUNCTION_H
#define EFLINEARFUNCTION_H


#import <Foundation/Foundation.h>


@interface EFLinearFunction : NSObject

@property (nonatomic) CGFloat intercept; // ivar: _intercept
@property (nonatomic) CGFloat slope; // ivar: _slope


-(CGFloat)evaluateReverse:(CGFloat)arg0 ;
-(CGFloat)evaluateX:(CGFloat)arg0 ;
-(id)initWithLineThroughPoints:(id)arg0 ;
-(id)initWithSlope:(CGFloat)arg0 intercept:(CGFloat)arg1 ;


@end


#endif