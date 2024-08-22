// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMCLIENTSTATE_H
#define EMCLIENTSTATE_H

@class NSString, EFObservable<EFObserver>;
@protocol EFLoggable;

#import <Foundation/Foundation.h>

#import "EMRemoteConnection.h"

@interface EMClientState : NSObject <EFLoggable>



@property (retain) EMRemoteConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) EFObservable<EFObserver> *foregroundObservable; // ivar: _foregroundObservable
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isForeground; // ivar: _isForeground
@property (nonatomic) BOOL isRunningTests; // ivar: _isRunningTests
@property (readonly) Class superclass;


+(id)log;
+(id)remoteInterface;
-(id)daemonBoosterWithDescription:(id)arg0 ;
-(id)initWithRemoteConnection:(id)arg0 ;
-(void)_handleApplicationDidEnterBackground;
-(void)_handleApplicationWillEnterForeground;
-(void)_performAsyncUpdate:(id)arg0 ;
-(void)setCurrentlyVisibleMailboxObjectIDs:(id)arg0 ;
-(void)setCurrentlyVisibleMailboxes:(id)arg0 ;
-(void)setStateForDemoMode:(id)arg0 ;
-(void)test_handleApplicationDidEnterBackground;
-(void)test_handleApplicationWillEnterForeground;


@end


#endif