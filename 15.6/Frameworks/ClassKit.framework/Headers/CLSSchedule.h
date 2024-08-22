// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSSCHEDULE_H
#define CLSSCHEDULE_H

@class NSDate, NSString;
@protocol CLSRelationable;


#import "CLSObject.h"

@interface CLSSchedule : CLSObject <CLSRelationable>

 {
    NSInteger _scheduledEntityType;
    NSInteger _scheduleAction;
    NSDate *_scheduleDate;
    NSInteger _scheduleUpdateStatus;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger scheduleAction;
@property (retain, nonatomic) NSDate *scheduleDate;
@property (nonatomic) NSInteger scheduleUpdateStatus;
@property (nonatomic) NSInteger scheduledEntityType;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)relations;
-(BOOL)isEqual:(id)arg0 ;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initForObject:(id)arg0 scheduleDate:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWithObject:(id)arg0 ;


@end


#endif