// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPMLMODELEVALUATE_H
#define CPMLMODELEVALUATE_H

@class NSMutableArray, NSNumber, NSString;
@protocol CPMLAlgorithmProtocol;

#import <Foundation/Foundation.h>

#import "CPMLSchema.h"
#import "CPMLStorageManager.h"

@interface CPMLModelEvaluate : NSObject {
    BOOL enableCacheString;
    BOOL keepInMemory;
    BOOL shouldFail;
    *sqlite3 db;
    int countRows;
    NSMutableArray *modelSchema;
    NSMutableArray *vectorPositions;
    NSNumber *maxRemoveTrainingRow;
    NSString *serializeFunction;
    NSString *machineLearningAlgo;
    *CPMLAlgorithm cpMLAlgo;
    *CPMLSerialization trainerCPDeSerializer;
    *void cpRemapper;
    CPMLSchema *cpmlSchema;
    *void trainerCPStatistics;
    *CPMLDelegate _cpmlDelegate;
    *CPMLTunableData cpTuneableData;
    int mapFunction;
    vector<int, std::allocator<int>> boundedRemappedValues;
    *CPMLDelegateEngine _delegateEngine;
    CPMLStorageManager *_storageManager;
    id<CPMLAlgorithmProtocol> *_delegateAlgorithm;
}




-(*void)getModelData;
-(BOOL)updateModel:(id)arg0 ;
-(id)doEvaluate:(*void)arg0 withBoundedList:(*void)arg1 ;
-(id)evalArray:(id)arg0 ;
-(id)evalCTypesV:(char *)arg0 ;
-(id)evalDict:(id)arg0 ;
-(id)evalNSObjectV:(id)arg0 ;
-(id)evalString:(id)arg0 ;
-(id)fileProtectionClassRequest:(id)arg0 ;
-(id)initWithModel:(id)arg0 withPropertyList:(id)arg1 ;
-(int)getAttributeType:(id)arg0 ;
-(void)boundResult:(id)arg0 ;
-(void)buildEvaluateMachineLearningAlgorithm;
-(void)constructVector:(*void)arg0 withColumnPosition:(NSUInteger)arg1 maxColNumber:(NSUInteger)arg2 withValue:(id)arg3 ;
-(void)dealloc;
-(void)doRemapToFeatureVector:(*void)arg0 withPositionID:(NSUInteger)arg1 withMaxCol:(NSUInteger)arg2 withValue:(id)arg3 ;
-(void)setCPMLAlgorithm:(id)arg0 ;
-(void)setCPMLAlgorithmEngine:(id)arg0 ;


@end


#endif