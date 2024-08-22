// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACPROTOBUFACCOUNTCREDENTIAL_H
#define ACPROTOBUFACCOUNTCREDENTIAL_H

@class PBCodable, NSMutableArray, NSDictionary, NSString;
@protocol NSCopying;



@interface ACProtobufAccountCredential : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *credentialItems; // ivar: _credentialItems
@property (copy, nonatomic) NSDictionary *credentialItemsDictionary;
@property (retain, nonatomic) NSString *credentialType; // ivar: _credentialType
@property (retain, nonatomic) NSMutableArray *dirtyProperties; // ivar: _dirtyProperties
@property (nonatomic) BOOL requiresTouchID; // ivar: _requiresTouchID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)credentialItemsAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)dirtyPropertiesAtIndex:(NSUInteger)arg0 ;
-(void)addCredentialItems:(id)arg0 ;
-(void)addDirtyProperties:(id)arg0 ;
-(void)clearCredentialItems;
-(void)clearDirtyProperties;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif