// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDEFAULTFOCUSSOUNDPLAYER_H
#define _UIDEFAULTFOCUSSOUNDPLAYER_H

@class NSString, NSMutableDictionary, NSTimer;
@protocol _UIFocusSoundPlayer, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _UIDefaultFocusSoundPlayer : NSObject <_UIFocusSoundPlayer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *focusSoundPools; // ivar: _focusSoundPools
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *soundQueue; // ivar: _soundQueue
@property (readonly) Class superclass;
@property (retain, nonatomic) NSTimer *unregisterTimer; // ivar: _unregisterTimer
@property (retain, nonatomic) NSMutableDictionary *urlPools; // ivar: _urlPools


+(id)sharedInstance;
-(id)_init;
-(void)_playSystemSound:(unsigned int)arg0 withVolume:(CGFloat)arg1 pan:(CGFloat)arg2 ;
-(void)_registerForSystemSoundsIfNecessary;
-(void)dealloc;
-(void)playSoundWithFocusSound:(NSInteger)arg0 volume:(CGFloat)arg1 pan:(CGFloat)arg2 ;
-(void)playSoundWithURL:(id)arg0 volume:(CGFloat)arg1 pan:(CGFloat)arg2 ;


@end


#endif