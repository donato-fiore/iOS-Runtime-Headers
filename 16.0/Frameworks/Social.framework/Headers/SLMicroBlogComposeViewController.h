// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLMICROBLOGCOMPOSEVIEWCONTROLLER_H
#define SLMICROBLOGCOMPOSEVIEWCONTROLLER_H

@class NSString, NSArray;
@protocol UITextViewDelegate, SLMicroBlogMentionsDelegate, SLMicroBlogAccountsTableViewControllerDelegate, SLSheetPlaceViewControllerDelegate, SLMicroBlogSheetDelegate;


#import "SLComposeServiceViewController.h"
#import "SLMicroBlogMentionsViewController.h"
#import "SLMicroBlogUserRecord.h"
#import "SLComposeSheetConfigurationItem.h"
#import "SLMicroBlogAccountsTableViewController.h"
#import "SLSheetPlaceViewController.h"
#import "SLPlace.h"

@interface SLMicroBlogComposeViewController : SLComposeServiceViewController <UITextViewDelegate, SLMicroBlogMentionsDelegate, SLMicroBlogAccountsTableViewControllerDelegate, SLSheetPlaceViewControllerDelegate>

 {
    NSObject<SLMicroBlogSheetDelegate> *_microBlogSheetDelegate;
    NSString *_serviceAccountTypeIdentifier;
    SLMicroBlogMentionsViewController *_mentionsViewController;
    NSUInteger _mentionStartLocation;
    BOOL _mentionPendingStart;
    BOOL _rotatedDuringAccountsPopover;
    BOOL _usingLocationOverride;
    NSArray *_accountUserRecords;
    NSArray *_accountIdentifiers;
    SLMicroBlogUserRecord *_selectedAccountUserRecord;
    SLComposeSheetConfigurationItem *_accountConfigurationItem;
    SLComposeSheetConfigurationItem *_locationConfigurationItem;
    SLMicroBlogAccountsTableViewController *_accountViewController;
    SLSheetPlaceViewController *_placeViewController;
    SLPlace *_currentPlace;
    NSInteger _shortenedURLCost;
    NSInteger _maxURLLength;
    BOOL _isPresentingPlaces;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) NSObject<SLMicroBlogSheetDelegate> *microBlogSheetDelegate;
@property (readonly) Class superclass;


+(id)serviceBundle;
-(BOOL)_countMediaAttachmentsTowardCharacterCount;
-(BOOL)isContentValid;
-(BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange )arg1 replacementText:(id)arg2 ;
-(NSInteger)_characterCountForText:(id)arg0 ;
-(id)_accountConfigurationItem;
-(id)_locationConfigurationItem;
-(id)_mentionsSearchString;
-(id)_placeViewController;
-(id)completeText:(id)arg0 withAttachments:(id)arg1 ;
-(id)configurationItems;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(int)_charactersRemainingWithText:(id)arg0 ;
-(int)characterCountForEnteredText:(id)arg0 attachments:(id)arg1 ;
-(void)_beginLoadingAccountProfileImages;
-(void)_dismissMentionsViewController;
-(void)_hostApplicationDidEnterBackground;
-(void)_hostApplicationWillEnterForeground;
-(void)_performLocationAction;
-(void)_presentAccountPickerController;
-(void)_presentMentionsViewControllerIfApplicableForSearchString:(id)arg0 ;
-(void)_presentMentionsViewControllerWithSearchString:(id)arg0 ;
-(void)_presentNoAccountsAlertIfNecessaryAndReady;
-(void)_presentPlaceViewController;
-(void)accountsViewController:(id)arg0 didSelectAccountUserRecord:(id)arg1 ;
-(void)appWillEnterForeground:(id)arg0 ;
-(void)applyMention:(id)arg0 ;
-(void)didSelectPost;
-(void)loadView;
-(void)mentionsViewController:(id)arg0 finishedWithResult:(id)arg1 ;
-(void)noteLocationInfoChanged:(id)arg0 ;
-(void)placeViewController:(id)arg0 didSelectPlace:(id)arg1 ;
-(void)placeViewController:(id)arg0 willDisappear:(BOOL)arg1 ;
-(void)presentNoAccountsAlert;
-(void)presentationAnimationDidFinish;
-(void)setGeotagStatus:(int)arg0 ;
-(void)textViewDidChange:(id)arg0 ;
-(void)textViewDidChangeSelection:(id)arg0 ;
-(void)updateGeotagStatus;
-(void)updateShortenedURLCost;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif