// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCODABLESYNCIDENTITY_H
#define HDCODABLESYNCIDENTITY_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface HDCodableSyncIdentity : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *databaseIdentifier; // ivar: _databaseIdentifier
@property (retain, nonatomic) NSData *hardwareIdentifier; // ivar: _hardwareIdentifier
@property (readonly, nonatomic) BOOL hasDatabaseIdentifier;
@property (readonly, nonatomic) BOOL hasHardwareIdentifier;
@property (readonly, nonatomic) BOOL hasInstanceDiscriminator;
@property (retain, nonatomic) NSString *instanceDiscriminator; // ivar: _instanceDiscriminator


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif