// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEDDEVICE_H
#define DEDDEVICE_H

@class NSString, NSSet, SFDevice;
@protocol DEDDeviceUISupport, NSSecureCoding, NSCopying, DEDSecureArchiving;

#import <Foundation/Foundation.h>


@interface DEDDevice : NSObject <DEDDeviceUISupport, NSSecureCoding, NSCopying, DEDSecureArchiving>



@property (retain, nonatomic) NSString *_hashingKey; // ivar: __hashingKey
@property (retain) NSString *address; // ivar: _address
@property (retain, nonatomic) NSSet *bugSessions; // ivar: _bugSessions
@property (retain) NSString *build; // ivar: _build
@property (retain) NSSet *capabilities; // ivar: _capabilities
@property (retain) NSString *color; // ivar: _color
@property (retain) NSString *companionDeviceIdentifier; // ivar: _companionDeviceIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSString *deviceClass; // ivar: _deviceClass
@property (retain) NSString *enclosureColor; // ivar: _enclosureColor
@property (retain) NSString *hardwareCodename; // ivar: _hardwareCodename
@property (readonly) NSUInteger hash;
@property NSInteger homeButtonType; // ivar: _homeButtonType
@property (retain) NSString *homeKitIdentifier; // ivar: _homeKitIdentifier
@property (retain) NSString *homeTheaterSystemIdentifier; // ivar: _homeTheaterSystemIdentifier
@property (retain) NSString *homeTheaterSystemName; // ivar: _homeTheaterSystemName
@property (retain) NSString *identifier; // ivar: _identifier
@property (retain) NSString *idsIdentifier; // ivar: _idsIdentifier
@property BOOL isHomeKitResident; // ivar: _isHomeKitResident
@property (readonly, nonatomic) BOOL isRemote;
@property (retain) NSString *mediaRemoteIdentifier; // ivar: _mediaRemoteIdentifier
@property (retain) NSString *mediaSystemIdentifier; // ivar: _mediaSystemIdentifier
@property (retain) NSString *mediaSystemName; // ivar: _mediaSystemName
@property NSInteger mediaSystemRole; // ivar: _mediaSystemRole
@property (retain) NSString *model; // ivar: _model
@property (retain) NSString *name; // ivar: _name
@property (retain) NSString *platform; // ivar: _platform
@property (retain) NSString *productType; // ivar: _productType
@property NSInteger remoteTransport; // ivar: _remoteTransport
@property (retain) NSString *serialNumber; // ivar: _serialNumber
@property (retain) SFDevice *sfDevice; // ivar: _sfDevice
@property NSInteger status; // ivar: _status
@property (readonly) Class superclass;
@property NSInteger transport; // ivar: _transport
@property (retain) NSString *uniformTypeIdentifier; // ivar: _uniformTypeIdentifier


+(BOOL)supportsSecureCoding;
+(id)_currentDeviceId;
+(id)archivedClasses;
+(id)currentDevice;
+(id)currentDeviceWithDaemonInfo;
+(id)deviceForSFDevice:(id)arg0 andStatus:(NSInteger)arg1 ;
+(id)deviceForSFDevice:(id)arg0 systemInfo:(id)arg1 andStatus:(NSInteger)arg2 ;
+(id)deviceWithDictionary:(id)arg0 ;
+(id)idsDeviceWithDevice:(id)arg0 address:(id)arg1 ;
+(id)nilSafeDevice;
-(BOOL)hasCapabilities:(id)arg0 ;
-(BOOL)isCurrentDevice;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDevice:(id)arg0 ;
-(BOOL)isLikeDevice:(id)arg0 ;
-(BOOL)isMoreCompleteThan:(id)arg0 ;
-(BOOL)isTemporaryDevice;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)imageData;
-(id)imageURLForDeviceClass:(id)arg0 deviceModel:(id)arg1 deviceColor:(id)arg2 size:(NSInteger)arg3 variant:(NSInteger)arg4 scale:(float)arg5 ;
-(id)imageURLForScale:(float)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)publicLogDescription;
-(id)serialize;
-(id)shortDescription;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fetchIconImageDataForScale:(float)arg0 completionCompletion:(id)arg1 ;


@end


#endif