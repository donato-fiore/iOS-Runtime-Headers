// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBASSET_H
#define NTPBASSET_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface NTPBAsset : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int error; // ivar: _error
@property (nonatomic) BOOL hasError;
@property (nonatomic) BOOL hasSize;
@property (readonly, nonatomic) BOOL hasWrappingKeyID;
@property (nonatomic) unsigned int size; // ivar: _size
@property (retain, nonatomic) NSData *wrappingKeyID; // ivar: _wrappingKeyID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif