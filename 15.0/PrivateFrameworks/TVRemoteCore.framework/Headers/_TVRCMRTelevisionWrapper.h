// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVRCMRTELEVISIONWRAPPER_H
#define _TVRCMRTELEVISIONWRAPPER_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "_TVRCMROriginWrapper.h"

@interface _TVRCMRTelevisionWrapper : NSObject {
    *void _television;
}


@property (readonly, copy, nonatomic) NSDictionary *alternateIdentifiers;
@property (readonly, copy, nonatomic) _TVRCMROriginWrapper *customOrigin;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) BOOL isPairingAllowed;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *softwareVersion;
@property (readonly, nonatomic) unsigned int voiceRecordingState;


+(id)wrapperWithTelevision:(*void)arg0 ;
+(void)deletePairedDevice:(id)arg0 ;
-(id)description;
-(id)initWithTelevision:(*void)arg0 ;
-(void)clearText;
-(void)connect;
-(void)dealloc;
-(void)deleteBackward;
-(void)disconnect;
-(void)getCurrentRTISourceSession:(id)arg0 ;
-(void)getTextEditingSession:(id)arg0 ;
-(void)insertText:(id)arg0 ;
-(void)registerGameControllerDevice:(id)arg0 ;
-(void)registerVirtualTouchDevice:(id)arg0 completion:(id)arg1 ;
-(void)registerVirtualVoiceInputDevice:(id)arg0 completion:(id)arg1 ;
-(void)sendAudioData:(id)arg0 withDeviceID:(unsigned int)arg1 ;
-(void)sendButtonEvent:(struct _MRHIDButtonEvent )arg0 ;
-(void)sendGameControllerButtonEventWithButton:(NSUInteger)arg0 isDown:(BOOL)arg1 controllerID:(NSUInteger)arg2 ;
-(void)sendGameControllerDigitizerEvent:(id)arg0 withControllerID:(NSUInteger)arg1 ;
-(void)sendTouchEvent:(struct _MRHIDTouchEvent )arg0 withDeviceID:(NSUInteger)arg1 ;
-(void)setConnectionStateHandler:(id)arg0 ;
-(void)setGameControllerInputModeHandler:(id)arg0 ;
-(void)setPairingHandler:(id)arg0 ;
-(void)setRTISessionHandler:(id)arg0 ;
-(void)setText:(id)arg0 ;
-(void)setTextEditingHandler:(id)arg0 ;
-(void)setWantsNowPlayingUpdates:(BOOL)arg0 ;
-(void)setWantsVolumeControlAvailabilityUpdates:(BOOL)arg0 ;
-(void)unregisterGameControllerDevice:(NSUInteger)arg0 ;


@end


#endif