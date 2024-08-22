// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCMOUSE_H
#define GCMOUSE_H

@class NSString, NSArray, GCPhysicalInputProfile<GCNamedProfile>;
@protocol NSSecureCoding, GCDeviceLegacy, GCDevice, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "GCMouseInput.h"
#import "GCPhysicalInputProfile.h"
#import "GCController.h"

@interface GCMouse : NSObject <NSSecureCoding, GCDeviceLegacy, GCDevice>



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
@property (readonly, nonatomic) GCMouseInput *mouseInput;
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
+(id)current;
+(id)mice;
-(*void)createInputBufferForDevice:(struct __IOHIDDevice *)arg0 withSize:(NSUInteger)arg1 ;
-(BOOL)_legacy_isAttachedToDevice;
-(BOOL)_legacy_isEqualToController:(id)arg0 ;
-(BOOL)hasServiceRef:(struct __IOHIDServiceClient *)arg0 ;
-(BOOL)isATVRemote;
-(NSInteger)_legacy_playerIndex;
-(id)initWithCoder:(id)arg0 ;
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