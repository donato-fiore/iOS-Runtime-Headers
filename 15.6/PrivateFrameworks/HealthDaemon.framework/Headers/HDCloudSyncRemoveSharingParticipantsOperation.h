// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCLOUDSYNCREMOVESHARINGPARTICIPANTSOPERATION_H
#define HDCLOUDSYNCREMOVESHARINGPARTICIPANTSOPERATION_H

@class NSSet, NSString;
@protocol HDSynchronousTaskGroupDelegate;


#import "HDCloudSyncOperation.h"
#import "HDSynchronousTaskGroup.h"

@interface HDCloudSyncRemoveSharingParticipantsOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate>

 {
    NSSet *_participantsToRemove;
    HDSynchronousTaskGroup *_taskGroup;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 participantsToRemove:(id)arg2 ;
-(void)main;
-(void)synchronousTaskGroup:(id)arg0 didFinishWithSuccess:(BOOL)arg1 errors:(id)arg2 ;


@end


#endif