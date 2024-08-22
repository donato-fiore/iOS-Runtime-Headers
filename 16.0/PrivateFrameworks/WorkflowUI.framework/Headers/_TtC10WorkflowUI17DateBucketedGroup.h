// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC10WORKFLOWUI17DATEBUCKETEDGROUP_H
#define _TTC10WORKFLOWUI17DATEBUCKETEDGROUP_H

@protocol WFDatabaseResultObserver;

#import <Foundation/Foundation.h>


@interface _TtC10WorkflowUI17DateBucketedGroup : NSObject <WFDatabaseResultObserver>

 {
    ? shouldUpdate;
    ? delegate;
    ? shortcutsResult;
    ? dateAccessor;
    ? emptyMessage;
}




-(id)init;
-(void)databaseResultDidChange:(id)arg0 ;


@end


#endif