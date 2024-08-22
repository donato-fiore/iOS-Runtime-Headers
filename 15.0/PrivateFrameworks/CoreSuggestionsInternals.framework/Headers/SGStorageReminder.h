// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGSTORAGEREMINDER_H
#define SGSTORAGEREMINDER_H

@class SGReminder, NSString;


#import "SGStorageLocation.h"
#import "SGDuplicateKey.h"

@interface SGStorageReminder : SGReminder

@property (readonly, nonatomic) SGStorageLocation *dueStorageLocation; // ivar: _dueStorageLocation
@property (readonly, nonatomic) SGDuplicateKey *duplicateKey; // ivar: _duplicateKey
@property (readonly, nonatomic) NSString *sourceKey; // ivar: _sourceKey


+(id)storageReminderFromDuplicateKey:(id)arg0 store:(id)arg1 ;
+(id)storageReminderFromEntity:(id)arg0 origin:(id)arg1 ;
+(id)storageReminderFromEntity:(id)arg0 store:(id)arg1 ;
+(id)storageReminderFromRecordId:(id)arg0 store:(id)arg1 ;
+(id)storageReminderWithPrimaryKey:(NSInteger)arg0 store:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToStorageReminder:(id)arg0 ;
-(NSInteger)commitWithStore:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithRecordId:(id)arg0 duplicateKey:(id)arg1 sourceKey:(id)arg2 origin:(id)arg3 dueDate:(id)arg4 dueLocationType:(unsigned char)arg5 dueLocation:(id)arg6 dueLocationTrigger:(unsigned char)arg7 title:(id)arg8 reminderStatus:(unsigned char)arg9 contactIdentifier:(id)arg10 creationDate:(id)arg11 ;
-(id)loggingIdentifier;
-(id)toReminder;


@end


#endif