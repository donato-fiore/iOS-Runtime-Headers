// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRSDIRECTIVESMANAGER_H
#define PRSDIRECTIVESMANAGER_H

@class NSMutableIndexSet, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "PRSL2FeatureVectorProcessingContext.h"

@interface PRSDirectivesManager : NSObject {
    int indexOfAsIs;
    int indexOfAsIsRange;
    int indexOfReplaceIf;
    int indexOfReplaceThenMin;
    int indexOfIsPopulated;
    int indexOfIdMapping;
    int indexOfResultSetIdMapping;
    int indexOfResultSetIdScoreMapping;
    int indexOfValueIfNotExist;
    int indexOfOneSidedInverse;
    int indexOfQuantize;
    int indexOfFanOutValue;
    int sizeOfAsIs;
    int sizeOfAsIsRange;
    int sizeOfReplaceIf;
    int sizeOfReplaceThenMin;
    int sizeOfIsPopulated;
    int sizeOfIdMapping;
    int sizeOfResultSetIdMapping;
    int sizeOfResultSetIdScoreMapping;
    int sizeOfValueIfNotExist;
    int sizeOfOneSidedInverse;
    int sizeOfQuantize;
    int sizeOfFanOutValue;
    *_as_is directive_as_is;
    *_as_is_range directive_as_is_range;
    *_replace_if directive_replace_if;
    *_replace_then_min directive_replace_then_min;
    *_value_if_not_exist directive_value_if_not_exist;
    *_is_populated directive_is_populated;
    *_id_mapping directive_id_mapping;
    *_resultset_id_mapping directive_resultset_id_mapping;
    *_resultset_id_score_mapping directive_resultset_id_score_mapping;
    *_one_sided_inverse directive_one_sided_inverse;
    *_quantize directive_quantize;
    *fan_out_value directive_fan_out;
    _local_resultset_id_values_mapping directive_local_resultset_id_values_mapping;
    _parsec_resultset_id_values_mapping directive_parsec_resultset_id_values_mapping;
    NSMutableIndexSet *disabledFeatureIndices;
    NSMutableDictionary *mapInflatedIndexToSize;
}


@property (retain, nonatomic) PRSL2FeatureVectorProcessingContext *processingContext; // ivar: _processingContext
@property (nonatomic) CGFloat weightX; // ivar: _weightX
@property (nonatomic) CGFloat weightY; // ivar: _weightY


+(void)initialize;
-(NSUInteger)getDirectiveTypeFromString:(id)arg0 ;
-(id)init;
-(void)cleanup;
-(void)dealloc;
-(void)getAllDirectivesArraysForTesting:(*void)arg0 ;
-(void)processDirectives:(id)arg0 ;
-(void)processL2FeatureVector:(id)arg0 populatingValues:(*float)arg1 scoreValue:(char *)arg2 count:(int)arg3 ;
-(void)processResultSetValuesWithMap:(id)arg0 serverFeatures:(id)arg1 ;


@end


#endif