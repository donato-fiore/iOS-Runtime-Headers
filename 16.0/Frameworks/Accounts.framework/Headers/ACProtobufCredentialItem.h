// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACPROTOBUFCREDENTIALITEM_H
#define ACPROTOBUFCREDENTIALITEM_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "ACProtobufDate.h"
#import "ACProtobufURL.h"

@interface ACProtobufCredentialItem : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (retain, nonatomic) NSMutableArray *dirtyProperties; // ivar: _dirtyProperties
@property (retain, nonatomic) ACProtobufDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic) BOOL hasExpirationDate;
@property (nonatomic) BOOL hasIsPersistent;
@property (readonly, nonatomic) BOOL hasObjectID;
@property (nonatomic) BOOL isPersistent; // ivar: _isPersistent
@property (retain, nonatomic) ACProtobufURL *objectID; // ivar: _objectID
@property (retain, nonatomic) NSString *serviceName; // ivar: _serviceName


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)dirtyPropertiesAtIndex:(NSUInteger)arg0 ;
-(void)addDirtyProperties:(id)arg0 ;
-(void)clearDirtyProperties;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif