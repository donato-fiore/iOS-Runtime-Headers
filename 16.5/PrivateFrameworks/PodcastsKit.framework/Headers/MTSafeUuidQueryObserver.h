// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSAFEUUIDQUERYOBSERVER_H
#define MTSAFEUUIDQUERYOBSERVER_H

@class MTBaseQueryObserver, NSMutableSet;



@interface MTSafeUuidQueryObserver : MTBaseQueryObserver {
    NSMutableSet *currentInserts;
    NSMutableSet *currentDeletes;
    NSMutableSet *currentUpdates;
    NSMutableSet *currentItems;
}




-(id)addResultsChangedHandler:(id)arg0 ;
-(id)initWithFetchRequest:(id)arg0 managedObjectContext:(id)arg1 ;
-(void)controller:(id)arg0 didChangeObject:(id)arg1 atIndexPath:(id)arg2 forChangeType:(NSUInteger)arg3 newIndexPath:(id)arg4 ;
-(void)controllerDidChangeContent:(id)arg0 ;
-(void)controllerWillChangeContent:(id)arg0 ;
-(void)notifyObservers;
-(void)startObserving;


@end


#endif