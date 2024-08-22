// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HLPHELPVIEWCONTROLLER_H
#define HLPHELPVIEWCONTROLLER_H

@class UIViewController, NSDictionary, NSString, UIBarButtonItem, NSLayoutConstraint, UIView, NSArray, NSURL, NSMutableDictionary;
@protocol HLPHelpTableOfContentViewControllerDelegate, HLPHelpTopicViewControllerDelegate, HLPReachabilityManagerDelegate, HLPHelpLoadingViewDelegate, HLPHelpViewControllerDelegate;


#import "HLPHelpTopicViewController.h"
#import "HLPHelpBookController.h"
#import "HLPHelpLoadingView.h"
#import "HLPHelpLocaleController.h"
#import "HLPReachabilityManager.h"
#import "HLPHelpTableOfContentViewController.h"

@interface HLPHelpViewController : UIViewController <HLPHelpTableOfContentViewControllerDelegate, HLPHelpTopicViewControllerDelegate, HLPReachabilityManagerDelegate, HLPHelpLoadingViewDelegate>

 {
    BOOL _supportsDarkMode;
    BOOL _fullBookView;
    BOOL _showingHelpTopic;
    BOOL _shouldDismissWelcomeTopic;
    NSDictionary *_context;
    NSString *_helpbookVersion;
    UIBarButtonItem *_doneBarButtonItem;
    NSLayoutConstraint *_loadingViewTopConstraint;
    UIView *_fullBookViewSeparator;
    HLPHelpTopicViewController *_topicViewController;
}


@property (copy, nonatomic) NSArray *additionalSupportedLanguages; // ivar: _additionalSupportedLanguages
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HLPHelpViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL displayHelpTopicsOnly; // ivar: _displayHelpTopicsOnly
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *helpBookBasePath; // ivar: _helpBookBasePath
@property (retain, nonatomic) HLPHelpBookController *helpBookController; // ivar: _helpBookController
@property (retain, nonatomic) NSURL *helpBookURL; // ivar: _helpBookURL
@property (nonatomic) BOOL hideDoneButton; // ivar: _hideDoneButton
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) HLPHelpLoadingView *loadingView; // ivar: _loadingView
@property (copy, nonatomic) NSURL *localHelpBookFileURL; // ivar: _localHelpBookFileURL
@property (retain, nonatomic) NSMutableDictionary *localHelpBookNameIDMap; // ivar: _localHelpBookNameIDMap
@property (retain, nonatomic) HLPHelpLocaleController *localeListController; // ivar: _localeListController
@property (copy, nonatomic) NSArray *preferredLanguagesOverride; // ivar: _preferredLanguagesOverride
@property (retain, nonatomic) HLPReachabilityManager *reachabilityManager; // ivar: _reachabilityManager
@property (copy, nonatomic) NSString *selectedHelpTopicID; // ivar: _selectedHelpTopicID
@property (copy, nonatomic) NSString *selectedHelpTopicName; // ivar: _selectedHelpTopicName
@property (nonatomic) BOOL showTopicNameAsTitle; // ivar: _showTopicNameAsTitle
@property (nonatomic) BOOL showTopicViewOnLoad; // ivar: _showTopicViewOnLoad
@property (copy, nonatomic) NSString *subpath; // ivar: _subpath
@property (readonly) Class superclass;
@property (retain, nonatomic) HLPHelpTableOfContentViewController *tableOfContentViewController; // ivar: _tableOfContentViewController
@property (nonatomic) BOOL useModalPresentation; // ivar: _useModalPresentation
@property (copy, nonatomic) NSString *version; // ivar: _version


+(id)helpViewController;
+(id)helpViewControllerWithIdentifier:(id)arg0 version:(id)arg1 ;
+(id)helpViewControllerWithLocalHelpBookFileURL:(id)arg0 ;
+(id)helpViewControllerWithTitle:(id)arg0 identifier:(id)arg1 version:(id)arg2 ;
+(id)helpViewControllerWithTitle:(id)arg0 identifier:(id)arg1 version:(id)arg2 subpath:(id)arg3 ;
+(void)clearCacheControllers;
-(BOOL)isModalInPresentation;
-(id)currentHelpTopicItemForTableOfContentViewController:(id)arg0 ;
-(id)deviceFamily;
-(id)init;
-(id)localHelpBookAnalyticIdentifier;
-(id)topicIDForTopicName:(id)arg0 locale:(id)arg1 ;
-(void)_setContext:(id)arg0 ;
-(void)_setFullBookView:(BOOL)arg0 ;
-(void)_showHelpTopicItem:(id)arg0 anchor:(id)arg1 animate:(BOOL)arg2 ;
-(void)_showWithLoadInfo:(id)arg0 animate:(BOOL)arg1 ;
-(void)dealloc;
-(void)dismiss;
-(void)displayHelpBookWithLocale:(id)arg0 ;
-(void)helpTopicViewController:(id)arg0 failToLoadWithError:(id)arg1 ;
-(void)helpTopicViewController:(id)arg0 selectedHelpTopicItem:(id)arg1 ;
-(void)helpTopicViewController:(id)arg0 topicLoaded:(id)arg1 ;
-(void)helpTopicViewController:(id)arg0 traitCollectionChanged:(id)arg1 ;
-(void)helpTopicViewControllerContentViewed:(id)arg0 topicID:(id)arg1 topicTitle:(id)arg2 source:(id)arg3 interfaceStyle:(NSInteger)arg4 fromTopicID:(id)arg5 externalURLString:(id)arg6 ;
-(void)helpTopicViewControllerCurrentTopicIsPassionPoint:(id)arg0 ;
-(void)helpTopicViewControllerDoneButtonTapped:(id)arg0 ;
-(void)helpTopicViewControllerShowHelpBookInfo:(id)arg0 ;
-(void)helpTopicViewControllerTableOfContentButtonTapped:(id)arg0 ;
-(void)loadFromStaticServer;
-(void)loadHelpBook;
-(void)loadHelpTopicID:(id)arg0 ;
-(void)popWelcomeTopicView;
-(void)reachabilityManagerConnectionStatusChanged:(id)arg0 connected:(BOOL)arg1 ;
-(void)removeDDMLoadFailVersion;
-(void)setupFullBookView;
-(void)setupTableContentViewController;
-(void)setupTopicViewController;
-(void)showHelpBookInfo:(id)arg0 ;
-(void)showMessageForError:(id)arg0 ;
-(void)showTopicView;
-(void)tableOfContentViewController:(id)arg0 showHelpTopicItem:(id)arg1 ;
-(void)tableOfContentViewControllerSearchUsed:(id)arg0 ;
-(void)tableOfContentViewControllerShowHelpBookInfo:(id)arg0 ;
-(void)traitCollectionChangedFrom:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateCacheControllerToLanguageCode:(id)arg0 ;
-(void)updateChildViewConstraints;
-(void)updateDarkMode;
-(void)updateDoneButton;
-(void)updateLastLoadVersion;
-(void)updateTOCButton;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif