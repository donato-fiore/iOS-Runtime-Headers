// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFWORKFLOWCONFLICT_H
#define WFWORKFLOWCONFLICT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "WFWorkflowRecord.h"

@interface WFWorkflowConflict : NSObject

@property (copy, nonatomic) NSString *localWorkflowID; // ivar: _localWorkflowID
@property (retain, nonatomic) WFWorkflowRecord *localWorkflowRecord; // ivar: _localWorkflowRecord
@property (copy, nonatomic) NSString *remoteWorkflowID; // ivar: _remoteWorkflowID
@property (retain, nonatomic) WFWorkflowRecord *remoteWorkflowRecord; // ivar: _remoteWorkflowRecord


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)resolutionKeepingLocal:(BOOL)arg0 keepingRemote:(BOOL)arg1 ;


@end


#endif