// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMFULLSCREENEFFECTMANAGER_H
#define IMFULLSCREENEFFECTMANAGER_H

@class NSString, NSMutableArray, IMScheduledUpdater;
@protocol IMFullScreenEffectPlayerDelegate, IMFullScreenEffectManagerDelegate;

#import <Foundation/Foundation.h>

#import "IMFullScreenEffect.h"
#import "IMFullScreenEffectPlayer.h"

@interface IMFullScreenEffectManager : NSObject <IMFullScreenEffectPlayerDelegate>



@property (readonly, nonatomic) IMFullScreenEffect *currentEffect;
@property (retain, nonatomic) IMFullScreenEffectPlayer *currentEffectPlayer; // ivar: _currentEffectPlayer
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IMFullScreenEffectManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableArray *effectQueue; // ivar: _effectQueue
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) IMScheduledUpdater *triggerUpdater; // ivar: _triggerUpdater


-(BOOL)isFullScreenEffectQueued:(id)arg0 ;
-(CGFloat)adjustedEffectDurationForTesting:(id)arg0 ;
-(id)init;
-(void)_stopCurrentFullscreenEffect:(BOOL)arg0 ;
-(void)beginHoldingUpdatesForKey:(id)arg0 ;
-(void)dealloc;
-(void)endHoldingUpdatesForKey:(id)arg0 ;
-(void)fullScreenEffectPlayerDidFinish:(id)arg0 ;
-(void)fullScreenEffectPlayerDidPrepare:(id)arg0 ;
-(void)fullScreenEffectPlayerDidStart:(id)arg0 ;
-(void)queueFullScreenEffectPlayer:(id)arg0 withRepeating:(BOOL)arg1 ;
-(void)stopAllFullscreenEffectPlayers;
-(void)stopCurrentFullscreenEffectPlayer;
-(void)triggerNextEffect;
-(void)willStartFullScreenEffect:(id)arg0 ;


@end


#endif