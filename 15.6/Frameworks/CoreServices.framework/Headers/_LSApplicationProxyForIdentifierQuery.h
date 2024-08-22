// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _LSAPPLICATIONPROXYFORIDENTIFIERQUERY_H
#define _LSAPPLICATIONPROXYFORIDENTIFIERQUERY_H

@class LSBundleQuery, NSString;



@interface _LSApplicationProxyForIdentifierQuery : LSBundleQuery

@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier


+(BOOL)supportsSecureCoding;
+(id)alwaysAllowedBundleIdentifiers;
+(id)queryWithIdentifier:(id)arg0 ;
-(BOOL)_requiresDatabaseMappingEntitlement;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(void)_enumerateWithXPCConnection:(id)arg0 block:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif