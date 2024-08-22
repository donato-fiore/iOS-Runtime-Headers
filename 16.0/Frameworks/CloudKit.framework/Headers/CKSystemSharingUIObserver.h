// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKSYSTEMSHARINGUIOBSERVER_H
#define CKSYSTEMSHARINGUIOBSERVER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CKContainer.h"

@interface CKSystemSharingUIObserver : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (retain, nonatomic) CKContainer *container; // ivar: _container
@property (copy) id *systemSharingUIDidSaveShareBlock; // ivar: _systemSharingUIDidSaveShareBlock
@property (copy) id *systemSharingUIDidStopSharingBlock; // ivar: _systemSharingUIDidStopSharingBlock


-(id)initWithContainer:(id)arg0 ;
-(void)_locked_handleSharingUIUpdatedShare:(id)arg0 recordID:(id)arg1 isDeleted:(BOOL)arg2 error:(id)arg3 ;
-(void)handleSharingUIUpdatedShare:(id)arg0 recordID:(id)arg1 isDeleted:(BOOL)arg2 error:(id)arg3 ;


@end


#endif