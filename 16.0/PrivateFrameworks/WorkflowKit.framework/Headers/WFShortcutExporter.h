// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSHORTCUTEXPORTER_H
#define WFSHORTCUTEXPORTER_H


#import <Foundation/Foundation.h>

#import "WFWorkflowRecord.h"

@interface WFShortcutExporter : NSObject

@property (readonly, nonatomic) WFWorkflowRecord *workflowRecord; // ivar: _workflowRecord


-(id)initWithWorkflow:(id)arg0 sharingOptions:(id)arg1 ;
-(id)initWithWorkflowRecord:(id)arg0 ;
-(void)exportWorkflowWithCompletion:(id)arg0 ;


@end


#endif