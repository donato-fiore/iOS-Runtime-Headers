// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGBACKGROUNDPIPAUTHORIZATION_H
#define PGBACKGROUNDPIPAUTHORIZATION_H

@class BSServiceConnection, NSString;
@protocol PGBackgroundPIPServerToClientInterface;

#import <Foundation/Foundation.h>


@interface PGBackgroundPIPAuthorization : NSObject <PGBackgroundPIPServerToClientInterface>

 {
    BSServiceConnection *_connection;
    NSInteger _lock_state;
    os_unfair_lock_s _lock;
}


@property (readonly, copy, nonatomic) NSString *activitySessionIdentifier; // ivar: _activitySessionIdentifier
@property (readonly, copy, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger state;
@property (readonly, copy) id *stateTransitionHandler; // ivar: _stateTransitionHandler
@property (readonly) Class superclass;


-(id)initWithActivitySessionIdentifier:(id)arg0 appBundleIdentifier:(id)arg1 stateTransitionHandler:(id)arg2 ;
-(void)_transitionToState:(NSInteger)arg0 ;
-(void)dealloc;
-(void)revoke;
-(void)transitionToState:(id)arg0 ;


@end


#endif