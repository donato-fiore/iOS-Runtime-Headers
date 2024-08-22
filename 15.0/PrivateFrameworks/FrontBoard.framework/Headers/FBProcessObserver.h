// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBPROCESSOBSERVER_H
#define FBPROCESSOBSERVER_H

@class NSString;
@protocol FBProcessObserver, FBApplicationProcessObserver;

#import <Foundation/Foundation.h>


@interface FBProcessObserver : NSObject <FBProcessObserver, FBApplicationProcessObserver>

 {
    NSUInteger _observerAddress;
    Class _observerClass;
    BOOL _supportsWillExit;
    BOOL _supportsDidExit;
    BOOL _supportsStateDidChange;
    BOOL _supportsApplicationDidExit;
    BOOL _supportsApplicationWillLaunch;
    BOOL _supportsApplicationDidLaunch;
    BOOL _supportsApplicationDebugState;
    int _invalidated;
    int _calledWillExit;
    int _calledDidExit;
    int _calledWillLaunch;
    int _calledDidLaunch;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<FBProcessObserver> *observer; // ivar: _observer
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithObserver:(id)arg0 ;
-(void)applicationProcessDebuggingStateDidChange:(id)arg0 ;
-(void)applicationProcessDidExit:(id)arg0 withContext:(id)arg1 ;
-(void)applicationProcessDidLaunch:(id)arg0 ;
-(void)applicationProcessWillLaunch:(id)arg0 ;
-(void)invalidate;
-(void)process:(id)arg0 stateDidChangeFromState:(id)arg1 toState:(id)arg2 ;
-(void)processDidExit:(id)arg0 ;
-(void)processWillExit:(id)arg0 ;


@end


#endif