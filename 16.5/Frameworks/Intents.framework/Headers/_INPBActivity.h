// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBACTIVITY_H
#define _INPBACTIVITY_H

@class PBCodable, NSArray, NSString;
@protocol _INPBActivity, NSSecureCoding, NSCopying;


#import "_INPBString.h"

@interface _INPBActivity : PBCodable <_INPBActivity, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSArray *activityDescriptors; // ivar: _activityDescriptors
@property (readonly, nonatomic) NSUInteger activityDescriptorsCount;
@property (retain, nonatomic) _INPBString *activityType; // ivar: _activityType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasActivityType;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)activityDescriptorsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)addActivityDescriptors:(id)arg0 ;
-(void)clearActivityDescriptors;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif