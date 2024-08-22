// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKAUDIOSESSIONCONTROLLER_H
#define CKAUDIOSESSIONCONTROLLER_H


#import <Foundation/Foundation.h>


@interface CKAudioSessionController : NSObject

@property (getter=isActive) BOOL active; // ivar: _active
@property (getter=isDirty) BOOL dirty; // ivar: _dirty
@property NSUInteger options; // ivar: _options
@property (readonly) BOOL shouldDuckOthers;
@property (readonly) BOOL shouldStopPlayingWhenSilent;
@property (readonly) BOOL shouldUseSpeaker;


+(id)queue;
+(id)shareInstance;
-(id)init;
-(void)activateWithOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)audioSessionInterruption:(id)arg0 ;
-(void)audioSessionMediaServicesWereLost:(id)arg0 ;
-(void)audioSessionMediaServicesWereReset:(id)arg0 ;
-(void)audioSessionRouteChange:(id)arg0 ;
-(void)configureAudioSessionWithOptions:(NSUInteger)arg0 ;
-(void)deactivate;
-(void)dealloc;


@end


#endif