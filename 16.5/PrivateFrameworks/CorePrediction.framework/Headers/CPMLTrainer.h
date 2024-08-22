// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPMLTRAINER_H
#define CPMLTRAINER_H

@class NSDictionary;
@protocol CPMLAlgorithmProtocol;

#import <Foundation/Foundation.h>

#import "CPMLDB.h"
#import "CPMLSchema.h"
#import "CPMLStorageManager.h"

@interface CPMLTrainer : NSObject {
    BOOL shouldFail;
    *sqlite3 modelDB;
    NSDictionary *modelPlist;
    CPMLDB *cpmlDB;
    *CPMLCDB cpCDB;
    *CPMLAlgorithm cpMLAlgo;
    *void cpRemapper;
    CPMLSchema *cpmlSchema;
    *void trainerCPStatistics;
    *CPMLSerialization trainerCPSerializer;
    *CPMLTunableData cpTuneableData;
    int mapFunction;
    *CPMLDelegate _cpmlDelegate;
    CPMLStorageManager *_storageManager;
    id<CPMLAlgorithmProtocol> *_theDelegate;
}




-(id)fileProtectionClassRequest:(id)arg0 ;
-(id)getSolution;
-(id)init:(id)arg0 withModelDBPath:(id)arg1 withPropertyList:(id)arg2 ;
-(void)buildTrainingMachineLearningAlgorithm:(id)arg0 ;
-(void)dealloc;
-(void)train:(BOOL)arg0 ;


@end


#endif