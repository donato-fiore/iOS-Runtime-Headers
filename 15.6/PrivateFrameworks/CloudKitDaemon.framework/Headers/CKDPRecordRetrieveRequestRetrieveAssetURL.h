// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPRECORDRETRIEVEREQUESTRETRIEVEASSETURL_H
#define CKDPRECORDRETRIEVEREQUESTRETRIEVEASSETURL_H

@class PBCodable;
@protocol NSCopying;


#import "CKDPRequestedFields.h"

@interface CKDPRecordRetrieveRequestRetrieveAssetURL : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) CKDPRequestedFields *assetFields; // ivar: _assetFields
@property (readonly, nonatomic) BOOL hasAssetFields;
@property (nonatomic) BOOL hasRequestedTTL;
@property (nonatomic) BOOL hasType;
@property (nonatomic) NSInteger requestedTTL; // ivar: _requestedTTL
@property (nonatomic) int type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif