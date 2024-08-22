// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMMANUALORDERING_H
#define REMMANUALORDERING_H

@class NSString, NSDate, NSDictionary, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "REMObjectID.h"

@interface REMManualOrdering : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *listID; // ivar: _listID
@property (retain, nonatomic) NSDate *modifiedDate; // ivar: _modifiedDate
@property (retain, nonatomic) REMObjectID *objectID; // ivar: _objectID
@property (retain, nonatomic) NSDictionary *subtaskIDsByTopLevelReminderID; // ivar: _subtaskIDsByTopLevelReminderID
@property (retain, nonatomic) NSArray *topLevelReminderIDs; // ivar: _topLevelReminderIDs
@property (retain, nonatomic) REMObjectID *uncommitedRemindersAccountID; // ivar: _uncommitedRemindersAccountID


+(BOOL)supportsSecureCoding;
+(id)cdEntityName;
+(id)newObjectID;
+(id)objectIDWithUUID:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)changedKeys;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjectID:(id)arg0 listID:(id)arg1 ;
-(id)initWithObjectID:(id)arg0 listID:(id)arg1 topLevelReminderIDs:(id)arg2 subtaskIDsByTopLevelReminderID:(id)arg3 uncommitedRemindersAccountID:(id)arg4 modifiedDate:(id)arg5 ;
-(id)remObjectID;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif