// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CADDATABASESTORAGEMANAGEMENTOPERATIONGROUP_H
#define CADDATABASESTORAGEMANAGEMENTOPERATIONGROUP_H

@class NSString;
@protocol CADDatabaseStorageManagementInterface;


#import "CADOperationGroup.h"

@interface CADDatabaseStorageManagementOperationGroup : CADOperationGroup <CADDatabaseStorageManagementInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)requiresEventAccess;
+(BOOL)requiresEventOrReminderAccess;
+(BOOL)requiresReminderAccess;
-(BOOL)accessGrantedToPerformSelector:(SEL)arg0 ;
-(BOOL)storageManagementAccessGranted;
-(NSUInteger)sizeAttachments;
-(NSUInteger)sizeCalendarDirectory;
-(NSUInteger)sizeDirectoryAtPath:(id)arg0 ;
-(void)CADDatabaseGetStorageUsage:(id)arg0 ;


@end


#endif