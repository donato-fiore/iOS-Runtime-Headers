// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKFULLSCREENEFFECT_H
#define CKFULLSCREENEFFECT_H

@class NSString;
@protocol CKAudioControllerDelegate, CKFullScreenEffectDelegate;

#import <Foundation/Foundation.h>

#import "CKAudioController.h"
#import "CKMessagePartChatItem.h"

@interface CKFullScreenEffect : NSObject <CKAudioControllerDelegate>

 {
    CKAudioController *_audioController;
    float _currentVolume;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKFullScreenEffectDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) char messageOrientation; // ivar: messageOrientation
@property (readonly) Class superclass;
@property (nonatomic) BOOL triggeredByResponseKit; // ivar: _triggeredByResponseKit
@property (retain, nonatomic) CKMessagePartChatItem *triggeringChatItem; // ivar: _triggeringChatItem


+(id)_monochromeDimmingFilterWithType:(int)arg0 ;
+(id)bigEmojiFilter;
+(id)stickerFilter;
+(id)tapBackFilter;
-(BOOL)_isPlaySoundEnabled;
-(BOOL)_supportsSoundEffects;
-(BOOL)effectIsDark;
-(BOOL)isForegroundEffect;
-(BOOL)shouldDrawOverNavigationBar;
-(BOOL)soundEffectHasHapticTrack;
-(CGFloat)duration;
-(Class)effectViewClass;
-(NSUInteger)layerCount;
-(id)backgroundColor;
-(id)messageFilters;
-(id)soundEffectFileURL;
-(int)_filterTypeForCell:(id)arg0 caresAboutOrientation:(*BOOL)arg1 orientation:(*char)arg2 ;
-(void)_audioSessionOptionsWillChange:(id)arg0 ;
-(void)_didPrepareSoundEffect;
-(void)_ensureAudioPlayer;
-(void)animateFiltersForCell:(id)arg0 ;
-(void)applyMessageFiltersToCells:(id)arg0 ;
-(void)applyMessageFiltersToTriggeringCell:(id)arg0 ;
-(void)audioController:(id)arg0 didPrepareMediaObjectToPlay:(id)arg1 successfully:(BOOL)arg2 ;
-(void)audioController:(id)arg0 mediaObjectProgressDidChange:(id)arg1 currentTime:(CGFloat)arg2 duration:(CGFloat)arg3 ;
-(void)clearMessageFiltersFromCells:(id)arg0 ;
-(void)dealloc;
-(void)playSoundEffect;
-(void)prepareSoundEffect;
-(void)stopSoundEffect;


@end


#endif