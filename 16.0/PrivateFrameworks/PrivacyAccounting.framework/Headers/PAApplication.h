// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PAAPPLICATION_H
#define PAAPPLICATION_H

@class NSString;
@protocol NSCopying, NSSecureCoding, BMProtoBufWrapper, OS_tcc_identity;

#import <Foundation/Foundation.h>

#import "PABridgedTCCIdentity.h"

@interface PAApplication : NSObject <NSCopying, NSSecureCoding, BMProtoBufWrapper>



@property (readonly, nonatomic) NSObject<OS_tcc_identity> *assumedIdentity;
@property (readonly, nonatomic) ? auditToken; // ivar: _auditToken
@property (readonly, nonatomic) PABridgedTCCIdentity *bridgedAssumedIdentity; // ivar: _bridgedAssumedIdentity
@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) NSString *descriptionForIdentifier;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSInteger identifierType; // ivar: _identifierType
@property (readonly, nonatomic) int insecureProcessIdentifier; // ivar: _insecureProcessIdentifier
@property (readonly, nonatomic) NSString *path; // ivar: _path


+(BOOL)supportsSecureCoding;
+(id)applicationForCurrentProcess;
+(id)applicationWithAuditToken:(struct ? )arg0 ;
+(id)applicationWithBundleID:(id)arg0 ;
+(id)applicationWithPath:(id)arg0 ;
+(id)applicationWithType:(NSInteger)arg0 identifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)JSONObject;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)encodeAsProto;
-(id)initWithAuditToken:(struct ? )arg0 ;
-(id)initWithBundleID:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInProcessAssumedIdentity:(id)arg0 ;
-(id)initWithInProcessBridgedAssumedIdentity:(id)arg0 ;
-(id)initWithInProcessIdentity;
-(id)initWithInsecureProcessIdentifier:(int)arg0 ;
-(id)initWithPath:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithTCCIdentity:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 identifier:(id)arg1 ;
-(id)proto;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif