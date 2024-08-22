// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKFULLSCREENEFFECTMANAGER_H
#define CKFULLSCREENEFFECTMANAGER_H

@class NSString, NSTimer, NSMutableArray;
@protocol CKFullScreenEffectDelegate, CKFullScreenEffectManagerDelegate;

#import <Foundation/Foundation.h>

#import "CKFullScreenEffect.h"
#import "CKScheduledUpdater.h"

@interface CKFullScreenEffectManager : NSObject <CKFullScreenEffectDelegate>



@property (retain, nonatomic) CKFullScreenEffect *currentEffect; // ivar: _currentEffect
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKFullScreenEffectManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSTimer *effectDurationTimer; // ivar: _effectDurationTimer
@property (retain, nonatomic) NSMutableArray *effectQueue; // ivar: _effectQueue
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) CKScheduledUpdater *triggerUpdater; // ivar: _triggerUpdater


+(CGFloat)delayBeforeEffectWithIdentifier:(id)arg0 ;
+(CGFloat)idleDurationAfterEffectWithIdentifier:(id)arg0 ;
+(id)localizedMaskStringForEffectWithIdentifier:(id)arg0 ;
-(id)effectForIdentifier:(id)arg0 ;
-(id)effectIdentifiers;
-(id)fullscreenEffectMap;
-(id)init;
-(id)localizedDisplayNameForEffectWithIdentifier:(id)arg0 ;
-(id)localizedPickerTitleForEffectWithIdentifier:(id)arg0 ;
-(void)beginHoldingUpdatesForKey:(id)arg0 ;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)endHoldingUpdatesForKey:(id)arg0 ;
-(void)fullScreenEffectDidPrepareSoundEffect:(id)arg0 ;
-(void)startFullscreenEffectForChatItem:(id)arg0 language:(id)arg1 ;
-(void)stopFullscreenEffect;
-(void)triggerNextEffect;


@end


#endif