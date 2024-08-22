// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RBCLIENTINHERITANCEMANAGER_H
#define RBCLIENTINHERITANCEMANAGER_H

@class NSMutableSet;
@protocol RBClientInheritanceManagerDelegate;

#import <Foundation/Foundation.h>


@interface RBClientInheritanceManager : NSObject {
    NSMutableSet *_inheritances;
    NSMutableSet *_queuedGainedInheritances;
    NSMutableSet *_queuedLostInheritances;
    BOOL _awaitingAck;
    os_unfair_lock_s _lock;
}


@property (readonly, weak, nonatomic) NSObject<RBClientInheritanceManagerDelegate> *delegate; // ivar: _delegate


-(id)description;
-(id)init;
-(id)initWithInheritances:(id)arg0 delegate:(id)arg1 ;
-(void)setInheritances:(id)arg0 ;


@end


#endif