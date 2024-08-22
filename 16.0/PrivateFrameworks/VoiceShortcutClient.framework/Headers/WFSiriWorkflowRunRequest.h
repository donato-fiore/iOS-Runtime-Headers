// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSIRIWORKFLOWRUNREQUEST_H
#define WFSIRIWORKFLOWRUNREQUEST_H

@class NSArray;


#import "WFWorkflowRunRequest.h"

@interface WFSiriWorkflowRunRequest : WFWorkflowRunRequest

@property (retain, nonatomic) NSArray *airPlayRouteIDs; // ivar: _airPlayRouteIDs
@property (nonatomic) NSInteger executionContext; // ivar: _executionContext


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExecutionContext:(NSInteger)arg0 airPlayRouteIDs:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif