// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDAWDHEALTHKITNOTIFICATIONVIEW_H
#define HDAWDHEALTHKITNOTIFICATIONVIEW_H

@class PBCodable;
@protocol NSCopying;



@interface HDAWDHealthKitNotificationView : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int dismissReason; // ivar: _dismissReason
@property (nonatomic) NSUInteger dwelltimeMs; // ivar: _dwelltimeMs
@property (nonatomic) NSInteger endDate; // ivar: _endDate
@property (nonatomic) BOOL hasDismissReason;
@property (nonatomic) BOOL hasDwelltimeMs;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) BOOL hasScrollBehavior;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) int scrollBehavior; // ivar: _scrollBehavior
@property (nonatomic) NSInteger startDate; // ivar: _startDate


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)dismissReasonAsString:(int)arg0 ;
-(id)scrollBehaviorAsString:(int)arg0 ;
-(int)StringAsDismissReason:(id)arg0 ;
-(int)StringAsScrollBehavior:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif