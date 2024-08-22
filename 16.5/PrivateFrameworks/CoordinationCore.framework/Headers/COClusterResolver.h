// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COCLUSTERRESOLVER_H
#define COCLUSTERRESOLVER_H

@class COCluster, NSString, NSArray;
@protocol COClusterResolverDelegate;

#import <Foundation/Foundation.h>


@interface COClusterResolver : NSObject {
    os_unfair_lock_s _lock;
}


@property (nonatomic) BOOL activatedCluster; // ivar: _activatedCluster
@property (nonatomic) BOOL bootstrapCompleted; // ivar: _bootstrapCompleted
@property (readonly, nonatomic) COCluster *cluster; // ivar: _cluster
@property (retain, nonatomic) NSString *currentIdentifier; // ivar: _currentIdentifier
@property (readonly, weak, nonatomic) NSObject<COClusterResolverDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSArray *waitingForBootstrap; // ivar: _waitingForBootstrap


+(id)resolverForCluster:(id)arg0 delegate:(id)arg1 ;
-(BOOL)_updateIdentifier:(id)arg0 ;
-(id)_initWithCluster:(id)arg0 delegate:(id)arg1 ;
-(id)description;
-(void)_activate;
-(void)_delegateNotifyClusterIdentifierChanged:(id)arg0 ;
-(void)_invokeBootstrapBlocks;
-(void)_withLock:(id)arg0 ;
-(void)activate;
-(void)waitForBootstrap:(id)arg0 ;


@end


#endif