// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBANALYTICSENVELOPECONTENTTYPECONFIG_H
#define NTPBANALYTICSENVELOPECONTENTTYPECONFIG_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBAnalyticsEnvelopeContentTypeConfig : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *contentHeaderName; // ivar: _contentHeaderName
@property (retain, nonatomic) NSString *contentHeaderValue; // ivar: _contentHeaderValue
@property (retain, nonatomic) NSString *endpointURLString; // ivar: _endpointURLString
@property (nonatomic) NSUInteger groupingTag; // ivar: _groupingTag
@property (readonly, nonatomic) BOOL hasContentHeaderName;
@property (readonly, nonatomic) BOOL hasContentHeaderValue;
@property (readonly, nonatomic) BOOL hasEndpointURLString;
@property (nonatomic) BOOL hasGroupingTag;
@property (nonatomic) BOOL hasSamplingCeiling;
@property (nonatomic) BOOL hasSamplingFloor;
@property (nonatomic) BOOL hasSeedTime;
@property (nonatomic) unsigned int samplingCeiling; // ivar: _samplingCeiling
@property (nonatomic) unsigned int samplingFloor; // ivar: _samplingFloor
@property (nonatomic) NSUInteger seedTime; // ivar: _seedTime


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