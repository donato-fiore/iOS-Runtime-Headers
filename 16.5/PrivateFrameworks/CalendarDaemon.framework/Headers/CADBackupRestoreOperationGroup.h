// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADBACKUPRESTOREOPERATIONGROUP_H
#define CADBACKUPRESTOREOPERATIONGROUP_H

@class NSString;
@protocol CADBackupRestoreInterface;


#import "CADOperationGroup.h"

@interface CADBackupRestoreOperationGroup : CADOperationGroup <CADBackupRestoreInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_performRestoreOperation:(id)arg0 ;
-(id)_accountStoreForBackupRestore;
-(void)CADBackupDatabaseToFileNamed:(id)arg0 inDirectory:(id)arg1 includeAttachments:(BOOL)arg2 reply:(id)arg3 ;
-(void)CADBackupToICBU:(id)arg0 reply:(id)arg1 ;
-(void)CADRestoreFromDatabaseBackupFileNamed:(id)arg0 inDirectory:(id)arg1 includeAttachments:(BOOL)arg2 reply:(id)arg3 ;
-(void)CADRestoreFromICBU:(id)arg0 reply:(id)arg1 ;


@end


#endif