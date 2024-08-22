// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC10WORKFLOWUI21SMARTPROMPTSVIEWMODEL_H
#define _TTC10WORKFLOWUI21SMARTPROMPTSVIEWMODEL_H

@class SwiftObject;
@protocol WFDatabaseObjectObserver;



@interface _TtC10WorkflowUI21SmartPromptsViewModel : SwiftObject <WFDatabaseObjectObserver>

 {
    ? database;
    ? workflow;
    ? workflowReference;
    ? states;
    ? _deletionAuthorizations;
    ? _statesByAction;
    ? _wildcardStates;
    ? actionsByActionUUID;
    ? actionsByActionIdentifier;
}




-(void)databaseDidChange:(id)arg0 modified:(id)arg1 inserted:(id)arg2 removed:(id)arg3 ;


@end


#endif