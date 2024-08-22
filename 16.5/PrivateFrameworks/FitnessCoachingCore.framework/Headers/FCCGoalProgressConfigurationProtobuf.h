// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCGOALPROGRESSCONFIGURATIONPROTOBUF_H
#define FCCGOALPROGRESSCONFIGURATIONPROTOBUF_H

@class PBCodable;
@protocol NSCopying;


#import "FCCAlmostThereConfigurationProtobuf.h"
#import "FCCAtypicalDayConfigurationProtobuf.h"
#import "FCCCompletionOffTrackConfigurationProtobuf.h"

@interface FCCGoalProgressConfigurationProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) FCCAlmostThereConfigurationProtobuf *almostThereConfiguration; // ivar: _almostThereConfiguration
@property (retain, nonatomic) FCCAtypicalDayConfigurationProtobuf *atypicalDayConfiguration; // ivar: _atypicalDayConfiguration
@property (retain, nonatomic) FCCCompletionOffTrackConfigurationProtobuf *completionOffTrackConfiguration; // ivar: _completionOffTrackConfiguration
@property (nonatomic) CGFloat expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic) BOOL hasAlmostThereConfiguration;
@property (readonly, nonatomic) BOOL hasAtypicalDayConfiguration;
@property (readonly, nonatomic) BOOL hasCompletionOffTrackConfiguration;
@property (nonatomic) BOOL hasExpirationDate;
@property (nonatomic) BOOL hasMinimumNumberOfActiveDays;
@property (nonatomic) BOOL hasUserEndOfDayDate;
@property (nonatomic) BOOL hasUserStartOfDayDate;
@property (nonatomic) int minimumNumberOfActiveDays; // ivar: _minimumNumberOfActiveDays
@property (nonatomic) CGFloat userEndOfDayDate; // ivar: _userEndOfDayDate
@property (nonatomic) CGFloat userStartOfDayDate; // ivar: _userStartOfDayDate


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