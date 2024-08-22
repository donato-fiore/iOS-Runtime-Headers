// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDAMSERVICEACCESSENTRY_H
#define EDAMSERVICEACCESSENTRY_H

@class NSNumber, NSString;


#import "FATObject.h"

@interface EDAMServiceAccessEntry : FATObject

@property (retain, nonatomic) NSNumber *accessTime; // ivar: _accessTime
@property (retain, nonatomic) NSNumber *apiKeyId; // ivar: _apiKeyId
@property (retain, nonatomic) NSNumber *authenticatedClientUserId; // ivar: _authenticatedClientUserId
@property (retain, nonatomic) NSNumber *businessAdmin; // ivar: _businessAdmin
@property (retain, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (retain, nonatomic) NSNumber *userId; // ivar: _userId


+(id)structFields;
+(id)structName;


@end


#endif