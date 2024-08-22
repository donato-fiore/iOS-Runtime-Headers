// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDCLOUDMIRRORINGPERSISTENTSTORE_H
#define EDCLOUDMIRRORINGPERSISTENTSTORE_H

@class NSString, NSManagedObjectContext, NSPersistentContainer;
@protocol EFLoggable;

#import <Foundation/Foundation.h>

#import "EDTaskScheduler.h"

@interface EDCloudMirroringPersistentStore : NSObject <EFLoggable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) EDTaskScheduler *exportScheduler; // ivar: _exportScheduler
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) EDTaskScheduler *importScheduler; // ivar: _importScheduler
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // ivar: _managedObjectContext
@property (readonly, nonatomic) NSPersistentContainer *persistentContainer; // ivar: _persistentContainer
@property (readonly) Class superclass;


+(id)log;
-(id)_schedulerForKind:(int)arg0 ;
-(id)_wrapCompletion:(SEL)arg0 forRequestKind:(id)arg1 ;
-(id)init;
-(void)_executeRequestWithKind:(int)arg0 completionBlock:(id)arg1 ;
-(void)_requestWithKind:(int)arg0 completionBlock:(id)arg1 ;
-(void)_setupCoreDataStack;
-(void)performBlock:(id)arg0 ;
-(void)performBlockAndWait:(id)arg0 ;
-(void)requestExportWithCompletionBlock:(id)arg0 ;
-(void)requestImportWithCompletionBlock:(id)arg0 ;


@end


#endif