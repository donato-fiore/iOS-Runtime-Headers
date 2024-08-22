// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKBUGFORM_H
#define FBKBUGFORM_H

@class NSURL, NSNumber, NSString, NSSet, NSOrderedSet, NSArray, NSDate;


#import "FBKManagedFeedbackObject.h"
#import "FBKBugFormStub.h"
#import "FBKContentItem.h"

@interface FBKBugForm : FBKManagedFeedbackObject

@property BOOL active;
@property (retain) NSURL *announcementTempFile; // ivar: announcementTempFile
@property (retain, nonatomic) NSNumber *boxedFormRole; // ivar: boxedFormRole
@property (readonly) NSURL *cachedAnnouncementFile;
@property (retain, nonatomic) NSString *cachedAnnouncementHTML; // ivar: cachedAnnouncementHTML
@property NSInteger feedbackType;
@property (retain) NSSet *filePredicates;
@property (retain) NSSet *formResponses;
@property (readonly) NSString *fullAnnouncementHTML;
@property BOOL generatingTemp; // ivar: generatingTemp
@property (retain) NSString *name;
@property (retain) NSString *platform;
@property (retain, nonatomic) NSNumber *primitiveFeedbackType;
@property (retain, nonatomic) NSOrderedSet *primitiveQuestionGroups;
@property (retain) NSArray *questionGroups;
@property (retain) NSString *repeatPer;
@property NSInteger role;
@property BOOL shouldRepeat;
@property (retain) NSString *signature;
@property (retain) FBKBugFormStub *stub;
@property (readonly) NSString *surveyAnnouncementHTML;
@property (retain) FBKContentItem *surveyContentItem;
@property (retain) NSString *text;
@property (retain) NSDate *updatedAt;


+(NSInteger)bugFormRoleFromString:(id)arg0 ;
+(NSInteger)bugFormTypeFromString:(id)arg0 ;
+(id)entityName;
-(BOOL)canTakeForTeam:(id)arg0 ;
-(BOOL)collectsFiles;
-(BOOL)isSurveyAvailable;
-(BOOL)matchesFormStubSignature:(id)arg0 ;
-(BOOL)requiresPreview;
-(id)completedResponsesContentItems;
-(id)completedResponsesContentItemsForTeam:(id)arg0 ;
-(id)description;
-(id)draftResponsesContentItems;
-(id)draftResponsesContentItemsForTeam:(id)arg0 ;
-(id)issueAreaDisplayNameForKeyword:(id)arg0 ;
-(id)localizedFeedbackTypeName;
-(id)localizedFeedbackTypeShortName;
-(id)questionForQuestionID:(id)arg0 ;
-(id)questionGroupForQuestionID:(id)arg0 ;
-(id)questionWithRole:(id)arg0 ;
-(id)surveyActionTextForTeam:(id)arg0 ;
-(void)setPropertiesFromJSONObject:(id)arg0 ;
-(void)updateResolvableQuestions;


@end


#endif