// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPPBMUSICDATACOLLECTIONRECORD_H
#define PPPBMUSICDATACOLLECTIONRECORD_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface PPPBMusicDataCollectionRecord : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int algorithm; // ivar: _algorithm
@property (nonatomic) BOOL hasAlgorithm;
@property (readonly, nonatomic) BOOL hasLabel;
@property (readonly, nonatomic) BOOL hasMediaId;
@property (nonatomic) BOOL hasMediaType;
@property (nonatomic) BOOL hasQuantizedScore;
@property (nonatomic) BOOL hasSecondsFromUnixEpoch;
@property (readonly, nonatomic) BOOL hasSourceBundleId;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) NSString *mediaId; // ivar: _mediaId
@property (nonatomic) int mediaType; // ivar: _mediaType
@property (nonatomic) CGFloat quantizedScore; // ivar: _quantizedScore
@property (nonatomic) CGFloat secondsFromUnixEpoch; // ivar: _secondsFromUnixEpoch
@property (retain, nonatomic) NSString *sourceBundleId; // ivar: _sourceBundleId
@property (nonatomic) int type; // ivar: _type


+(id)options;
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