// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKBUGFORM_H
#define FBKBUGFORM_H

@class NSURL, NSNumber, NSString, NSSet, NSOrderedSet, NSArray, NSDate;


#import "FBKManagedFeedbackObject.h"
#import "FBKBugFormStub.h"
#import "FBKContentItem.h"

@interface FBKBugForm : FBKManagedFeedbackObject

@property (nonatomic) BOOL active;
@property (retain) NSURL *announcementTempFile; // ivar: announcementTempFile
@property (retain, nonatomic) NSNumber *boxedFormRole; // ivar: boxedFormRole
@property (readonly) NSURL *cachedAnnouncementFile;
@property (retain, nonatomic) NSString *cachedAnnouncementHTML; // ivar: cachedAnnouncementHTML
@property (nonatomic) NSInteger feedbackType;
@property (retain, nonatomic) NSSet *filePredicates;
@property (retain, nonatomic) NSSet *formResponses;
@property (readonly) NSString *fullAnnouncementHTML;
@property BOOL generatingTemp; // ivar: generatingTemp
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *platform;
@property (retain, nonatomic) NSNumber *primitiveFeedbackType;
@property (retain, nonatomic) NSOrderedSet *primitiveQuestionGroups;
@property (retain, nonatomic) NSArray *questionGroups;
@property (retain, nonatomic) NSString *repeatPer;
@property (nonatomic) NSInteger role;
@property (nonatomic) BOOL shouldRepeat;
@property (retain, nonatomic) NSString *signature;
@property (retain, nonatomic) FBKBugFormStub *stub;
@property (readonly) NSString *surveyAnnouncementHTML;
@property (retain, nonatomic) FBKContentItem *surveyContentItem;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSDate *updatedAt;


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