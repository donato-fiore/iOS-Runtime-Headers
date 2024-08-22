// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKCONTENTITEM_H
#define FBKCONTENTITEM_H

@class NSNumber, NSString, NSDate, NSDateFormatter, NSSet;
@protocol FBKSearchableDocument, FBKMailboxContent;


#import "FBKManagedFeedbackObject.h"
#import "FBKAnnouncement.h"
#import "FBKParticipant.h"
#import "FBKFeedback.h"
#import "FBKFormResponse.h"
#import "FBKFormResponseStub.h"
#import "FBKBugForm.h"
#import "FBKUser.h"

@interface FBKContentItem : FBKManagedFeedbackObject <FBKSearchableDocument, FBKMailboxContent>



@property (readonly) NSNumber *ID;
@property (retain, nonatomic) FBKAnnouncement *announcement;
@property (copy, nonatomic) NSString *area;
@property (retain, nonatomic) FBKParticipant *assignee;
@property (readonly, nonatomic) BOOL canResolveNeedsAction;
@property (nonatomic) BOOL closed;
@property (readonly, nonatomic) NSString *contentInfoString;
@property (copy, nonatomic) NSDate *createdAt;
@property (copy, nonatomic) NSString *createdBy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayTitle;
@property (readonly, nonatomic) NSUInteger draftType;
@property (copy, nonatomic) NSNumber *draftTypeEnum;
@property (retain, nonatomic) FBKFeedback *feedback;
@property (readonly, nonatomic) NSString *feedbackIDAndTitleString;
@property (readonly, nonatomic) NSString *feedbackIDString;
@property (copy, nonatomic) NSNumber *formID;
@property (retain, nonatomic) FBKFormResponse *formResponse;
@property (retain, nonatomic) FBKFormResponseStub *formResponseStub;
@property (readonly, nonatomic) NSString *formattedCreationDate;
@property (readonly, nonatomic) NSString *formattedMailboxSortDate;
@property (readonly, nonatomic) BOOL hasFollowupPending;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isOrphaned;
@property (readonly, nonatomic) BOOL isSurveyAvailable;
@property (readonly, nonatomic) BOOL isSurveyDraft;
@property (readonly) NSString *itemSubtitle;
@property (readonly) NSString *itemTitle;
@property (readonly, nonatomic) NSUInteger itemType;
@property (readonly) NSString *mailboxKind;
@property (readonly) NSDate *mailboxSortDate;
@property (readonly, nonatomic) NSDateFormatter *mailboxSortDateFormatter;
@property (copy, nonatomic) NSDate *modifiedAt;
@property (readonly, nonatomic) BOOL needsAction;
@property (readonly, nonatomic) BOOL needsActionFromMe;
@property (retain, nonatomic) FBKParticipant *originator;
@property (nonatomic) BOOL pendingInfo;
@property (copy, nonatomic) NSNumber *remoteID;
@property (copy, nonatomic) NSString *searchText;
@property (retain) NSString *searchText;
@property (copy, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (retain, nonatomic) FBKBugForm *surveyBugForm;
@property (retain, nonatomic) NSSet *teams;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSNumber *type;
@property (nonatomic) BOOL unread;
@property (readonly) BOOL unread;
@property (copy, nonatomic) NSDate *updatedAt;
@property (retain, nonatomic) FBKUser *user;
@property (readonly, nonatomic) NSString *visibleFeedbackClosedStatus;


+(id)_predicateForAnnouncementsWithTeam:(id)arg0 ;
+(id)_predicateForFeedbackInInboxWithTeam:(id)arg0 ;
+(id)_predicateForFeedbackWithTeam:(id)arg0 ;
+(id)_predicateForSurveysWithTeam:(id)arg0 ;
+(id)assignedPredicateForUser:(id)arg0 ;
+(id)contentItemsWithFormIDs:(id)arg0 fromContext:(id)arg1 ;
+(id)draftsPredicateWithTeam:(id)arg0 ;
+(id)entityName;
+(id)inboxPredicateWithTeam:(id)arg0 ;
+(id)keyPathsForValuesAffectingNeedsActionFromMe;
+(id)outboxPredicateWithTeam:(id)arg0 ;
+(id)submittedPredicateWithTeam:(id)arg0 ;
+(id)unreadContentItemsPredicateForUser:(id)arg0 ;
+(id)unreadInboxPredicateWithTeam:(id)arg0 ;
-(BOOL)allowUnsolicitedFollowup;
-(BOOL)canCloseFeedback;
-(BOOL)canDemoteFeedback;
-(BOOL)canDownloadFiles;
-(BOOL)canPromoteFeedback;
-(BOOL)canReassignFeedback;
-(BOOL)canRespondToFollowup;
-(BOOL)currentUserIsStakeholder;
-(BOOL)isClosedFeedback;
-(BOOL)isEqualToItem:(id)arg0 ;
-(BOOL)shouldShowAssigneeLabel;
-(BOOL)supportsClosing;
-(id)detailedItem;
-(id)generateSearchText;
-(id)keyPathsAffectingClosedOrOpenString;
-(id)keyPathsAffectingContentInfoString;
-(id)keyPathsForValuesAffectingDisplayTitle;
-(id)keyPathsForValuesAffectingHasFollowupPending;
-(id)keyPathsForValuesAffectingIsSurveyAvailable;
-(id)keyPathsForValuesAffectingItemTitle;
-(id)keyPathsForValuesAffectingItemTitleColor;
-(id)keyPathsForValuesAffectingItemType;
-(id)keyPathsForValuesAffectingMailboxKind;
-(id)keyPathsForValuesAffectingMailboxSortDate;
-(id)keyPathsForValuesAffectingNeedsAction;
-(id)keyPathsForValuesAffectingSecondaryTextColor;
-(id)searchableFeedbackClosedStatus;
-(id)shortDescription;
-(id)singleTeam;
-(id)teamForItemPreferringTeam:(id)arg0 ;
-(void)markAsRead;
-(void)setAttributesFromJSONObject:(id)arg0 ;
-(void)setPropertiesFromJSONObject:(id)arg0 ;


@end


#endif