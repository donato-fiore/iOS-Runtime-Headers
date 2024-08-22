// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SBSCENEHANDLEOBSERVERBEHAVIOR_H
#define _SBSCENEHANDLEOBSERVERBEHAVIOR_H

@protocol SBSceneHandleObserver;

#import <Foundation/Foundation.h>


@interface _SBSceneHandleObserverBehavior : NSObject

@property (nonatomic) BOOL didCreateScene; // ivar: _didCreateScene
@property (nonatomic) BOOL didDestroyScene; // ivar: _didDestroyScene
@property (nonatomic) BOOL didUpdateClientSettingsWithDiff; // ivar: _didUpdateClientSettingsWithDiff
@property (nonatomic) BOOL didUpdateContentState; // ivar: _didUpdateContentState
@property (nonatomic) BOOL didUpdatePairingStatusForExternalSceneIdentifiers; // ivar: _didUpdatePairingStatusForExternalSceneIdentifiers
@property (nonatomic) BOOL didUpdateSettingsWithDiff; // ivar: _didUpdateSettingsWithDiff
@property (readonly, weak, nonatomic) NSObject<SBSceneHandleObserver> *observer; // ivar: _observer


+(id)behaviorFromObserver:(id)arg0 ;
-(id)initWithObserver:(id)arg0 ;


@end


#endif