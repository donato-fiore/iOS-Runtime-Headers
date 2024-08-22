// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBIDLETIMERCOORDINATORHELPER_H
#define SBIDLETIMERCOORDINATORHELPER_H

@class NSMapTable;
@protocol SBIdleTimerProviding, SBIdleTimerCoordinating;

#import <Foundation/Foundation.h>


@interface SBIdleTimerCoordinatorHelper : NSObject

@property (readonly, nonatomic) NSMapTable *idleTimerCache; // ivar: _idleTimerCache
@property (weak, nonatomic) NSObject<SBIdleTimerProviding> *sourceProvider; // ivar: _sourceProvider
@property (weak, nonatomic) NSObject<SBIdleTimerCoordinating> *targetCoordinator; // ivar: _targetCoordinator


-(BOOL)hasProvider:(id)arg0 ;
-(id)_updateProvider:(id)arg0 behavior:(id)arg1 reason:(id)arg2 ;
-(id)_updateProviderInfo:(id)arg0 behavior:(id)arg1 reason:(id)arg2 ;
-(id)idleTimerProxyForProvider:(id)arg0 ;
-(id)init;
-(id)initWithSourceProvider:(id)arg0 ;
-(id)proposeIdleTimerBehavior:(id)arg0 fromProvider:(id)arg1 reason:(id)arg2 ;
-(id)proposeProvider:(id)arg0 byCoordinator:(id)arg1 reason:(id)arg2 ;
-(id)updateProvider:(id)arg0 behavior:(id)arg1 reason:(id)arg2 ;
-(void)bindProvider:(id)arg0 toSourceTimer:(id)arg1 behavior:(id)arg2 forReason:(id)arg3 ;
-(void)removeProvider:(id)arg0 ;


@end


#endif