// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBHOMEUSERTASKRESPONSE_H
#define _INPBHOMEUSERTASKRESPONSE_H

@class PBCodable, NSString;
@protocol _INPBHomeUserTaskResponse, NSSecureCoding, NSCopying;


#import "_INPBHomeUserTask.h"

@interface _INPBHomeUserTaskResponse : PBCodable <_INPBHomeUserTaskResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasTaskOutcome;
@property (readonly, nonatomic) BOOL hasUserTask;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) int taskOutcome; // ivar: _taskOutcome
@property (retain, nonatomic) _INPBHomeUserTask *userTask; // ivar: _userTask


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)taskOutcomeAsString:(int)arg0 ;
-(int)StringAsTaskOutcome:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif