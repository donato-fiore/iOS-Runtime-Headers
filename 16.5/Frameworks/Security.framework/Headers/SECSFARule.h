// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SECSFARULE_H
#define SECSFARULE_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;


#import "SECSFAAction.h"

@interface SECSFARule : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) SECSFAAction *action; // ivar: _action
@property (retain, nonatomic) NSString *eventType; // ivar: _eventType
@property (readonly, nonatomic) BOOL hasAction;
@property (readonly, nonatomic) BOOL hasEventType;
@property (readonly, nonatomic) BOOL hasMatch;
@property (readonly, nonatomic) BOOL hasProcess;
@property (nonatomic) BOOL hasRepeatAfterSeconds;
@property (retain, nonatomic) NSData *match; // ivar: _match
@property (retain, nonatomic) NSString *process; // ivar: _process
@property (nonatomic) NSInteger repeatAfterSeconds; // ivar: _repeatAfterSeconds


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