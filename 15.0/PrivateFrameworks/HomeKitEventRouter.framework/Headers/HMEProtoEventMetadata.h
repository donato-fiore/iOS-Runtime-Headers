// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMEPROTOEVENTMETADATA_H
#define HMEPROTOEVENTMETADATA_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface HMEProtoEventMetadata : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int cachePolicy; // ivar: _cachePolicy
@property (nonatomic) unsigned int combinePolicy; // ivar: _combinePolicy
@property (nonatomic) BOOL hasCachePolicy;
@property (nonatomic) BOOL hasCombinePolicy;
@property (nonatomic) BOOL hasQos;
@property (readonly, nonatomic) BOOL hasSource;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int qos; // ivar: _qos
@property (retain, nonatomic) NSString *source; // ivar: _source
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


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