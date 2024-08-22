// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKQUESTIONDEPENDENCYNODE_H
#define FBKQUESTIONDEPENDENCYNODE_H

@class NSHashTable, NSSet, NSNumber, NSString, NSPredicate;

#import <Foundation/Foundation.h>

#import "FBKQuestionDependencyGraph.h"

@interface FBKQuestionDependencyNode : NSObject

@property (retain) NSHashTable *dependencyChildren; // ivar: _dependencyChildren
@property (retain) NSSet *dependencyTats; // ivar: _dependencyTats
@property (readonly) NSSet *dependentChildren;
@property (weak) FBKQuestionDependencyGraph *graph; // ivar: _graph
@property (readonly) NSNumber *questionID; // ivar: _questionID
@property (readonly) NSString *tat; // ivar: _tat
@property (retain) NSPredicate *visibilityPredicateTemplate; // ivar: _visibilityPredicateTemplate


-(BOOL)isVisibleInFormResponse:(id)arg0 ;
-(id)_predicateFromLeafArray:(id)arg0 ;
-(id)_substitutionFromToken:(id)arg0 ;
-(id)dependentTatsForConditions:(id)arg0 ;
-(id)initWithQuestion:(id)arg0 ;
-(id)predicateForConditions:(id)arg0 ;
-(void)registerDependentChild:(id)arg0 ;


@end


#endif