// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXNOTIFICATIONSPBCONTEXT_H
#define ATXNOTIFICATIONSPBCONTEXT_H

@class PBCodable;
@protocol NSCopying;


#import "ATXNotificationsPBContentFeatures.h"

@interface ATXNotificationsPBContext : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) float appLaunchPopularity; // ivar: _appLaunchPopularity
@property (nonatomic) float cleared; // ivar: _cleared
@property (retain, nonatomic) ATXNotificationsPBContentFeatures *contentFeatures; // ivar: _contentFeatures
@property (nonatomic) float defaction; // ivar: _defaction
@property (nonatomic) float engaged; // ivar: _engaged
@property (nonatomic) BOOL hasAppLaunchPopularity;
@property (nonatomic) BOOL hasCleared;
@property (readonly, nonatomic) BOOL hasContentFeatures;
@property (nonatomic) BOOL hasDefaction;
@property (nonatomic) BOOL hasEngaged;
@property (nonatomic) BOOL hasIgnored;
@property (nonatomic) BOOL hasIsStationary;
@property (nonatomic) BOOL hasLocation;
@property (nonatomic) BOOL hasMotionAtRecieve;
@property (nonatomic) BOOL hasOrb;
@property (nonatomic) BOOL hasReceived;
@property (nonatomic) BOOL hasSuppaction;
@property (nonatomic) BOOL hasTapcoa;
@property (nonatomic) BOOL hasTotalLaunches;
@property (nonatomic) BOOL hasVisits;
@property (nonatomic) float ignored; // ivar: _ignored
@property (nonatomic) BOOL isStationary; // ivar: _isStationary
@property (nonatomic) int location; // ivar: _location
@property (nonatomic) int motionAtRecieve; // ivar: _motionAtRecieve
@property (nonatomic) float orb; // ivar: _orb
@property (nonatomic) float received; // ivar: _received
@property (nonatomic) float suppaction; // ivar: _suppaction
@property (nonatomic) float tapcoa; // ivar: _tapcoa
@property (nonatomic) float totalLaunches; // ivar: _totalLaunches
@property (nonatomic) int visits; // ivar: _visits


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)locationAsString:(int)arg0 ;
-(id)motionAtRecieveAsString:(int)arg0 ;
-(int)StringAsLocation:(id)arg0 ;
-(int)StringAsMotionAtRecieve:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif