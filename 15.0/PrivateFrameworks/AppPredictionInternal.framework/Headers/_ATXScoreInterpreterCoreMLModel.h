// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ATXSCOREINTERPRETERCOREMLMODEL_H
#define _ATXSCOREINTERPRETERCOREMLMODEL_H

@class NSString, NSArray, _PASLock;

#import <Foundation/Foundation.h>


@interface _ATXScoreInterpreterCoreMLModel : NSObject {
    NSString *_coreMLModelOutputName;
    NSArray *_coreMLInputFeatures;
    _PASLock *_lock;
}


@property (readonly, nonatomic) BOOL hasOutputIndexedSubscript; // ivar: _hasOutputIndexedSubscript
@property (readonly, nonatomic) NSUInteger numberOfFeatures;


+(CGFloat)scoreForOutputValue:(id)arg0 outputIndexedSubscript:(NSInteger)arg1 ;
+(id)coreMLModelForCoreMLModelName:(id)arg0 ;
-(CGFloat)predictionForEvaluatedFeatures:(id)arg0 withOutputIndexedSubscript:(NSInteger)arg1 ;
-(id)featureAtIndex:(NSUInteger)arg0 ;
-(id)getArgumentsToEvaluateByInitializingInstanceVariablesFromFeatures:(id)arg0 outputSpecification:(id)arg1 ;
-(id)init;
-(id)initWithModelName:(id)arg0 features:(id)arg1 outputSpecification:(id)arg2 ;


@end


#endif