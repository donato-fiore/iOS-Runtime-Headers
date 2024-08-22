// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWDPROACTIVEAPPPREDICTIONACTIONTIMEESTIMATECONTAINER_H
#define AWDPROACTIVEAPPPREDICTIONACTIONTIMEESTIMATECONTAINER_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface AWDProactiveAppPredictionActionTimeEstimateContainer : PBCodable <NSCopying>

 {
    ? _launchReasons;
    ? _sessionIndexs;
    ? _sessionLengths;
    ? _timeEstimates;
    ? _has;
}


@property (retain, nonatomic) NSString *actionKey; // ivar: _actionKey
@property (nonatomic) int actionType; // ivar: _actionType
@property (nonatomic) BOOL hasActionType;
@property (nonatomic) BOOL hasNoMatchCount;
@property (readonly, nonatomic) *int launchReasons;
@property (readonly, nonatomic) NSUInteger launchReasonsCount;
@property (nonatomic) int noMatchCount; // ivar: _noMatchCount
@property (retain, nonatomic) NSMutableArray *parameters; // ivar: _parameters
@property (readonly, nonatomic) *int sessionIndexs;
@property (readonly, nonatomic) NSUInteger sessionIndexsCount;
@property (readonly, nonatomic) *int sessionLengths;
@property (readonly, nonatomic) NSUInteger sessionLengthsCount;
@property (readonly, nonatomic) *int timeEstimates;
@property (readonly, nonatomic) NSUInteger timeEstimatesCount;


+(Class)parameterType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)actionTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)launchReasonsAsString:(int)arg0 ;
-(id)parameterAtIndex:(NSUInteger)arg0 ;
-(int)StringAsActionType:(id)arg0 ;
-(int)StringAsLaunchReasons:(id)arg0 ;
-(int)launchReasonAtIndex:(NSUInteger)arg0 ;
-(int)sessionIndexAtIndex:(NSUInteger)arg0 ;
-(int)sessionLengthAtIndex:(NSUInteger)arg0 ;
-(int)timeEstimateAtIndex:(NSUInteger)arg0 ;
-(void)addLaunchReason:(int)arg0 ;
-(void)addParameter:(id)arg0 ;
-(void)addSessionIndex:(int)arg0 ;
-(void)addSessionLength:(int)arg0 ;
-(void)addTimeEstimate:(int)arg0 ;
-(void)clearLaunchReasons;
-(void)clearParameters;
-(void)clearSessionIndexs;
-(void)clearSessionLengths;
-(void)clearTimeEstimates;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif