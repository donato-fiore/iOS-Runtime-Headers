// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC10WORKFLOWUIP33_007DC0980C1F379003C75060AA4273AE17ALLSHORTCUTSGROUP_H
#define _TTC10WORKFLOWUIP33_007DC0980C1F379003C75060AA4273AE17ALLSHORTCUTSGROUP_H

@protocol WFDatabaseResultObserver;

#import <Foundation/Foundation.h>


@interface _TtC10WorkflowUIP33_007DC0980C1F379003C75060AA4273AE17AllShortcutsGroup : NSObject <WFDatabaseResultObserver>

 {
    ? shouldUpdate;
    ? delegate;
    ? database;
    ? collectionsResult;
}




-(id)init;
-(void)databaseResultDidChange:(id)arg0 ;


@end


#endif