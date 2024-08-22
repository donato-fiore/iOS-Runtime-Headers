// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBCREATETASKLISTINTENT_H
#define _INPBCREATETASKLISTINTENT_H

@class PBCodable, NSString, NSArray;
@protocol _INPBCreateTaskListIntent, NSSecureCoding, NSCopying;


#import "_INPBDataString.h"
#import "_INPBIntentMetadata.h"

@interface _INPBCreateTaskListIntent : PBCodable <_INPBCreateTaskListIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBDataString *groupName; // ivar: _groupName
@property (readonly, nonatomic) BOOL hasGroupName;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *taskTitles; // ivar: _taskTitles
@property (readonly, nonatomic) NSUInteger taskTitlesCount;
@property (retain, nonatomic) _INPBDataString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)taskTitlesAtIndex:(NSUInteger)arg0 ;
-(void)addTaskTitles:(id)arg0 ;
-(void)clearTaskTitles;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif