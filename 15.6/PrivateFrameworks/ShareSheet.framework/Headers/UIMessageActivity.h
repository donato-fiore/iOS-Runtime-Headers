// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIMESSAGEACTIVITY_H
#define UIMESSAGEACTIVITY_H

@class LPLinkMetadata, MFMessageComposeViewController, NSString;
@protocol UIManagedConfigurationRestrictableActivity, UIPeopleSuggestionRecipientActivity, SHSheetUIPeopleSuggestion;


#import "UIActivity.h"

@interface UIMessageActivity : UIActivity <UIManagedConfigurationRestrictableActivity, UIPeopleSuggestionRecipientActivity>



@property (nonatomic) BOOL isContentManaged; // ivar: _isContentManaged
@property (retain, nonatomic) LPLinkMetadata *linkMetadata; // ivar: _linkMetadata
@property (retain, nonatomic) MFMessageComposeViewController *messageComposeViewController; // ivar: _messageComposeViewController
@property (retain, nonatomic) NSObject<SHSheetUIPeopleSuggestion> *peopleSuggestion; // ivar: _peopleSuggestion
@property (nonatomic) BOOL ppt_forceImageTypeSupport; // ivar: _ppt_forceImageTypeSupport
@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *sourceApplicationBundleID; // ivar: _sourceApplicationBundleID


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