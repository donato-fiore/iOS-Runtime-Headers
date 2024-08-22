// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EXVALUESQUERY_H
#define _EXVALUESQUERY_H

@class EXQuery, NSString, NSPredicate;



@interface _EXValuesQuery : EXQuery {
    unsigned int _platform;
    NSString *_extensionPointIdentifier;
    NSPredicate *_predicate;
    ? _hostAuditToken;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToQuery:(id)arg0 ;
-(BOOL)matchesRecord:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)extensionPointIdentifier;
-(id)extensionPointRecords;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExtensionPointIdentifier:(id)arg0 ;
-(id)initWithExtensionPointIdentifier:(id)arg0 predicate:(id)arg1 ;
-(id)predicate;
-(struct ? )hostAuditToken;
-(unsigned int)platform;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setExtensionPointIdentifier:(id)arg0 ;
-(void)setHostAuditToken:(struct ? )arg0 ;
-(void)setPlatform:(unsigned int)arg0 ;
-(void)setPredicate:(id)arg0 ;


@end


#endif