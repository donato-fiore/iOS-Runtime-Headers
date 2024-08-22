// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PAAPPLICATION_H
#define PAAPPLICATION_H

@class NSString;
@protocol NSCopying, NSSecureCoding, BMProtoBufWrapper;

#import <Foundation/Foundation.h>

#import "PAApplication.h"

@interface PAApplication : NSObject <NSCopying, NSSecureCoding, BMProtoBufWrapper>



@property (readonly, nonatomic) ? auditToken;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger identifierType; // ivar: _identifierType
@property (readonly, nonatomic) PAApplication *parentApplication; // ivar: _parentApplication


+(BOOL)supportsSecureCoding;
+(id)applicationForCurrentProcess;
+(id)applicationWithAuditToken:(struct ? )arg0 ;
+(id)applicationWithType:(NSInteger)arg0 identifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)JSONObject;
-(id)copyWithNewParentApplication:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionForIdentifierType;
-(id)encodeAsProto;
-(id)initWithAuditToken:(struct ? )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInProcessIdentity;
-(id)initWithInsecureProcessIdentifier:(int)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithTCCIdentity:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 identifier:(id)arg1 ;
-(id)initWithType:(NSInteger)arg0 identifier:(id)arg1 parentApplication:(id)arg2 ;
-(id)proto;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif