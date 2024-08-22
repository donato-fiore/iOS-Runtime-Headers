// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBWRAPPINGKEYREQUEST_H
#define NTPBWRAPPINGKEYREQUEST_H

@class PBRequest, NSMutableArray;
@protocol NSCopying;



@interface NTPBWrappingKeyRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSMutableArray *wrappingKeyIds; // ivar: _wrappingKeyIds


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)wrappingKeyIdsAtIndex:(NSUInteger)arg0 ;
-(void)addWrappingKeyIds:(id)arg0 ;
-(void)clearWrappingKeyIds;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif