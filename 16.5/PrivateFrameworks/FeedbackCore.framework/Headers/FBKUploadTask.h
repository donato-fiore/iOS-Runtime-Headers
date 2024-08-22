// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKUPLOADTASK_H
#define FBKUPLOADTASK_H

@class NSManagedObject, NSSet, NSNumber, NSURL, NSError;


#import "FBKFeedbackFollowup.h"
#import "FBKFormResponse.h"

@interface FBKUploadTask : NSManagedObject

@property (retain) NSSet *bugSessions;
@property (retain) NSNumber *bytesToUpload;
@property (retain) NSNumber *bytesUploaded;
@property (retain) FBKFeedbackFollowup *feedbackFollowup;
@property (retain) NSURL *fileURL;
@property (retain) FBKFormResponse *formResponse;
@property (retain) NSError *lastError;
@property NSUInteger localSubmissionStage;
@property (retain) NSNumber *primitiveLocalSubmissionStage;
@property (retain) NSNumber *primitiveTaskState;
@property (retain) NSNumber *taskIdentifier;
@property NSInteger taskState;


+(id)entityName;
-(BOOL)allSessionsHaveReportedState;
-(BOOL)allSessionsHaveReportedUploadSize;
-(BOOL)allSessionsHaveState:(NSInteger)arg0 ;
-(BOOL)isBugSessionBacked;
-(NSUInteger)newSubmissionStageAfterBugSessionUpdate;
-(id)filerForm;
-(id)formID;
-(void)addFBKSessionsWithDEDSessions:(id)arg0 ;
-(void)updateBytesToUploadAndUploadedAfterBugSessionUpdate;


@end


#endif