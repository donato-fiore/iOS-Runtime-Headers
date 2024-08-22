// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKFEEDBACKFOLLOWUP_H
#define FBKFEEDBACKFOLLOWUP_H

@class NSString, NSDate, NSArray, NSSet, NSNumber, NSOrderedSet;
@protocol FBKFilerForm;


#import "FBKManagedFeedbackObject.h"
#import "FBKFeedback.h"
#import "FBKParticipant.h"
#import "FBKFilePredicate.h"
#import "FBKUploadTask.h"

@interface FBKFeedbackFollowup : FBKManagedFeedbackObject <FBKFilerForm>



@property (readonly) NSString *choiceText;
@property (getter=isComplete) BOOL complete;
@property (retain) NSDate *createdAt;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSString *displayText;
@property (retain) FBKFeedback *feedback;
@property (retain) NSArray *feedbackFollowupResponses;
@property (retain) NSString *fileMatcherIds;
@property (retain) NSSet *fileMatchers;
@property (retain) NSSet *filePromises;
@property (nonatomic) NSInteger filerFormType; // ivar: _filerFormType
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInformationalFollowup;
@property (readonly) BOOL isVisible;
@property (readonly) NSString *negativeChoice;
@property (readonly) NSString *noChoiceText;
@property (retain) FBKParticipant *originator;
@property (readonly) NSString *platform;
@property (readonly) NSString *positiveChoice;
@property (retain) NSNumber *primitiveComplete;
@property (retain) NSOrderedSet *primitiveFeedbackFollowupResponses;
@property (retain) NSNumber *primitiveType;
@property (readonly, nonatomic) BOOL requiresValidationResponse;
@property BOOL serverSideIsComplete;
@property (retain, nonatomic) FBKFilePredicate *stubFilePredicate; // ivar: _stubFilePredicate
@property (readonly) Class superclass;
@property NSUInteger type;
@property (retain) NSDate *updatedAt;
@property (retain) FBKUploadTask *uploadTask;


+(NSUInteger)followupTypeFromString:(id)arg0 ;
+(id)entityName;
-(BOOL)canRespond;
-(BOOL)collectsFiles;
-(BOOL)hasVisibleFiles;
-(BOOL)hasVisibleFilesIncludingFileResponses;
-(BOOL)isServerSideComplete;
-(BOOL)isUploadingFiles;
-(BOOL)needsRefresh;
-(BOOL)requiresComments;
-(NSInteger)textResponsesCount;
-(id)_textResponsesPredicate;
-(id)allFileMatchers;
-(id)bugSessionsFromOriginalFeedback;
-(id)filerFormID;
-(id)matcherPredicates;
-(id)promises;
-(id)respondedToAt;
-(id)targetPlatform;
-(id)textResponsesSummary;
-(id)validationResponse;
-(id)visibleFileNamesIncludingResponsesOfTypeFileAndPromisesSorted;
-(id)visibleFilePromises;
-(id)visibleFilePromisesForResponsesAndPromisesByName;
-(id)visibleFileResponses;
-(id)visibleResponses;
-(id)visibleSortedFilePromises;
-(void)prepareForDeletion;
-(void)setPropertiesFromJSONObject:(id)arg0 ;


@end


#endif