// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDAMCLIENTACCESSENTRY_H
#define EDAMCLIENTACCESSENTRY_H

@class NSNumber, NSString;


#import "FATObject.h"

@interface EDAMClientAccessEntry : FATObject

@property (retain, nonatomic) NSNumber *accessTime; // ivar: _accessTime
@property (retain, nonatomic) NSNumber *apiKeyId; // ivar: _apiKeyId
@property (retain, nonatomic) NSString *appName; // ivar: _appName
@property (retain, nonatomic) NSNumber *authenticatedClientUserId; // ivar: _authenticatedClientUserId
@property (retain, nonatomic) NSNumber *browserType; // ivar: _browserType
@property (retain, nonatomic) NSNumber *businessAdmin; // ivar: _businessAdmin
@property (retain, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (retain, nonatomic) NSString *ipAddress; // ivar: _ipAddress
@property (retain, nonatomic) NSString *location; // ivar: _location
@property (retain, nonatomic) NSNumber *longSessionCreated; // ivar: _longSessionCreated
@property (retain, nonatomic) NSNumber *userId; // ivar: _userId


+(id)structFields;
+(id)structName;


@end


#endif