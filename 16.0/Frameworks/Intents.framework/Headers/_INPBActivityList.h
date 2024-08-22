// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBACTIVITYLIST_H
#define _INPBACTIVITYLIST_H

@class PBCodable, NSArray, NSString;
@protocol _INPBActivityList, NSSecureCoding, NSCopying;


#import "_INPBCondition.h"

@interface _INPBActivityList : PBCodable <_INPBActivityList, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSArray *activities; // ivar: _activities
@property (readonly, nonatomic) NSUInteger activitiesCount;
@property (retain, nonatomic) _INPBCondition *condition; // ivar: _condition
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasCondition;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(Class)activityType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)activityAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)addActivity:(id)arg0 ;
-(void)clearActivities;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif