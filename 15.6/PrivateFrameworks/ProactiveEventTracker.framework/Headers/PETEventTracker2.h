// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PETEVENTTRACKER2_H
#define PETEVENTTRACKER2_H

@class RBSTarget, RBSAssertion, NSString, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PETAggregateState.h"
#import "PETConfig.h"

@interface PETEventTracker2 : NSObject {
    NSObject<OS_dispatch_queue> *_loggingQueue;
    int _loggingQueueSize;
    _opaque_pthread_mutex_t _loggingQueueLock;
    BOOL _inited;
    RBSTarget *_rbsTarget;
    RBSAssertion *_rbsAssertion;
    BOOL _rbsShouldInvalidate;
    _opaque_pthread_mutex_t _rbsAssertionLock;
    BOOL _isApp;
}


@property (readonly, nonatomic) PETAggregateState *aggregateState; // ivar: _aggregateState
@property (retain) PETConfig *config; // ivar: _config
@property BOOL isAsyncEnabled; // ivar: _isAsyncEnabled
@property (retain) NSString *logStoresDir; // ivar: _logStoresDir
@property (retain) NSString *rootDir; // ivar: _rootDir
@property (retain) NSMutableDictionary *storeCache; // ivar: _storeCache


+(CGFloat)roundToSigFigs:(CGFloat)arg0 sigFigs:(NSUInteger)arg1 ;
+(id)defaultRootDir;
+(id)formattedTextForAggregatedMessage:(id)arg0 ;
+(id)formattedTextForUnaggregatedMessage:(id)arg0 messageGroup:(id)arg1 config:(id)arg2 ;
+(id)sharedInstance;
+(unsigned int)typeIdForMessageName:(id)arg0 ;
-(CGFloat)_roundToSigFigs:(CGFloat)arg0 forRawMessage:(id)arg1 ;
-(id)_getLogStore:(id)arg0 ;
-(id)_writeMessage:(id)arg0 ;
-(id)initForTestingWithRootDir:(id)arg0 ;
-(id)initWithAsyncEnabled:(BOOL)arg0 ;
-(id)initWithRootDir:(id)arg0 config:(id)arg1 ;
// -(void)_dispatchAsyncForLogging:(id)arg0 txnName:(unk)arg1  ;
-(void)_init;
-(void)_initWithRootDir:(id)arg0 config:(id)arg1 ;
-(void)_logMessage:(id)arg0 subGroup:(id)arg1 ;
-(void)_runBlockWithRBSAssertion:(id)arg0 ;
-(void)_trackDistributionForMessage:(id)arg0 value:(CGFloat)arg1 ;
-(void)_trackScalarForMessage:(id)arg0 count:(int)arg1 overwrite:(BOOL)arg2 ;
-(void)clearLogStores;
// -(void)enumerateAggregatedMessagesWithBlock:(id)arg0 clearStore:(unk)arg1  ;
-(void)enumerateMessageGroups:(id)arg0 ;
// -(void)enumerateMessagesWithBlock:(id)arg0 clearStore:(unk)arg1  ;
// -(void)enumerateMessagesWithBlock:(id)arg0 messageGroup:(unk)arg1 clearStore:(id)arg2  ;
-(void)logMessage:(id)arg0 ;
-(void)logMessage:(id)arg0 subGroup:(id)arg1 ;
-(void)trackDistributionForMessage:(id)arg0 value:(CGFloat)arg1 ;
-(void)trackScalarForMessage:(id)arg0 ;
-(void)trackScalarForMessage:(id)arg0 count:(int)arg1 ;
-(void)trackScalarForMessage:(id)arg0 updateCount:(int)arg1 ;


@end


#endif