// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMPBSIRIEXECUTIONEVENT_H
#define BMPBSIRIEXECUTIONEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface BMPBSiriExecutionEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasIntentName;
@property (readonly, nonatomic) BOOL hasSlotValue;
@property (readonly, nonatomic) BOOL hasStatusReason;
@property (readonly, nonatomic) BOOL hasTaskId;
@property (nonatomic) BOOL hasTaskStep;
@property (retain, nonatomic) NSString *intentName; // ivar: _intentName
@property (retain, nonatomic) NSString *slotValue; // ivar: _slotValue
@property (retain, nonatomic) NSString *statusReason; // ivar: _statusReason
@property (retain, nonatomic) NSString *taskId; // ivar: _taskId
@property (nonatomic) int taskStep; // ivar: _taskStep


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)taskStepAsString:(int)arg0 ;
-(int)StringAsTaskStep:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif