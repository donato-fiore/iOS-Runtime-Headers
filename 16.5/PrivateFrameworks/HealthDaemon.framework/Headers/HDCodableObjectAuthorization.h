// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCODABLEOBJECTAUTHORIZATION_H
#define HDCODABLEOBJECTAUTHORIZATION_H

@class PBCodable, NSMutableArray, NSData;
@protocol NSCopying;



@interface HDCodableObjectAuthorization : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *authorizations; // ivar: _authorizations
@property (readonly, nonatomic) BOOL hasObjectUUID;
@property (retain, nonatomic) NSData *objectUUID; // ivar: _objectUUID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)authorizationsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAuthorizations:(id)arg0 ;
-(void)clearAuthorizations;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif