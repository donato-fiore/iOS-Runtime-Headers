// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNPROBABILITYUTILITYTESTDOUBLE_H
#define CNPROBABILITYUTILITYTESTDOUBLE_H

@protocol CNProbabilityUtility;

#import <Foundation/Foundation.h>


@interface CNProbabilityUtilityTestDouble : NSObject <CNProbabilityUtility>



@property (nonatomic) BOOL expectedResult; // ivar: _expectedResult


-(BOOL)trueWithProbability:(CGFloat)arg0 ;
-(id)init;
-(id)initWithExpectedResult:(BOOL)arg0 ;


@end


#endif