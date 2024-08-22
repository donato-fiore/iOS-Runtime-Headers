// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAP2ACCESSORYSERVERMETADATA_H
#define HAP2ACCESSORYSERVERMETADATA_H

@class NSString, HMFVersion, NSData;
@protocol HAP2AccessoryServerMetadata;


#import "HAP2LoggingObject.h"
#import "HAPDeviceID.h"

@interface HAP2AccessoryServerMetadata : HAP2LoggingObject <HAP2AccessoryServerMetadata>



@property (readonly, nonatomic) NSUInteger category; // ivar: _category
@property (readonly, nonatomic) unsigned short configNumber; // ivar: _configNumber
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HAPDeviceID *deviceID; // ivar: _deviceID
@property (readonly, nonatomic) BOOL hasPairings; // ivar: _hasPairings
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *model; // ivar: _model
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) HMFVersion *protocolVersion; // ivar: _protocolVersion
@property (readonly, nonatomic) NSData *setupHash; // ivar: _setupHash
@property (readonly, nonatomic) unsigned short stateNumber; // ivar: _stateNumber
@property (readonly) Class superclass;


+(id)new;
-(id)init;
-(id)initWithDeviceID:(id)arg0 hasPairings:(BOOL)arg1 protocolVersion:(id)arg2 name:(id)arg3 model:(id)arg4 category:(NSUInteger)arg5 stateNumber:(unsigned short)arg6 configNumber:(unsigned short)arg7 setupHash:(id)arg8 ;


@end


#endif