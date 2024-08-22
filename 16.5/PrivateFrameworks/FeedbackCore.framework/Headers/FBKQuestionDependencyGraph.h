// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKQUESTIONDEPENDENCYGRAPH_H
#define FBKQUESTIONDEPENDENCYGRAPH_H

@class NSDictionary, NSMapTable;

#import <Foundation/Foundation.h>

#import "FBKBugForm.h"

@interface FBKQuestionDependencyGraph : NSObject

@property (retain) FBKBugForm *bugForm; // ivar: _bugForm
@property (retain) NSDictionary *nodes; // ivar: _nodes
@property (retain) NSMapTable *tatToQuestionMap; // ivar: _tatToQuestionMap


-(BOOL)visibilityForQuestion:(id)arg0 inFormResponse:(id)arg1 ;
-(id)dependencyNodeForQuestion:(id)arg0 ;
-(id)initWithBugForm:(id)arg0 ;
-(id)questionsDependentOnQuestion:(id)arg0 ;


@end


#endif