// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMPBREMINDERSCONTENTEVENT_H
#define BMPBREMINDERSCONTENTEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface BMPBRemindersContentEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (nonatomic) CGFloat completionDateTimestamp; // ivar: _completionDateTimestamp
@property (retain, nonatomic) NSString *contentProtection; // ivar: _contentProtection
@property (retain, nonatomic) NSString *domainId; // ivar: _domainId
@property (nonatomic) CGFloat dueDateTimestamp; // ivar: _dueDateTimestamp
@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (nonatomic) BOOL hasCompletionDateTimestamp;
@property (readonly, nonatomic) BOOL hasContentProtection;
@property (readonly, nonatomic) BOOL hasDomainId;
@property (nonatomic) BOOL hasDueDateTimestamp;
@property (nonatomic) BOOL hasIsAllDay;
@property (readonly, nonatomic) BOOL hasNotes;
@property (nonatomic) BOOL hasPriority;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly, nonatomic) BOOL hasUniqueId;
@property (nonatomic) BOOL isAllDay; // ivar: _isAllDay
@property (retain, nonatomic) NSString *notes; // ivar: _notes
@property (nonatomic) int priority; // ivar: _priority
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSString *uniqueId; // ivar: _uniqueId


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