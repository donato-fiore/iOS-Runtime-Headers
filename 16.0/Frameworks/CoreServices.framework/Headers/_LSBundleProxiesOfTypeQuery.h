// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LSBUNDLEPROXIESOFTYPEQUERY_H
#define _LSBUNDLEPROXIESOFTYPEQUERY_H

@class LSBundleQuery;



@interface _LSBundleProxiesOfTypeQuery : LSBundleQuery

@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)queryWithType:(NSUInteger)arg0 ;
-(BOOL)_requiresDatabaseMappingEntitlement;
-(BOOL)bundleUnitMeetsRequirements:(unsigned int)arg0 bundleData:(struct LSBundleData *)arg1 context:(struct LSContext *)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(void)_enumerateWithXPCConnection:(id)arg0 block:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif