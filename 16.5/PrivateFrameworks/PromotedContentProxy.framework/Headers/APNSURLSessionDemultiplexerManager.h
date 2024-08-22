// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APNSURLSESSIONDEMULTIPLEXERMANAGER_H
#define APNSURLSESSIONDEMULTIPLEXERMANAGER_H

@class APUnfairRecursiveLock, APOrderedMutableDictionary, NSOperationQueue;

#import <Foundation/Foundation.h>

#import "APProxySessionConfigurationProvider.h"

@interface APNSURLSessionDemultiplexerManager : NSObject

@property (retain, nonatomic) APUnfairRecursiveLock *lock; // ivar: _lock
@property (retain, nonatomic) APProxySessionConfigurationProvider *sessionConfigProvider; // ivar: _sessionConfigProvider
@property (retain, nonatomic) APOrderedMutableDictionary *sessionDemultiplexerForIdentifier; // ivar: _sessionDemultiplexerForIdentifier
@property (retain, nonatomic) NSOperationQueue *sessionSharedDelegateQueue; // ivar: _sessionSharedDelegateQueue


-(NSInteger)pretapRequestCountForIdentifier:(id)arg0 ;
-(id)_getSessionDemultiplexerForId:(id)arg0 maximumRequestCount:(NSInteger)arg1 ;
-(id)initWithProxySessionConfigProvider:(id)arg0 ;
-(id)sessionDemultiplexerForAdByIdentifier:(id)arg0 maximumRequestCount:(NSInteger)arg1 ;
-(void)_unregisterOldSessionIfRequired;
-(void)_unregisterSessionDemultiplexerWithIdentifier:(id)arg0 ;
-(void)unregisterSessionDemultiplexerWithIdentifier:(id)arg0 ;


@end


#endif