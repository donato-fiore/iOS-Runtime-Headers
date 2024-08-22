// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOLOGMSGEVENTCOMMUTEWINDOW_H
#define GEOLOGMSGEVENTCOMMUTEWINDOW_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface GEOLogMsgEventCommuteWindow : PBCodable <NSCopying>

 {
    NSMutableArray *_predictedDestinations;
    CGFloat _startTime;
    unsigned int _duration;
    int _endReason;
    unsigned int _numberOfAlertingResponses;
    unsigned int _numberOfDoomRoutingRequests;
    unsigned int _predictedExitTime;
    ? _flags;
}


@property (nonatomic) unsigned int duration;
@property (nonatomic) int endReason;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasEndReason;
@property (nonatomic) BOOL hasNumberOfAlertingResponses;
@property (nonatomic) BOOL hasNumberOfDoomRoutingRequests;
@property (nonatomic) BOOL hasPredictedExitTime;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) unsigned int numberOfAlertingResponses;
@property (nonatomic) unsigned int numberOfDoomRoutingRequests;
@property (retain, nonatomic) NSMutableArray *predictedDestinations;
@property (nonatomic) unsigned int predictedExitTime;
@property (nonatomic) CGFloat startTime;


+(BOOL)isValid:(id)arg0 ;
+(Class)predictedDestinationType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)endReasonAsString:(int)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)predictedDestinationAtIndex:(NSUInteger)arg0 ;
-(int)StringAsEndReason:(id)arg0 ;
-(void)addPredictedDestination:(id)arg0 ;
-(void)clearPredictedDestinations;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif