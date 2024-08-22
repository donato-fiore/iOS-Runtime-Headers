// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKDRAFTINGCONTROLLER_H
#define FBKDRAFTINGCONTROLLER_H

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableSet;
@protocol FBKDraftingDelegate;

#import <Foundation/Foundation.h>

#import "FBKData.h"
#import "FBKDraftModelSnapshot.h"
#import "FBKQuestionDependencyGraph.h"
#import "FBKDeviceDiagnosticsController.h"
#import "FBKFormResponse.h"
#import "FBKBugFormStub.h"
#import "FBKTeam.h"

@interface FBKDraftingController : NSObject

@property (weak, nonatomic) FBKData *FBKData; // ivar: _FBKData
@property (readonly, nonatomic) NSArray *allVisibleAnswers;
@property (retain, nonatomic) NSDictionary *cachedDiffableSections; // ivar: _cachedDiffableSections
@property (retain, nonatomic) NSArray *cachedVisibleGroups; // ivar: _cachedVisibleGroups
@property (retain, nonatomic) NSMutableDictionary *cachedVisibleQuestions; // ivar: _cachedVisibleQuestions
@property (retain, nonatomic) FBKDraftModelSnapshot *currentSnapshot; // ivar: _currentSnapshot
@property (weak, nonatomic) NSObject<FBKDraftingDelegate> *delegate; // ivar: _delegate
@property (retain) FBKQuestionDependencyGraph *dependencyGraph; // ivar: _dependencyGraph
@property (retain, nonatomic) FBKDeviceDiagnosticsController *diagnosticsController; // ivar: _diagnosticsController
@property (retain, nonatomic) FBKFormResponse *formResponse; // ivar: _formResponse
@property (retain, nonatomic) FBKBugFormStub *formStub; // ivar: _formStub
@property BOOL isDirty; // ivar: _isDirty
@property BOOL isLoading; // ivar: _isLoading
@property BOOL isSubmitting; // ivar: _isSubmitting
@property (retain, nonatomic) NSMutableSet *questionIDsInErrorState; // ivar: _questionIDsInErrorState
@property (nonatomic) BOOL spamDebugLogs; // ivar: _spamDebugLogs
@property (retain, nonatomic) FBKTeam *team; // ivar: _team
@property (readonly, nonatomic) NSArray *unansweredRequiredModalQuestions;


-(BOOL)answer:(id)arg0 isValidForQuestion:(id)arg1 ;
-(BOOL)isQuestionVisible:(id)arg0 ;
-(BOOL)updateQuestionVisibility;
-(BOOL)validate:(*id)arg0 ;
-(id)choiceSetResolverWithValue:(id)arg0 givenChoices:(id)arg1 ;
-(id)firstVisibleInvalidQuestion;
-(id)generateSnapshotIdentifiers:(BOOL)arg0 ;
-(id)identifierForVisibleQuestion:(id)arg0 hasAttemptedSubmission:(BOOL)arg1 ;
-(id)indexPathForQuestion:(id)arg0 ;
-(id)init;
-(id)initWithFBKData:(id)arg0 ;
-(id)invalidQuestionIDs;
-(id)newModelSnapshot;
-(id)questionGroupForSectionIdentifier:(id)arg0 ;
-(id)questionsForSectionIdentifier:(id)arg0 ;
-(id)visibleQuestionForIndexPath:(id)arg0 ;
-(id)visibleQuestionForSectionIdentifier:(id)arg0 itemIdentifier:(id)arg1 ;
-(id)visibleQuestionGroups;
-(id)visibleQuestionsForGroup:(id)arg0 ;
-(void)_initForFormResponse;
-(void)_loadNewResponseForBugForm:(id)arg0 orBugFormStub:(id)arg1 withTeam:(id)arg2 ;
-(void)_loadResponseWithFormResponse:(id)arg0 item:(id)arg1 ;
-(void)_resetInternalEntities;
-(void)attachAnswersToQuestionsWithGivenData:(id)arg0 ;
-(void)automaticallyFillInAllAnswers;
-(void)configure;
-(void)didChangeAnswerToQuestion:(id)arg0 ;
-(void)didMakeDeviceAttachmentChanges;
-(void)loadFormResponseFromContentItem:(id)arg0 ;
-(void)loadNewResponseForBugForm:(id)arg0 ;
-(void)loadNewResponseForBugForm:(id)arg0 withTeam:(id)arg1 ;
-(void)loadNewResponseForBugFormStub:(id)arg0 ;
-(void)loadNewResponseForBugFormStub:(id)arg0 withTeam:(id)arg1 ;
-(void)loadResponseForFeedbackObject:(id)arg0 ;
-(void)loadResponseForFeedbackObject:(id)arg0 withTeam:(id)arg1 ;
-(void)preemptivelyRemoveQuestionFromErrorStateWithQuestion:(id)arg0 ;
-(void)reevaluateDependenciesWithQuestionChanged:(id)arg0 toAdd:(id)arg1 toRemove:(id)arg2 ;
-(void)runResolvers;
-(void)sendSnapshotUpdate;
-(void)setResponse:(id)arg0 forQuestion:(id)arg1 ;
-(void)updateUIAfterAutoFill;
-(void)updateVisibilityForChangedQuestion:(id)arg0 ;


@end


#endif