// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MGGROUPSQUERYOPERATION_H
#define MGGROUPSQUERYOPERATION_H

@class NSOperation, NSDictionary;


#import "MGGroupsQueryAgent.h"
#import "MGOutstandingQuery.h"

@interface MGGroupsQueryOperation : NSOperation

@property (readonly, nonatomic) MGGroupsQueryAgent *agent; // ivar: _agent
@property (readonly, copy, nonatomic) NSDictionary *groups; // ivar: _groups
@property (readonly, copy, nonatomic) MGOutstandingQuery *query; // ivar: _query
@property (readonly, copy, nonatomic) NSDictionary *variables; // ivar: _variables


-(id)initWithAgent:(id)arg0 query:(id)arg1 groups:(id)arg2 substitutionVariables:(id)arg3 ;
-(void)main;


@end


#endif