// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATSESSION_H
#define ATSESSION_H

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSHashTable, NSXPCConnection, NSString, NSXPCListenerEndpoint, NSError;
@protocol ATSessionConnection, NSSecureCoding, OS_dispatch_queue, OS_dispatch_group, ATMessageLink;

#import <Foundation/Foundation.h>


@interface ATSession : NSObject <ATSessionConnection, NSSecureCoding>

 {
    NSMutableArray *_sessionTasks;
    NSMutableDictionary *_sessionTasksByIdentifier;
    NSMutableSet *_observing;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_group> *_group;
    NSXPCConnection *_connection;
    CGFloat _startTime;
    CGFloat _finishTime;
    BOOL _suspended;
}


@property (nonatomic, getter=isCancelled) BOOL cancelled; // ivar: _cancelled
@property (retain, nonatomic) NSString *dataClass; // ivar: _dataClass
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration;
@property (retain, nonatomic) NSXPCListenerEndpoint *endpoint; // ivar: _endpoint
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (nonatomic, getter=isFinished) BOOL finished; // ivar: _finished
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (weak, nonatomic) NSObject<ATMessageLink> *messageLink; // ivar: _messageLink
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (nonatomic, getter=isRunning) BOOL running; // ivar: _running
@property (retain, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier
@property (retain, nonatomic) NSString *sessionTypeIdentifier; // ivar: _sessionTypeIdentifier
@property (readonly) Class superclass;
@property (nonatomic, getter=isSuspended) BOOL suspended;


+(BOOL)supportsSecureCoding;
+(NSUInteger)_remoteActiveSessionCountWithTypeIdentifier:(id)arg0 ;
+(NSUInteger)activeSessionCountWithSessionTypeIdentifier:(id)arg0 ;
+(id)_remoteSessionsWithTypeIdentifier:(id)arg0 ;
+(id)allSessions;
+(id)sessionsWithSessionTypeIdentifier:(id)arg0 ;
+(id)sessionsWithSessionTypeIdentifier:(id)arg0 dataClass:(id)arg1 ;
+(void)_cancelSessionWithIdentifier:(id)arg0 ;
+(void)initialize;
+(void)setSessionHost:(BOOL)arg0 ;
-(id)_keysToObserve;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSessionIdentifier:(id)arg0 sessionTypeIdentifier:(id)arg1 ;
-(id)initWithSessionTypeIdentifier:(id)arg0 ;
-(id)sessionTasks;
-(id)sessionTasksWithGroupingKey:(id)arg0 ;
-(void)_beginTasks:(id)arg0 ;
-(void)_finishWithError:(id)arg0 ;
-(void)_observeKeysForTask:(id)arg0 ;
-(void)_performSelectorOnObservers:(SEL)arg0 object:(id)arg1 ;
-(void)_performSelectorOnObservers:(SEL)arg0 object:(id)arg1 object:(id)arg2 ;
-(void)_stopObservingKeysForTask:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)addSessionTasks:(id)arg0 ;
-(void)beginSessionTask:(id)arg0 ;
-(void)cancel;
-(void)encodeWithCoder:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeObserver:(id)arg0 ;
-(void)start;
-(void)updateSessionTask:(id)arg0 ;
-(void)waitToFinish;


@end


#endif