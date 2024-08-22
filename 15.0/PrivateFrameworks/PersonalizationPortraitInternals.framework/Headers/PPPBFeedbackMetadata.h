// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPPBFEEDBACKMETADATA_H
#define PPPBFEEDBACKMETADATA_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface PPPBFeedbackMetadata : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *clientBundleId; // ivar: _clientBundleId
@property (retain, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, nonatomic) BOOL hasClientBundleId;
@property (readonly, nonatomic) BOOL hasClientIdentifier;
@property (nonatomic) BOOL hasIsMapped;
@property (readonly, nonatomic) BOOL hasMappingId;
@property (nonatomic) BOOL hasUnixTimestampSec;
@property (nonatomic) BOOL isMapped; // ivar: _isMapped
@property (retain, nonatomic) NSString *mappingId; // ivar: _mappingId
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