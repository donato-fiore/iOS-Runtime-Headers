// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGTITLEGENERATORTYPEMATCHING_H
#define PGTITLEGENERATORTYPEMATCHING_H


#import <Foundation/Foundation.h>


@interface PGTitleGeneratorTypeMatching : NSObject

@property (readonly, copy, nonatomic) id *eventEvaluationBlock; // ivar: _eventEvaluationBlock
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)typeMatchingWithType:(NSInteger)arg0 eventEvaluationBlock:(id)arg1 ;
-(id)initWithType:(NSInteger)arg0 eventEvaluationBlock:(id)arg1 ;


@end


#endif