// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDBIMIMANAGER_H
#define EDBIMIMANAGER_H

@class NSMutableDictionary, EMRemoteContentURLSession;
@protocol EFScheduler;

#import <Foundation/Foundation.h>

#import "EDMessagePersistence.h"

@interface EDBIMIManager : NSObject {
    NSMutableDictionary *_activeDataTasksByRequest;
    os_unfair_lock_s _activeDataTasksLock;
}


@property (readonly, nonatomic) NSObject<EFScheduler> *downloadScheduler; // ivar: _downloadScheduler
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence; // ivar: _messagePersistence
@property (readonly, nonatomic) EMRemoteContentURLSession *urlSession; // ivar: _urlSession


-(id)initWithMessagePersistence:(id)arg0 urlSession:(id)arg1 ;
-(id)processBIMIHeadersForMessages:(id)arg0 ;
-(void)dealloc;
-(void)scheduleRecurringActivity;
-(void)test_tearDown;


@end


#endif