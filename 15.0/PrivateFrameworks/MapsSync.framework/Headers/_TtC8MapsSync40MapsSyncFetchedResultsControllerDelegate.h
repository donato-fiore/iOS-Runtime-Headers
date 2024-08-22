// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8MAPSSYNC40MAPSSYNCFETCHEDRESULTSCONTROLLERDELEGATE_H
#define _TTC8MAPSSYNC40MAPSSYNCFETCHEDRESULTSCONTROLLERDELEGATE_H

@protocol NSFetchedResultsControllerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC8MapsSync40MapsSyncFetchedResultsControllerDelegate : NSObject <NSFetchedResultsControllerDelegate>

 {
    ? _baseQuery;
    ? _delegate;
    ? _contentPredicate;
    ? _otherWatchedContentPredicate;
}




-(id)init;
-(void)contextDidChangeWithNotification:(id)arg0 ;
-(void)controller:(id)arg0 didChangeObject:(id)arg1 atIndexPath:(id)arg2 forChangeType:(NSUInteger)arg3 newIndexPath:(id)arg4 ;
-(void)controllerDidChangeContent:(id)arg0 ;
-(void)controllerWillChangeContent:(id)arg0 ;
-(void)remoteChangeWithNotification:(id)arg0 ;


@end


#endif