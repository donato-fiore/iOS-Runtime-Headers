// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCLOUDSYNCREMOVEINVALIDSHAREPARTICIPANTSOPERATION_H
#define HDCLOUDSYNCREMOVEINVALIDSHAREPARTICIPANTSOPERATION_H

@class NSString, NSArray;
@protocol HDSynchronousTaskGroupDelegate;


#import "HDCloudSyncOperation.h"
#import "HDSynchronousTaskGroup.h"

@interface HDCloudSyncRemoveInvalidShareParticipantsOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate>

 {
    HDSynchronousTaskGroup *_taskGroup;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *participantsToCheck; // ivar: _participantsToCheck
@property (nonatomic) NSInteger requiredPermission; // ivar: _requiredPermission
@property (readonly) Class superclass;


-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;
-(void)main;
-(void)synchronousTaskGroup:(id)arg0 didFinishWithSuccess:(BOOL)arg1 errors:(id)arg2 ;


@end


#endif