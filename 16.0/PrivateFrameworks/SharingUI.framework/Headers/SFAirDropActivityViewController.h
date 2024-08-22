// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFAIRDROPACTIVITYVIEWCONTROLLER_H
#define SFAIRDROPACTIVITYVIEWCONTROLLER_H

@class UIViewController, NSString, UILabel, UIButton, NSLayoutConstraint, UITextView, NSArray, UICollectionView, SFAirDropBrowser, NSMutableDictionary, SFWirelessSettingsController, NSMutableOrderedSet, NSOperationQueue, UIVisualEffectView, UIFocusContainerGuide, NSMapTable, NSIndexPath;
@protocol UICollectionViewDataSource, SFCollectionViewDelegateLayout, SFAirDropBrowserBatchDelegate, SFPersonCollectionViewCellDelegate, SFWirelessSettingsControllerDelegate, SFAirDropActivityViewControllerDelegate;


#import "SFAirDropIconView.h"
#import "SFAirDropActiveIconView.h"
#import "SFCollectionViewLayout.h"

@interface SFAirDropActivityViewController : UIViewController <UICollectionViewDataSource, SFCollectionViewDelegateLayout, SFAirDropBrowserBatchDelegate, SFPersonCollectionViewCellDelegate, SFWirelessSettingsControllerDelegate>

 {
    NSString *_sendingAppBundleID;
    NSInteger _attachmentCount;
    NSString *_sessionID;
    NSInteger _sharedItemsRequestID;
    UILabel *_titleLabel;
    UIButton *_reportBugButton;
    NSLayoutConstraint *_titleLabelTopConstraint;
    CGFloat _titleLabelTopConstraintDefaultConstant;
    SFAirDropIconView *_airDropIconView;
    NSLayoutConstraint *_airDropIconLeftConstraint;
    UITextView *_noWifiTextView;
    NSLayoutConstraint *_noWifiRightConstraint;
    SFAirDropActiveIconView *_airDropActiveIconView;
    NSLayoutConstraint *_airDropActiveIconLeftConstraint;
    UITextView *_instructionsTextView;
    NSLayoutConstraint *_instructionsRightConstraint;
    SFAirDropActiveIconView *_airDropInactiveIconView;
    NSLayoutConstraint *_airDropInactiveIconLeftConstraint;
    UITextView *_noAWDLTextView;
    NSLayoutConstraint *_noAWDLRightConstraint;
    NSLayoutConstraint *_largeTextAirdropViewYConstraint;
    NSArray *_textViewConstraints;
    NSArray *_largeTextTextViewConstraints;
    NSArray *_airdropViewYConstraints;
    NSArray *_largeTextAirdropViewYConstraints;
    UICollectionView *_collectionView;
    UICollectionView *_detailCollectionView;
    UIButton *_showMoreButton;
    BOOL _shouldExpandTextIfNeeded;
    SFCollectionViewLayout *_collectionViewLayout;
    SFCollectionViewLayout *_detailCollectionViewLayout;
    SFAirDropBrowser *_browser;
    id *_progressToken;
    NSMutableDictionary *_personToProgress;
    NSMutableDictionary *_personToStoredTransferFinalState;
    NSMutableDictionary *_personToSharedItemsRequestID;
    NSMutableDictionary *_sharedItemsRequestIDToPreviewPhoto;
    SFWirelessSettingsController *_wirelessSettings;
    NSMutableOrderedSet *_cachedSharedItems;
    BOOL _itemsRequested;
    BOOL _itemsReady;
    NSOperationQueue *_operationQueue;
    NSInteger _generatedPreviews;
    UIVisualEffectView *_titleVibrancyView;
    UIVisualEffectView *_instructionsVibrancyView;
    UIVisualEffectView *_iconsVibrancyView;
    UIButton *_doneButton;
    UIFocusContainerGuide *_fcg;
    BOOL _doneFocused;
    *__SFOperation _logger;
    CGSize _minimumPreferredContentSize;
    NSArray *_people;
    NSMapTable *_realNameToFirstSeenTimestamp;
    NSUInteger _peopleStartTimestamp;
    BOOL _browserPaused;
    BOOL _didSelectNode;
    int _sharedItemsCount;
    NSMutableDictionary *_sharedItemsMap;
    NSIndexPath *_focusedIndexPath;
}


@property (nonatomic) BOOL darkStyleOnLegacyApp; // ivar: _darkStyleOnLegacyApp
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFAirDropActivityViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL manuallyManageBrowsing; // ivar: _manuallyManageBrowsing
@property (nonatomic) BOOL multipleRows; // ivar: _multipleRows
@property (nonatomic) BOOL otherActivityViewPresented; // ivar: _otherActivityViewPresented
@property (copy, nonatomic) NSString *overriddenInstructionsText; // ivar: _overriddenInstructionsText
@property (copy, nonatomic) NSString *overriddenNoAWDLText; // ivar: _overriddenNoAWDLText
@property (copy, nonatomic) NSString *overriddenNoWiFIBTText; // ivar: _overriddenNoWiFIBTText
@property (copy, nonatomic) NSString *overriddenTitleText; // ivar: _overriddenTitleText
@property (copy, nonatomic) NSArray *photosAssetIDs; // ivar: _photosAssetIDs
@property (nonatomic) ? sendingApplicationAuditToken; // ivar: _sendingApplicationAuditToken
@property (nonatomic) BOOL sharedItemsAvailable; // ivar: _sharedItemsAvailable
@property (readonly, nonatomic) CGSize suggestedThumbnailSize;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *urlsBeingShared; // ivar: _urlsBeingShared


+(BOOL)airDropActivityCanPerformActivityWithItemClasses:(id)arg0 ;
+(BOOL)isAirDropAvailable;
-(BOOL)addAttributedString:(id)arg0 withAttachmentName:(id)arg1 description:(id)arg2 previewImage:(id)arg3 itemIndex:(int)arg4 ;
-(BOOL)addData:(id)arg0 ofType:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 itemIndex:(int)arg5 ;
-(BOOL)addImage:(id)arg0 withAttachmentName:(id)arg1 description:(id)arg2 previewImage:(id)arg3 itemIndex:(int)arg4 ;
-(BOOL)addItemProvider:(id)arg0 withAttachmentName:(id)arg1 description:(id)arg2 previewImage:(id)arg3 ;
-(BOOL)addItemProvider:(id)arg0 withDataType:(id)arg1 attachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 ;
-(BOOL)addString:(id)arg0 withAttachmentName:(id)arg1 description:(id)arg2 previewImage:(id)arg3 itemIndex:(int)arg4 ;
-(BOOL)addURL:(id)arg0 withAttachmentName:(id)arg1 description:(id)arg2 previewImage:(id)arg3 itemIndex:(int)arg4 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)createURLPayloadForData:(id)arg0 ofType:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 itemIndex:(int)arg5 completion:(id)arg6 ;
-(BOOL)enableModernShareSheeet;
-(BOOL)isBluetoothEnabled;
-(BOOL)isDebugMode;
-(BOOL)isTetheredModeEnabled;
-(BOOL)isValidPayload:(id)arg0 toPerson:(id)arg1 invalidMessage:(*id)arg2 ;
-(BOOL)isWifiEnabled;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)_fontWithStyle:(id)arg0 maxSizeCategory:(id)arg1 traits:(unsigned int)arg2 ;
-(id)attributedStringWithTitle:(id)arg0 content:(id)arg1 ;
-(id)cellForPerson:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg0 ;
-(id)indexSetToIndexPaths:(id)arg0 inSection:(NSInteger)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)instructionsText;
-(id)noAWDLText;
-(id)noWiFiBTText;
-(id)preferredFocusEnvironments;
-(id)titleText;
-(id)wifiBtHelpTextLocalizedStringKey;
-(struct CGSize )_cachedPreferredItemSize;
-(struct CGSize )calculatePreferredContentSize;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 preferredSizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)_collectTelemetryForPeople:(id)arg0 ;
-(void)_createiOSLayoutConstraints;
-(void)_createtvOSLayoutConstraints;
-(void)_emitTelemetryForPerson:(id)arg0 ;
-(void)_setIsLoadingActivityItemProviders:(BOOL)arg0 ;
-(void)_startTelemetry;
-(void)_stopTelemetry;
-(void)_updateExclusionPathsForTextViews;
-(void)_updateFontSizes;
-(void)browserDidUpdatePeople:(id)arg0 ;
-(void)cleanupWithSelectedActivityType:(id)arg0 ;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)dealloc;
-(void)didEnterBackground:(id)arg0 ;
-(void)doneButtonAction:(id)arg0 ;
-(void)enableAirDropRequiredFeatures;
-(void)generateSpecialPreviewPhotoForRequestID:(NSInteger)arg0 ;
-(void)handleImageItemProvider:(id)arg0 withAttachmentName:(id)arg1 description:(id)arg2 previewImage:(id)arg3 itemIndex:(int)arg4 ;
-(void)handleLivePhotoItemProvider:(id)arg0 withAttachmentName:(id)arg1 description:(id)arg2 previewImage:(id)arg3 itemIndex:(int)arg4 ;
-(void)handleOperationCallback:(struct __SFOperation *)arg0 event:(NSInteger)arg1 withResults:(id)arg2 ;
-(void)handleOtherItemProvider:(id)arg0 withDataType:(id)arg1 attachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 ;
-(void)invalidate;
-(void)personCollectionViewCellDidFinishTransfer:(id)arg0 ;
-(void)personCollectionViewCellDidStartTransfer:(id)arg0 ;
-(void)personCollectionViewCellDidTerminateTransfer:(id)arg0 ;
-(void)setNeedsRequestingSharedItems;
-(void)showMore:(id)arg0 ;
-(void)startBrowsing;
-(void)startTransferForPeople:(id)arg0 ;
-(void)stopBrowsing;
-(void)subscribeToProgresses;
-(void)subscribedProgress:(id)arg0 forPersonWithRealName:(id)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)unpublishedProgressForPersonWithRealName:(id)arg0 ;
-(void)unsubscribeToProgresses;
-(void)updateContentAreaAnimated:(BOOL)arg0 ;
-(void)updatePreferredContentSize;
-(void)updateShowMoreButtonForShowPeople:(BOOL)arg0 inactive:(BOOL)arg1 active:(BOOL)arg2 static:(BOOL)arg3 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willEnterForeground:(id)arg0 ;
-(void)wirelessSettingsDidChange:(id)arg0 ;


@end


#endif