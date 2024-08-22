// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKFORMRESPONSE_H
#define FBKFORMRESPONSE_H

@class NSSet, NSString, NSDate, NSNumber, NSArray;
@protocol FBKFilerForm;


#import "FBKManagedFeedbackObject.h"
#import "FBKBugForm.h"
#import "FBKContentItem.h"
#import "FBKFeedback.h"
#import "FBKAnswer.h"
#import "FBKUploadTask.h"

@interface FBKFormResponse : FBKManagedFeedbackObject <FBKFilerForm>



@property (retain) NSSet *answers;
@property (retain) FBKBugForm *bugForm;
@property (retain) NSString *buildString;
@property (getter=isCompleted) BOOL completed;
@property (retain) FBKContentItem *contentItem;
@property (retain) NSDate *createdAt;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSSet *draftDevices;
@property (retain) NSNumber *extractedFollowupCount;
@property (retain) NSString *extractedIssueType;
@property (retain) NSString *extractedProblemDescription;
@property (retain) NSString *extractedTitle;
@property (retain) FBKFeedback *feedback;
@property (retain) NSNumber *feedbackID;
@property (retain) NSSet *filePromises;
@property (nonatomic) NSInteger filerFormType; // ivar: _filerFormType
@property (readonly) NSNumber *followupCount;
@property (retain, nonatomic) NSNumber *formID;
@property (readonly) NSUInteger hash;
@property BOOL isStub;
@property (readonly) NSString *issueType;
@property (readonly) FBKAnswer *issueTypeAnswer;
@property (retain) NSArray *issueTypeAnswers;
@property (retain) NSString *largeFilePrefix;
@property (readonly) NSString *platform;
@property (retain) NSNumber *primitiveCompleted;
@property (readonly) NSString *problemDescription;
@property (readonly) FBKAnswer *problemDescriptionAnswer;
@property (retain) NSArray *problemDescriptionAnswers;
@property BOOL remote;
@property BOOL serverSideIsComplete;
@property (readonly) Class superclass;
@property (readonly) NSString *title;
@property (readonly) FBKAnswer *titleAnswer;
@property (retain) NSArray *titleAnswers;
@property (retain) NSDate *updatedAt;
@property (retain) FBKUploadTask *uploadTask;


+(id)entityName;
+(id)keyPathsForValuesAffectingFollowupCount;
+(id)keyPathsForValuesAffectingIssueType;
+(id)keyPathsForValuesAffectingIssueTypeAnswer;
+(id)keyPathsForValuesAffectingProblemDescription;
+(id)keyPathsForValuesAffectingProblemDescriptionAnswer;
+(id)keyPathsForValuesAffectingTitle;
+(id)keyPathsForValuesAffectingTitleAnswer;
-(BOOL)collectsFiles;
-(BOOL)evaluateConditional:(id)arg0 ;
-(BOOL)isAnswerExpectedForQuestion:(id)arg0 ;
-(BOOL)isServerSideComplete;
-(BOOL)needsRefresh;
-(id)answerForQuestion:(id)arg0 ;
-(id)answerForQuestionID:(id)arg0 ;
-(id)fileMatchers;
-(id)filerFormID;
-(id)findAnswerForRole:(id)arg0 ;
-(id)formPlatform;
-(id)matcherPredicates;
-(id)promises;
-(id)valueForQuestionID:(id)arg0 ;
-(id)valuesForQuestionID:(id)arg0 ;
-(void)prepareForDeletion;
-(void)setPropertiesFromJSONObject:(id)arg0 ;
-(void)setValue:(id)arg0 forQuestionID:(id)arg1 ;
-(void)updateExtractedValuesFromAnswers;


@end


#endif