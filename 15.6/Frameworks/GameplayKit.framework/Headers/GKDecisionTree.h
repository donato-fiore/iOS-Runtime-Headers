// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKDECISIONTREE_H
#define GKDECISIONTREE_H

@class MLGKDecisionTree;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GKRandomSource.h"
#import "GKDecisionNode.h"

@interface GKDecisionTree : NSObject <NSSecureCoding>

 {
    *GKCDecisionTree _decisionTree;
    BOOL _isInduced;
    MLGKDecisionTree *mlkitDecisionTree;
}


@property (copy, nonatomic) GKRandomSource *randomSource; // ivar: _randomSource
@property (retain, nonatomic) GKDecisionNode *rootNode; // ivar: _rootNode


+(BOOL)supportsSecureCoding;
-(BOOL)exportToURL:(id)arg0 error:(id)arg1 ;
-(id)description;
-(id)findAccuracyWithExamples:(id)arg0 actions:(id)arg1 attributes:(id)arg2 ;
-(id)findActionForAnswers:(id)arg0 ;
-(id)getFlattenedTree;
-(id)init;
-(id)initWithAttribute:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExamples:(id)arg0 actions:(id)arg1 attributes:(id)arg2 ;
-(id)initWithExamples:(id)arg0 actions:(id)arg1 attributes:(id)arg2 maxDepth:(NSUInteger)arg3 minSamplesSplit:(NSUInteger)arg4 ;
-(id)initWithURL:(id)arg0 error:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif