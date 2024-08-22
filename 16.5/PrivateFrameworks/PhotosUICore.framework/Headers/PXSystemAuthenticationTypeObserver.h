// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSYSTEMAUTHENTICATIONTYPEOBSERVER_H
#define PXSYSTEMAUTHENTICATIONTYPEOBSERVER_H

@class NSMutableSet;
@protocol OS_dispatch_queue;


#import "PXObservable.h"

@interface PXSystemAuthenticationTypeObserver : PXObservable

@property (nonatomic) NSInteger authenticationType; // ivar: _authenticationType
@property (nonatomic) NSInteger forcedSystemAuthenticationType; // ivar: _forcedSystemAuthenticationType
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *observationQueue; // ivar: _observationQueue
@property (retain, nonatomic) NSMutableSet *observers; // ivar: _observers


+(id)sharedObserver;
-(NSInteger)_calculateAuthenticationType;
-(NSInteger)_currentlyAvailableBiometryType;
-(id)init;
-(void)_beginObservingApplicationStateChangesAndSystemEvents;
-(void)_stopObservingApplicationStateChanges;
-(void)_updateAuthenticationTypeInBackground;
-(void)dealloc;
-(void)updateAuthenticationTypeImmediately;


@end


#endif