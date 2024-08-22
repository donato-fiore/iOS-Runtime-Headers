// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LSPLUGINQUERY_H
#define LSPLUGINQUERY_H

@class LSQuery;



@interface LSPlugInQuery : LSQuery



+(BOOL)supportsSecureCoding;
+(id)pluginQuery;
+(id)pluginQueryWithIdentifier:(id)arg0 ;
+(id)pluginQueryWithQueryDictionary:(id)arg0 applyFilter:(id)arg1 ;
+(id)pluginQueryWithURL:(id)arg0 ;
+(id)pluginQueryWithUUID:(id)arg0 ;
-(BOOL)_remoteResolutionIsExpensive;
-(BOOL)_requiresDatabaseMappingEntitlement;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_init;
-(id)initWithCoder:(id)arg0 ;
-(void)_enumerateWithXPCConnection:(id)arg0 block:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
// -(void)sort:(BOOL)arg0 pluginIDs:(id)arg1 andYield:(id)arg2 context:(unk)arg3  ;


@end


#endif