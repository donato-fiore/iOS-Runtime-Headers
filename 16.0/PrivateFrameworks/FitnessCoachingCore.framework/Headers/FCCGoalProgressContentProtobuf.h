// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCGOALPROGRESSCONTENTPROTOBUF_H
#define FCCGOALPROGRESSCONTENTPROTOBUF_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface FCCGoalProgressContentProtobuf : PBCodable <NSCopying>

 {
    ? _goalTypesToDisplays;
    ? _has;
}


@property (retain, nonatomic) NSString *eventIdentifier; // ivar: _eventIdentifier
@property (nonatomic) CGFloat expectedGoalValue; // ivar: _expectedGoalValue
@property (nonatomic) int goalTypeToHighlight; // ivar: _goalTypeToHighlight
@property (readonly, nonatomic) *int goalTypesToDisplays;
@property (readonly, nonatomic) NSUInteger goalTypesToDisplaysCount;
@property (readonly, nonatomic) BOOL hasEventIdentifier;
@property (nonatomic) BOOL hasExpectedGoalValue;
@property (nonatomic) BOOL hasGoalTypeToHighlight;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)goalTypesToDisplayAtIndex:(NSUInteger)arg0 ;
-(void)addGoalTypesToDisplay:(int)arg0 ;
-(void)clearGoalTypesToDisplays;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif