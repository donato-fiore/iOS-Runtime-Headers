// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC10WORKFLOWUI17LIBRARYDATASOURCE_H
#define _TTC10WORKFLOWUI17LIBRARYDATASOURCE_H

@class SwiftObject;
@protocol WFDatabaseResultObserver;



@interface _TtC10WorkflowUI17LibraryDataSource : SwiftObject <WFDatabaseResultObserver>

 {
    ? observedResults;
    ? sections;
    ? observeChanges;
}




-(void)databaseResultDidChange:(id)arg0 ;


@end


#endif