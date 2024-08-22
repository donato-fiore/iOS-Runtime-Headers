// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _LSAPPLICATIONPROXIESWITHFLAGSQUERY_H
#define _LSAPPLICATIONPROXIESWITHFLAGSQUERY_H

@class LSBundleQuery;



@interface _LSApplicationProxiesWithFlagsQuery : LSBundleQuery

@property (readonly, nonatomic) NSUInteger bundleFlags; // ivar: _bundleFlags
@property (readonly, nonatomic) unsigned int plistFlags; // ivar: _plistFlags


+(BOOL)supportsSecureCoding;
+(id)queryWithPlistFlags:(unsigned int)arg0 bundleFlags:(NSUInteger)arg1 ;
-(BOOL)_requiresDatabaseMappingEntitlement;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(void)_enumerateWithXPCConnection:(id)arg0 block:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif