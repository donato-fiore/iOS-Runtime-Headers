// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXMPBAPPCLIPSUPPRESSIONTRACKER_H
#define ATXMPBAPPCLIPSUPPRESSIONTRACKER_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATXMPBAppClipSuppressionTracker : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) BOOL hasBundleId;
@property (nonatomic) BOOL hasSuppressionType;
@property (readonly, nonatomic) BOOL hasUrlHash;
@property (nonatomic) int suppressionType; // ivar: _suppressionType
@property (retain, nonatomic) NSString *urlHash; // ivar: _urlHash


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)suppressionTypeAsString:(int)arg0 ;
-(int)StringAsSuppressionType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif