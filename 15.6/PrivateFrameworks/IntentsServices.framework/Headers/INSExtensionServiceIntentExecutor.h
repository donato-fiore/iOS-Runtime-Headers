// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INSEXTENSIONSERVICEINTENTEXECUTOR_H
#define INSEXTENSIONSERVICEINTENTEXECUTOR_H

@class INCExtensionProxy, INIntent;
@protocol OS_dispatch_queue, INVCVoiceShortcutClient;

#import <Foundation/Foundation.h>


@interface INSExtensionServiceIntentExecutor : NSObject

@property (retain, nonatomic) INCExtensionProxy *extensionProxy; // ivar: _extensionProxy
@property (retain, nonatomic) INIntent *intent; // ivar: _intent
@property (nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSObject<INVCVoiceShortcutClient> *voiceShortcutClient; // ivar: _voiceShortcutClient


-(id)initWithIntent:(id)arg0 extensionProxy:(id)arg1 queue:(id)arg2 ;
-(id)initWithVoiceShortcutClient:(id)arg0 intent:(id)arg1 ;
-(void)sendAceCommand:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif