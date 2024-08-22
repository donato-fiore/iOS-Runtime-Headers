// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATAUDIOSESSIONCLIENTIMPL_H
#define ATAUDIOSESSIONCLIENTIMPL_H

@class AVAudioSession;

#import <Foundation/Foundation.h>

#import "ATAudioSessionPropertyManager.h"

@interface ATAudioSessionClientImpl : NSObject {
    AVAudioSession *_weakSession;
    AVAudioSession *_strongSession;
    ATAudioSessionPropertyManager *_propertyManager;
    unique_ptr<AudioSessionPropertyListeners, std::default_delete<AudioSessionPropertyListeners>> _propertyListeners;
    map<std::string, std::shared_ptr<OldNotificationCenterObserver>, std::less<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<OldNotificationCenterObserver>>>> _oldNotificationCenterObservers;
    map<std::string, std::shared_ptr<NewNotificationCenterObserver>, std::less<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<NewNotificationCenterObserver>>>> _newNotificationCenterObservers;
    ObjectRef<__CFRunLoop *> _clientRunLoop;
    StringRef _clientRunLoopMode;
}


@property (readonly) AVAudioSession *avas;
@property *unk clientInterruptionListenerProc; // ivar: _clientInterruptionListenerProc
@property *void clientUserData; // ivar: _clientUserData
@property unsigned int interruptionType; // ivar: _interruptionType
@property BOOL isConfigured; // ivar: _isConfigured


-(BOOL)isValid;
-(id)initWithSession:(id)arg0 ;
-(id)initWithStrongSession:(id)arg0 ;
-(int)AudioSessionAddPropertyListenerImpl:(unsigned int)arg0 userProc:(*unk)arg1 userData:(*void)arg2 ;
-(int)AudioSessionGetPropertyImpl:(unsigned int)arg0 size:(*unsigned int)arg1 data:(*void)arg2 ;
-(int)AudioSessionGetPropertySizeImpl:(unsigned int)arg0 size:(*unsigned int)arg1 ;
-(int)AudioSessionRemovePropertyListenerImpl:(unsigned int)arg0 ;
-(int)AudioSessionRemovePropertyListenerWithUserDataImpl:(unsigned int)arg0 userProc:(*unk)arg1 userData:(*void)arg2 ;
-(int)AudioSessionSetActiveImpl:(unsigned char)arg0 flags:(unsigned int)arg1 ;
-(int)AudioSessionSetPropertyImpl:(unsigned int)arg0 size:(unsigned int)arg1 data:(*void)arg2 ;
-(int)resetClientConfiguration;
-(int)setClientConfiguration:(struct __CFRunLoop *)arg0 runLoopMode:(struct __CFString *)arg1 listenerProc:(*unk)arg2 userData:(*void)arg3 ;
-(void)addAVAudioSessionKVOObservers:(unsigned int)arg0 session:(id)arg1 ;
-(void)addNSNotificationListenerFor:(id)arg0 session:(id)arg1 block:(id)arg2 ;
-(void)addNSNotificationListenerFor:(id)arg0 session:(id)arg1 selector:(SEL)arg2 ;
-(void)callPropertyListeners:(unsigned int)arg0 data:(id)arg1 ;
-(void)handleInterruption:(id)arg0 ;
-(void)handleRouteChange:(id)arg0 ;
-(void)handleServerDeath:(id)arg0 ;
-(void)handleServerReset:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeAVAudioSessionKVOObservers:(unsigned int)arg0 ;


@end


#endif