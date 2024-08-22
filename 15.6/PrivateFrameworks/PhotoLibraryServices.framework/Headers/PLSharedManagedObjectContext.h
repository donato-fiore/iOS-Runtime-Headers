// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLSHAREDMANAGEDOBJECTCONTEXT_H
#define PLSHAREDMANAGEDOBJECTCONTEXT_H



#import "PLManagedObjectContext.h"

@interface PLSharedManagedObjectContext : PLManagedObjectContext {
    id *_changeNotificationObserver;
}




-(BOOL)_hasChangesForCloudShared:(id)arg0 ;
-(BOOL)isUserInterfaceContext;
-(BOOL)shouldMergeFromRemoteContextWithChanges:(id)arg0 ;
-(void)_mergeChangesFromDidSaveDictionary:(id)arg0 usingObjectIDs:(BOOL)arg1 ;
-(void)setupLocalChangeNotifications;
-(void)tearDownLocalChangeNotifications;


@end


#endif