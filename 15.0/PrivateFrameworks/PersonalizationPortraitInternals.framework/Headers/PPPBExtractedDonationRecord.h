// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPPBEXTRACTEDDONATIONRECORD_H
#define PPPBEXTRACTEDDONATIONRECORD_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface PPPBExtractedDonationRecord : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *algorithm; // ivar: _algorithm
@property (readonly, nonatomic) BOOL hasAlgorithm;
@property (readonly, nonatomic) BOOL hasNamedEntity;
@property (nonatomic) BOOL hasScore;
@property (readonly, nonatomic) BOOL hasSourceBundleId;
@property (nonatomic) BOOL hasTopicId;
@property (nonatomic) BOOL hasUnixTimestampSec;
@property (retain, nonatomic) NSString *namedEntity; // ivar: _namedEntity
@property (nonatomic) CGFloat score; // ivar: _score
@property (retain, nonatomic) NSString *sourceBundleId; // ivar: _sourceBundleId
@property (nonatomic) NSUInteger topicId; // ivar: _topicId
@property (nonatomic) NSUInteger unixTimestampSec; // ivar: _unixTimestampSec


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