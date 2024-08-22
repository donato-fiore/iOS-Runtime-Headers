// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NLPLEARNERSHADOWEVALUATOR_H
#define NLPLEARNERSHADOWEVALUATOR_H

@class NSLocale;

#import <Foundation/Foundation.h>


@interface NLPLearnerShadowEvaluator : NSObject

@property (nonatomic) NSInteger evaluationTask; // ivar: _evaluationTask
@property (retain, nonatomic) NSLocale *locale; // ivar: _locale
@property (nonatomic) NSUInteger maxSamples; // ivar: _maxSamples
@property (readonly, nonatomic) NSUInteger topK; // ivar: _topK


+(id)evaluatorWithLocale:(id)arg0 andTask:(NSInteger)arg1 ;
+(void)initialize;
// -(id)evaluateModel:(id)arg0 onRecords:(id)arg1 options:(id)arg2 completion:(id)arg3 error:(unk)arg4  ;
-(id)initWithLocale:(id)arg0 andTask:(NSInteger)arg1 ;
-(id)prepareDataFromRecords:(id)arg0 ;


@end


#endif