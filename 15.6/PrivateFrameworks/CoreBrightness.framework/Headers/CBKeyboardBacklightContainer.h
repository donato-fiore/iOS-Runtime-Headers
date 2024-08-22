// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CBKEYBOARDBACKLIGHTCONTAINER_H
#define CBKEYBOARDBACKLIGHTCONTAINER_H

@class NSMutableDictionary, NSString, HIDDevice;
@protocol CBContainerProtocol, CBHIDServiceProtocol, CBStatusInfoProtocol, OS_os_log;


#import "CBContainer.h"
#import "KeyboardBacklight.h"

@interface CBKeyboardBacklightContainer : CBContainer <CBContainerProtocol, CBHIDServiceProtocol, CBStatusInfoProtocol>

 {
    NSObject<OS_os_log> *_logHandle;
    KeyboardBacklight *_keyboardBacklight;
    BOOL _userActive;
    NSMutableDictionary *_properties;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HIDDevice *device; // ivar: _device
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)addHIDServiceClient:(struct __IOHIDServiceClient *)arg0 ;
-(BOOL)handleHIDEvent:(struct __IOHIDEvent *)arg0 from:(struct __IOHIDServiceClient *)arg1 ;
-(BOOL)keyboardUsesNitUnits:(id)arg0 ;
-(BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient *)arg0 ;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(BOOL)setPropertyInternal:(id)arg0 forKey:(id)arg1 ;
-(BOOL)start;
-(id)copyIdentifiers;
-(id)copyPropertyForKey:(id)arg0 ;
-(id)copyPropertyInternalForKey:(id)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(id)newKeyboardBacklightWithQueue:(id)arg0 device:(id)arg1 ;
-(void)dealloc;
-(void)keyboardBacklightInitialization;
-(void)sendNotificationForKey:(id)arg0 andValue:(id)arg1 ;
-(void)stop;


@end


#endif