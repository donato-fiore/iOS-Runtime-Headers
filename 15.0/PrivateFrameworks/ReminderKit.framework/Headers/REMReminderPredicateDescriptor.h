// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMREMINDERPREDICATEDESCRIPTOR_H
#define REMREMINDERPREDICATEDESCRIPTOR_H

@class NSArray, NSDate, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "REMObjectID.h"

@interface REMReminderPredicateDescriptor : NSObject <NSSecureCoding>



@property (nonatomic) BOOL completed; // ivar: _completed
@property (retain, nonatomic) NSArray *descriptors; // ivar: _descriptors
@property (retain, nonatomic) NSDate *endingDueDate; // ivar: _endingDueDate
@property (retain, nonatomic) REMObjectID *listID; // ivar: _listID
@property (retain, nonatomic) NSArray *objectIDs; // ivar: _objectIDs
@property (retain, nonatomic) REMObjectID *parentReminderID; // ivar: _parentReminderID
@property (retain, nonatomic) NSDate *startingDueDate; // ivar: _startingDueDate
@property (retain, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) NSInteger textMatching; // ivar: _textMatching
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)andPredicateDescriptorWithDescriptors:(id)arg0 ;
+(id)orPredicateDescriptorWithDescriptors:(id)arg0 ;
+(id)predicateDescriptorForRemindersWithCompleted:(BOOL)arg0 ;
+(id)predicateDescriptorForRemindersWithDueDateBetween:(id)arg0 and:(id)arg1 ;
+(id)predicateDescriptorForRemindersWithDueDateOnOrAfter:(id)arg0 ;
+(id)predicateDescriptorForRemindersWithDueDateOnOrBefore:(id)arg0 ;
+(id)predicateDescriptorForRemindersWithListID:(id)arg0 ;
+(id)predicateDescriptorForRemindersWithObjectIDs:(id)arg0 ;
+(id)predicateDescriptorForRemindersWithParentReminderID:(id)arg0 ;
+(id)predicateDescriptorForRemindersWithTitleBeginsWith:(id)arg0 ;
+(id)predicateDescriptorForRemindersWithTitleContains:(id)arg0 ;
+(id)predicateDescriptorForRemindersWithTitleEndsWith:(id)arg0 ;
+(id)predicateDescriptorForRemindersWithTitleEquals:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithReminderPredicateDescriptor:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif