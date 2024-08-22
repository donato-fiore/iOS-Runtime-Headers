// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRCMATCHPOINTDEVICEIMPL_H
#define TVRCMATCHPOINTDEVICEIMPL_H

@class NSString;
@protocol TVRCHMServiceWrapperDelegate, _TVRCDeviceImpl;

#import <Foundation/Foundation.h>

#import "TVRXDevice.h"
#import "TVRCHMServiceWrapper.h"

@interface TVRCMatchPointDeviceImpl : NSObject <TVRCHMServiceWrapperDelegate, _TVRCDeviceImpl>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) TVRXDevice *device; // ivar: _device
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TVRCHMServiceWrapper *service; // ivar: _service
@property (readonly) Class superclass;


+(id)implWithService:(id)arg0 ;
-(BOOL)supportsTouchEvents;
-(NSInteger)connectionType;
-(NSUInteger)pairingCapability;
-(id)alternateIdentifiers;
-(id)identifier;
-(id)initWithService:(id)arg0 ;
-(id)keyboardController;
-(id)model;
-(id)name;
-(id)supportedButtons;
-(id)voiceRecorder;
-(void)connect;
-(void)connectedToService:(id)arg0 ;
-(void)disconnect;
-(void)disconnectedFromService:(id)arg0 error:(id)arg1 ;
-(void)sendButtonEvent:(id)arg0 ;
-(void)sendGameControllerEvent:(id)arg0 ;
-(void)sendTouchEvent:(id)arg0 ;
-(void)service:(id)arg0 updatedName:(id)arg1 ;
-(void)setAuthenticationSupported:(BOOL)arg0 ;


@end


#endif