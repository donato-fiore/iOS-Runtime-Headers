// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMTWIFIPAYLOAD_H
#define DMTWIFIPAYLOAD_H

@class NSArray, NSString, NSDictionary;
@protocol DMTConfigurationPayload;


#import "DMTConfigurationPayloadBase.h"

@interface DMTWiFiPayload : DMTConfigurationPayloadBase <DMTConfigurationPayload>



@property (readonly, nonatomic) NSArray *acceptEAPTypes; // ivar: _acceptEAPTypes
@property (readonly, nonatomic) BOOL autoJoin; // ivar: _autoJoin
@property (readonly, nonatomic) NSArray *certificateAnchorUUID; // ivar: _certificateAnchorUUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSDictionary *eapClientConfiguration; // ivar: _eapClientConfiguration
@property (readonly, nonatomic) NSString *encryptionType; // ivar: _encryptionType
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDictionary *rawDictionary;
@property (readonly, nonatomic) NSString *ssid; // ivar: _ssid
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *uuid;


+(id)supportedPayloadTypes;
-(id)initWithDictionary:(id)arg0 error:(*id)arg1 ;


@end


#endif