// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GCKEYBOARD_H
#define GCKEYBOARD_H

@class NSString, NSArray, GCPhysicalInputProfile<GCNamedProfile>;
@protocol NSSecureCoding, GCDeviceLegacy, GCDevice, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "GCKeyboardInput.h"
#import "GCPhysicalInputProfile.h"
#import "GCController.h"

@interface GCKeyboard : NSObject <NSSecureCoding, GCDeviceLegacy, GCDevice>



@property (nonatomic, getter=areAllHIDDevicesConnected) BOOL allHIDDevicesConnected;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *debugName;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger deviceHash;
@property (nonatomic, getter=isForwarded) BOOL forwarded;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *hidServices;
@property (readonly, nonatomic) GCKeyboardInput *keyboardInput;
@property (retain, nonatomic) NSString *physicalDeviceUniqueID;
@property (readonly, nonatomic) GCPhysicalInputProfile *physicalInputProfile;
@property (readonly, nonatomic) NSString *productCategory;
@property (readonly, nonatomic) NSString *productCategory;
@property (retain, nonatomic) GCPhysicalInputProfile<GCNamedProfile> *profile;
@property (readonly, nonatomic) GCController *proxyController;
@property (retain, nonatomic) GCController *proxyController; // ivar: _proxyController
@property (nonatomic, getter=isPublished) BOOL published;
@property (readonly, nonatomic) unsigned int service;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *vendorName;


+(BOOL)supportsSecureCoding;
+(id)coalescedKeyboard;
+(id)keyboardWithKeyboardInput;
+(void)__openXPC_and_CBApplicationDidBecomeActive__;
+(void)__open__;
+(void)__setLogger__:(id)arg0 ;
-(*void)createInputBufferForDevice:(struct __IOHIDDevice *)arg0 withSize:(NSUInteger)arg1 ;
-(BOOL)_legacy_isAttachedToDevice;
-(BOOL)_legacy_isEqualToController:(id)arg0 ;
-(BOOL)hasServiceRef:(struct __IOHIDServiceClient *)arg0 ;
-(BOOL)isATVRemote;
-(NSInteger)_legacy_playerIndex;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProxyController:(id)arg0 ;
-(id)initWithServiceRef:(struct __IOHIDServiceClient *)arg0 ;
-(unsigned int)sampleRate;
-(void)_legacy_setPlayerIndex:(NSInteger)arg0 ;
-(void)addServiceRef:(id)arg0 ;
-(void)addServiceRefsWithDevice:(id)arg0 ;
-(void)clearServiceRef;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleEvent:(struct __IOHIDEvent *)arg0 ;
-(void)removeServiceRef:(struct __IOHIDServiceClient *)arg0 ;


@end


#endif