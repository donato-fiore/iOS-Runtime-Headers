// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIMESSAGEACTIVITY_H
#define UIMESSAGEACTIVITY_H

@class NSString, LPLinkMetadata, MFMessageComposeViewController;
@protocol UIManagedConfigurationRestrictableActivity, UIPeopleSuggestionRecipientActivity, UICollaborationActivity, SFCollaborationItem, SFCollaborationService, SFPeopleSuggestion;


#import "UIActivity.h"

@interface UIMessageActivity : UIActivity <UIManagedConfigurationRestrictableActivity, UIPeopleSuggestionRecipientActivity, UICollaborationActivity>



@property (retain, nonatomic) NSObject<SFCollaborationItem> *collaborationItem; // ivar: _collaborationItem
@property (weak, nonatomic) NSObject<SFCollaborationService> *collaborationService;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isCollaborative; // ivar: _isCollaborative
@property (nonatomic) BOOL isContentManaged; // ivar: _isContentManaged
@property (retain, nonatomic) LPLinkMetadata *linkMetadata; // ivar: _linkMetadata
@property (retain, nonatomic) MFMessageComposeViewController *messageComposeViewController; // ivar: _messageComposeViewController
@property (retain, nonatomic) NSObject<SFPeopleSuggestion> *peopleSuggestion; // ivar: _peopleSuggestion
@property (nonatomic) BOOL ppt_forceImageTypeSupport; // ivar: _ppt_forceImageTypeSupport
@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *sourceApplicationBundleID; // ivar: _sourceApplicationBundleID
@property (readonly) Class superclass;


+(NSInteger)activityCategory;
+(NSUInteger)_xpcAttributes;
+(id)applicationBundleID;
+(void)_preheatAsyncIfNeeded;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_backgroundPreheatBlock:(SEL)arg0 ;
-(id)_bundleIdentifierForActivityImageCreation;
-(id)activityTitle;
-(id)activityType;
-(id)activityViewController;
-(void)_cleanup;
-(void)_prepareWithActivityItems:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)messageComposeViewController:(id)arg0 didFinishWithResult:(NSInteger)arg1 ;
-(void)prepareWithActivityItems:(id)arg0 ;


@end


#endif