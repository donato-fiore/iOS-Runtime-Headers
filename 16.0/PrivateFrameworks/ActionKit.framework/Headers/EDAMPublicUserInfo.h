// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDAMPUBLICUSERINFO_H
#define EDAMPUBLICUSERINFO_H

@class NSString, NSNumber;


#import "FATObject.h"

@interface EDAMPublicUserInfo : FATObject

@property (retain, nonatomic) NSString *noteStoreUrl; // ivar: _noteStoreUrl
@property (retain, nonatomic) NSNumber *privilege; // ivar: _privilege
@property (retain, nonatomic) NSNumber *serviceLevel; // ivar: _serviceLevel
@property (retain, nonatomic) NSString *shardId; // ivar: _shardId
@property (retain, nonatomic) NSNumber *userId; // ivar: _userId
@property (retain, nonatomic) NSString *username; // ivar: _username
@property (retain, nonatomic) NSString *webApiUrlPrefix; // ivar: _webApiUrlPrefix


+(id)structFields;
+(id)structName;


@end


#endif