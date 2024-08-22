// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMAUDIOSESSIONCONTROLLER_H
#define IMAUDIOSESSIONCONTROLLER_H


#import <Foundation/Foundation.h>


@interface IMAudioSessionController : NSObject

@property (getter=isActive) BOOL active; // ivar: _active
@property (getter=isDirty) BOOL dirty; // ivar: _dirty
@property NSUInteger options; // ivar: _options
@property (readonly) BOOL shouldDuckOthers;
@property (readonly) BOOL shouldStopPlayingWhenSilent;
@property (readonly) BOOL shouldUseSpeaker;


+(id)__singleton__im;
+(id)queue;
+(id)sharedInstance;
+(void)__setSingleton__im:(id)arg0 ;
-(void)activateWithOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)configureAudioSessionWithOptions:(NSUInteger)arg0 ;
-(void)deactivate;


@end


#endif