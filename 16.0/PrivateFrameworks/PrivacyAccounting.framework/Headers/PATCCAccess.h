// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PATCCACCESS_H
#define PATCCACCESS_H

@class NSString;


#import "PAAccess.h"

@interface PATCCAccess : PAAccess

@property (readonly, nonatomic) NSString *tccService; // ivar: _tccService


+(BOOL)supportsSecureCoding;
+(id)accessWithAccessor:(id)arg0 forService:(id)arg1 ;
+(id)accessWithAuditToken:(struct ? )arg0 forService:(id)arg1 ;
+(id)accessWithAuthorization:(id)arg0 ;
+(id)accessWithInsecureProcessIdentifier:(int)arg0 forService:(id)arg1 ;
+(id)eventStreamIdentifier;
-(BOOL)isEqualToAccess:(id)arg0 withOptions:(NSUInteger)arg1 ;
-(NSUInteger)hashWithOptions:(NSUInteger)arg0 ;
-(id)category;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionForCategory;
-(id)initWithAccessor:(id)arg0 forService:(id)arg1 ;
-(id)initWithAccessor:(id)arg0 forService:(id)arg1 assetIdentifiers:(id)arg2 ;
-(id)initWithAccessor:(id)arg0 identifier:(id)arg1 kind:(NSInteger)arg2 forService:(id)arg3 ;
-(id)initWithAuditToken:(struct ? )arg0 forService:(id)arg1 ;
-(id)initWithAuthorization:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInsecureProcessIdentifier:(int)arg0 forService:(id)arg1 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif