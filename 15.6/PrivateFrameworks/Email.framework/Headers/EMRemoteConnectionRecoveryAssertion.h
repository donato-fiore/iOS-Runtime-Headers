// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMREMOTECONNECTIONRECOVERYASSERTION_H
#define EMREMOTECONNECTIONRECOVERYASSERTION_H

@protocol EMRemoteConnectionRecoveryAssertionDelegate;

#import <Foundation/Foundation.h>


@interface EMRemoteConnectionRecoveryAssertion : NSObject {
    os_unfair_lock_s _lock;
}


@property (weak, nonatomic) NSObject<EMRemoteConnectionRecoveryAssertionDelegate> *delegate; // ivar: _delegate


-(id)initWithConnection:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif