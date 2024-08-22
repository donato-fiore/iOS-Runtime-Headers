// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBDELETETASKSINTENTRESPONSE_H
#define _INPBDELETETASKSINTENTRESPONSE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBDeleteTasksIntentResponse, NSSecureCoding, NSCopying;



@interface _INPBDeleteTasksIntentResponse : PBCodable <_INPBDeleteTasksIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *deletedTasks; // ivar: _deletedTasks
@property (readonly, nonatomic) NSUInteger deletedTasksCount;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deletedTasksAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)addDeletedTasks:(id)arg0 ;
-(void)clearDeletedTasks;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif