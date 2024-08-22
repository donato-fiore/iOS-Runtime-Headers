// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCGOALCOMPLETIONPROTOBUF_H
#define FCCGOALCOMPLETIONPROTOBUF_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface FCCGoalCompletionProtobuf : PBCodable <NSCopying>

 {
    ? _completedGoalTypes;
    ? _has;
}


@property (nonatomic) NSInteger activitySummaryIndex; // ivar: _activitySummaryIndex
@property (readonly, nonatomic) *int completedGoalTypes;
@property (readonly, nonatomic) NSUInteger completedGoalTypesCount;
@property (nonatomic) BOOL hasActivitySummaryIndex;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)completedGoalTypesAtIndex:(NSUInteger)arg0 ;
-(void)addCompletedGoalTypes:(int)arg0 ;
-(void)clearCompletedGoalTypes;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif