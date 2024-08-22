// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSANALYTICSSAFARIVERSIONINGEVENT_H
#define WBSANALYTICSSAFARIVERSIONINGEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface WBSAnalyticsSafariVersioningEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasVariant;
@property (readonly, nonatomic) BOOL hasVersion;
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) int variant; // ivar: _variant
@property (copy, nonatomic) NSString *version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)variantAsString:(int)arg0 ;
-(int)StringAsVariant:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif