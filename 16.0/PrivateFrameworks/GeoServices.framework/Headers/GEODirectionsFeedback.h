// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEODIRECTIONSFEEDBACK_H
#define GEODIRECTIONSFEEDBACK_H

@class PBCodable, PBDataReader, NSMutableArray, NSData;
@protocol NSCopying;



@interface GEODirectionsFeedback : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSMutableArray *_alightNotificationFeedbacks;
    NSData *_directionResponseID;
    NSMutableArray *_guidanceFeedbacks;
    NSMutableArray *_modalitys;
    NSMutableArray *_stepFeedbacks;
    NSMutableArray *_trafficRerouteFeedbacks;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    BOOL _isCarplayConnected;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *alightNotificationFeedbacks;
@property (retain, nonatomic) NSData *directionResponseID;
@property (retain, nonatomic) NSMutableArray *guidanceFeedbacks;
@property (readonly, nonatomic) BOOL hasDirectionResponseID;
@property (nonatomic) BOOL hasIsCarplayConnected;
@property (nonatomic) BOOL isCarplayConnected;
@property (retain, nonatomic) NSMutableArray *modalitys;
@property (retain, nonatomic) NSMutableArray *stepFeedbacks;
@property (retain, nonatomic) NSMutableArray *trafficRerouteFeedbacks;


+(BOOL)isValid:(id)arg0 ;
+(Class)alightNotificationFeedbackType;
+(Class)guidanceFeedbackType;
+(Class)modalityType;
+(Class)stepFeedbackType;
+(Class)trafficRerouteFeedbackType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)alightNotificationFeedbackAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)guidanceFeedbackAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)modalityAtIndex:(NSUInteger)arg0 ;
-(id)stepFeedbackAtIndex:(NSUInteger)arg0 ;
-(id)trafficRerouteFeedbackAtIndex:(NSUInteger)arg0 ;
-(void)addAlightNotificationFeedback:(id)arg0 ;
-(void)addGuidanceFeedback:(id)arg0 ;
-(void)addModality:(id)arg0 ;
-(void)addStepFeedback:(id)arg0 ;
-(void)addTrafficRerouteFeedback:(id)arg0 ;
-(void)clearAlightNotificationFeedbacks;
-(void)clearGuidanceFeedbacks;
-(void)clearModalitys;
-(void)clearStepFeedbacks;
-(void)clearTrafficRerouteFeedbacks;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif