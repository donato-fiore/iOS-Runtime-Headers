// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INVOICESHORTCUTCENTER_H
#define INVOICESHORTCUTCENTER_H

@protocol INVCVoiceShortcutClient;

#import <Foundation/Foundation.h>


@interface INVoiceShortcutCenter : NSObject

@property (retain, nonatomic, setter=_setVoiceShortcutClient:) NSObject<INVCVoiceShortcutClient> *voiceShortcutClient; // ivar: _voiceShortcutClient


+(id)sharedCenter;
+(void)initialize;
-(id)_initWithVoiceShortcutClient:(id)arg0 ;
-(id)init;
-(void)getAllVoiceShortcutsWithCompletion:(id)arg0 ;
-(void)getVoiceShortcutWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)setShortcutSuggestions:(id)arg0 ;


@end


#endif