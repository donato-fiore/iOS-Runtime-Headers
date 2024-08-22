// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATSERVERDELEGATEPRIV_H
#define ATSERVERDELEGATEPRIV_H

@protocol ATServerDelegate;

#import <Foundation/Foundation.h>


@interface ATServerDelegatePriv : NSObject <ATServerDelegate>





-(BOOL)dolbyDigitalEncoderAvailable;
-(BOOL)spatialAudioEnabled:(unsigned int)arg0 mode:(id)arg1 ;
-(id)spatialPreferencesForSession:(unsigned int)arg0 contentType:(unsigned int)arg1 ;
-(int)handleInterruptionWithID:(unsigned int)arg0 clientPID:(int)arg1 interruptionState:(unsigned int)arg2 interruptionInfo:(id)arg3 ;
-(int)muteSessionInput:(unsigned int)arg0 clientPID:(int)arg1 muted:(BOOL)arg2 ;
-(int)refreshRecordPermissions:(struct ? *)arg0 ;
-(void)handleCategoryOrModeChange:(unsigned int)arg0 ;
-(void)setTelephonyClientSessionID:(unsigned int)arg0 ;


@end


#endif