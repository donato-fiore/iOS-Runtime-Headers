// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ODCURAREEVALUATIONRESULT_H
#define ODCURAREEVALUATIONRESULT_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface ODCurareEvaluationResult : NSObject

@property (retain, nonatomic) NSString *evaluationName; // ivar: _evaluationName
@property (retain, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (nonatomic) NSInteger numberOfSamplesPositive; // ivar: _numberOfSamplesPositive
@property (nonatomic) NSInteger numberOfSamplesTotal; // ivar: _numberOfSamplesTotal


-(id)description;
-(id)initWithEvaluationName:(id)arg0 numberOfSamplesPositive:(NSInteger)arg1 numberOfSamplesTotal:(NSInteger)arg2 ;


@end


#endif