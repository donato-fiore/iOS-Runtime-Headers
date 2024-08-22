// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLGKDECISIONTREE_H
#define MLGKDECISIONTREE_H

@class NSMutableArray, NSMutableOrderedSet;

#import <Foundation/Foundation.h>

#import "MLTreeEnsembleClassifier.h"

@interface MLGKDecisionTree : NSObject {
    *void _trc;
    MLTreeEnsembleClassifier *_treeClassifier;
}


@property (retain, nonatomic) NSMutableArray *_attributes; // ivar: __attributes
@property (retain, nonatomic) NSMutableOrderedSet *_objectStore; // ivar: __objectStore


-(BOOL)_saveModelAssetWithModelToPath:(id)arg0 withError:(id)arg1 ;
-(id)_init;
-(id)_initWithFlattenedTree:(id)arg0 ;
-(id)_makeInferenceFromAnswers:(id)arg0 withError:(id)arg1 ;
-(void)_loadModelAssetWithModelAtPath:(id)arg0 withError:(id)arg1 ;
-(void)dealloc;


@end


#endif