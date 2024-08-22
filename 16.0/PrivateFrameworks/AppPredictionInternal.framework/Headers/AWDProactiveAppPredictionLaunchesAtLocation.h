// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWDPROACTIVEAPPPREDICTIONLAUNCHESATLOCATION_H
#define AWDPROACTIVEAPPPREDICTIONLAUNCHESATLOCATION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface AWDProactiveAppPredictionLaunchesAtLocation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) BOOL hasBundleId;
@property (nonatomic) BOOL hasIsClip;
@property (nonatomic) BOOL hasIsNegativeSession;
@property (nonatomic) BOOL hasIsTourist;
@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) BOOL hasLaunchReason;
@property (nonatomic) BOOL hasLocationAccuracy;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) BOOL hasTimeBucket;
@property (nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) BOOL hasUrlHash;
@property (nonatomic) BOOL isClip; // ivar: _isClip
@property (nonatomic) BOOL isNegativeSession; // ivar: _isNegativeSession
@property (nonatomic) BOOL isTourist; // ivar: _isTourist
@property (nonatomic) float latitude; // ivar: _latitude
@property (nonatomic) int launchReason; // ivar: _launchReason
@property (nonatomic) unsigned int locationAccuracy; // ivar: _locationAccuracy
@property (nonatomic) float longitude; // ivar: _longitude
@property (nonatomic) unsigned int timeBucket; // ivar: _timeBucket
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSString *urlHash; // ivar: _urlHash


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)launchReasonAsString:(int)arg0 ;
-(int)StringAsLaunchReason:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif