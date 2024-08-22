// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOLOGMSGEVENTSTATETIMING_H
#define GEOLOGMSGEVENTSTATETIMING_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface GEOLogMsgEventStateTiming : PBCodable <NSCopying>

 {
    CGFloat _durationInOldState;
    NSMutableArray *_stateTransitionFeedbacks;
    ? _flags;
}


@property (nonatomic) CGFloat durationInOldState;
@property (nonatomic) BOOL hasDurationInOldState;
@property (retain, nonatomic) NSMutableArray *stateTransitionFeedbacks;


+(BOOL)isValid:(id)arg0 ;
+(Class)stateTransitionFeedbackType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)stateTransitionFeedbackAtIndex:(NSUInteger)arg0 ;
-(void)addStateTransitionFeedback:(id)arg0 ;
-(void)clearStateTransitionFeedbacks;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif