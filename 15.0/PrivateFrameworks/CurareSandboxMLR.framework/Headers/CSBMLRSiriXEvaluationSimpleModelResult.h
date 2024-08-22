// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSBMLRSIRIXEVALUATIONSIMPLEMODELRESULT_H
#define CSBMLRSIRIXEVALUATIONSIMPLEMODELRESULT_H

@class NSNumber;
@protocol CSBMLRSiriXEvaluationResultProtocol;

#import <Foundation/Foundation.h>


@interface CSBMLRSiriXEvaluationSimpleModelResult : NSObject <CSBMLRSiriXEvaluationResultProtocol>



@property (nonatomic) BOOL classified; // ivar: classified
@property (nonatomic) BOOL classifyResult; // ivar: classifyResult
@property (retain, nonatomic) NSNumber *probablity; // ivar: probablity


-(id)initWithResult:(BOOL)arg0 classifyResult:(BOOL)arg1 ;


@end


#endif