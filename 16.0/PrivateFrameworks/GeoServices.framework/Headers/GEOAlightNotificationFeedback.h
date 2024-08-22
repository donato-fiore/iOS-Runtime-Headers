// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOALIGHTNOTIFICATIONFEEDBACK_H
#define GEOALIGHTNOTIFICATIONFEEDBACK_H

@class PBCodable;
@protocol NSCopying;



@interface GEOAlightNotificationFeedback : PBCodable <NSCopying>

 {
    NSUInteger _alightStopMuid;
    CGFloat _arrivedAtTimestamp;
    CGFloat _lastDetectedLocationHorizontalAccuracy;
    CGFloat _lastDetectedLocationTimestamp;
    NSUInteger _lineMuid;
    NSUInteger _previousStopMuid;
    CGFloat _triggeredTimestamp;
    int _lastDetectedLocationTraversalPercent;
    unsigned int _stepID;
    int _triggeredLocationTraversalPercent;
    int _trigger;
    BOOL _arrivalDetected;
    BOOL _displayed;
    BOOL _triggered;
    ? _flags;
}


@property (nonatomic) NSUInteger alightStopMuid;
@property (nonatomic) BOOL arrivalDetected;
@property (nonatomic) CGFloat arrivedAtTimestamp;
@property (nonatomic) BOOL displayed;
@property (nonatomic) BOOL hasAlightStopMuid;
@property (nonatomic) BOOL hasArrivalDetected;
@property (nonatomic) BOOL hasArrivedAtTimestamp;
@property (nonatomic) BOOL hasDisplayed;
@property (nonatomic) BOOL hasLastDetectedLocationHorizontalAccuracy;
@property (nonatomic) BOOL hasLastDetectedLocationTimestamp;
@property (nonatomic) BOOL hasLastDetectedLocationTraversalPercent;
@property (nonatomic) BOOL hasLineMuid;
@property (nonatomic) BOOL hasPreviousStopMuid;
@property (nonatomic) BOOL hasStepID;
@property (nonatomic) BOOL hasTrigger;
@property (nonatomic) BOOL hasTriggered;
@property (nonatomic) BOOL hasTriggeredLocationTraversalPercent;
@property (nonatomic) BOOL hasTriggeredTimestamp;
@property (nonatomic) CGFloat lastDetectedLocationHorizontalAccuracy;
@property (nonatomic) CGFloat lastDetectedLocationTimestamp;
@property (nonatomic) int lastDetectedLocationTraversalPercent;
@property (nonatomic) NSUInteger lineMuid;
@property (nonatomic) NSUInteger previousStopMuid;
@property (nonatomic) unsigned int stepID;
@property (nonatomic) int trigger;
@property (nonatomic) BOOL triggered;
@property (nonatomic) int triggeredLocationTraversalPercent;
@property (nonatomic) CGFloat triggeredTimestamp;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)triggerAsString:(int)arg0 ;
-(int)StringAsTrigger:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif