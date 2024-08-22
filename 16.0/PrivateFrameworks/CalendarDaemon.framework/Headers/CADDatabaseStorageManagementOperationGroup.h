// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
-(?)sizeAttachmentsForDatabase;
-(?)sizeCalendarDirectoryForDatabase;
-(BOOL)accessGranted;
-(BOOL)storageManagementAccessGranted;
-(NSUInteger)sizeDirectoryAtPath:(id)arg0 excludingDirectory:(id)arg1 ;
-(void)CADDatabaseGetStorageUsage:(id)arg0 ;


@end


#endif