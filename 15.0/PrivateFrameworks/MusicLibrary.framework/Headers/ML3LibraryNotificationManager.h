// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ML3LIBRARYNOTIFICATIONMANAGER_H
#define ML3LIBRARYNOTIFICATIONMANAGER_H

@class NSMutableArray, NSMutableOrderedSet, NSString;
@protocol MSVDistributedNotificationObserverDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ML3MusicLibrary.h"

@interface ML3LibraryNotificationManager : NSObject <MSVDistributedNotificationObserverDelegate>

 {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_notificationObservers;
    NSMutableOrderedSet *_queuedLocalNotifications;
    NSMutableOrderedSet *_queuedDistributedNotificationNames;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) ML3MusicLibrary *library; // ivar: _library
@property (readonly) Class superclass;


-(BOOL)observerShouldForwardDistributedNotification:(id)arg0 ;
-(id)_observerForDistributedName:(id)arg0 ;
-(id)_observerForLocalName:(id)arg0 ;
-(id)initWithLibrary:(id)arg0 distributedAndLocalNames:(id)arg1 ;
-(void)_postEnqueuedDistributedNotifications;
-(void)_postEnqueuedLocalNotifications;
-(void)addObserverForDistributedName:(id)arg0 localName:(id)arg1 ;
-(void)enqueueDistributedNotificationNamed:(id)arg0 ;
-(void)enqueueLocalNotification:(id)arg0 ;
-(void)enqueueLocalNotificationNamed:(id)arg0 ;
-(void)removeObserverWithDistributedName:(id)arg0 ;
-(void)removeObserverWithLocalName:(id)arg0 ;


@end


#endif