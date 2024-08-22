// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKBARCODEPASSDETAILVIEWCONTROLLER_H
#define PKBARCODEPASSDETAILVIEWCONTROLLER_H

@class PKPassDisplayProfile, UIView, UIRefreshControl, UITableViewCell, NSMutableDictionary, BluetoothManager, NSString, PKPass;
@protocol UITextViewDelegate, PKPassHeaderViewDelegate, OS_dispatch_source, PKPassDeleteHandler;


#import "PKSectionTableViewController.h"
#import "PKPassColorProfile.h"
#import "PKLinkedAppView.h"
#import "PKSettingTableCell.h"
#import "PKBarcodeTableViewCell.h"
#import "PKPassHeaderView.h"

@interface PKBarcodePassDetailViewController : PKSectionTableViewController <UITextViewDelegate, PKPassHeaderViewDelegate>

 {
    PKPassDisplayProfile *_displayProfile;
    PKPassColorProfile *_colorProfile;
    PKLinkedAppView *_linkedApp;
    UIView *_locationHelpView;
    UIRefreshControl *_refreshControl;
    PKSettingTableCell *_automaticUpdatesCell;
    PKSettingTableCell *_showNotificationsCell;
    PKSettingTableCell *_showInLockScreenCell;
    PKSettingTableCell *_automaticSelectionCell;
    UITableViewCell *_personalizePassCell;
    UITableViewCell *_deleteCell;
    PKBarcodeTableViewCell *_barcodeCell;
    NSMutableDictionary *_fieldCellsByRow;
    NSObject<OS_dispatch_source> *_refreshTimeout;
    BluetoothManager *_btManager;
    BOOL _isBluetoothEnabled;
    BOOL _isLocationEnabled;
    BOOL _isWifiEnabled;
    BOOL _showsLinks;
    CGFloat _headerHeight;
    UIEdgeInsets _headerContentInset;
    CGSize _previousLayoutTableViewBoundsSize;
    CGFloat _titleOpacity;
    CGRect _headerFrame;
    UIView *_headerView;
    PKPassHeaderView *_passHeaderView;
    BOOL _didRampScreenBrightness;
    unsigned char _visiblityState;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPassDeleteHandler> *deleteOverrider; // ivar: _deleteOverrider
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKPass *pass; // ivar: _pass
@property (nonatomic) BOOL showDoneButton; // ivar: _showDoneButton
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger suppressedContent; // ivar: _suppressedContent


+(BOOL)isWifiEnabled;
-(BOOL)_canShowWhileLocked;
-(BOOL)_isBluetoothEnabled;
-(BOOL)_linkedAppAvailable;
-(BOOL)_personalizeAvailable;
-(BOOL)_settingsAvailable;
-(BOOL)_updateHeaderHeight;
-(BOOL)reloadData;
-(BOOL)shouldAllowRefresh;
-(BOOL)shouldMapSection:(NSUInteger)arg0 ;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(CGFloat)_offscreenHeaderHeight;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)rowAnimationForReloadingSection:(NSUInteger)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)_numberOfAvailableSettings;
-(NSUInteger)_settingForRow:(NSUInteger)arg0 ;
-(id)_automaticSelectionCell;
-(id)_barcodeCell;
-(id)_deleteCell;
-(id)_fieldCellForRow:(NSUInteger)arg0 ;
-(id)_fieldForRow:(NSUInteger)arg0 ;
-(id)_locationHelpTextWithLink:(*id)arg0 linkRange:(struct _NSRange *)arg1 ;
-(id)_locationHelpViewForTableView:(id)arg0 ;
-(id)_personalizePassCell;
-(id)_relevantBuckets;
-(id)_settingsCellForRow:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithPass:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 numberOfSections:(NSUInteger)arg1 ;
-(id)linkedApp;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_bluetoothPowerChanged:(id)arg0 ;
-(void)_deletePass;
-(void)_done:(id)arg0 ;
-(void)_passSettingsChanged:(id)arg0 ;
-(void)_refreshFinished:(BOOL)arg0 ;
-(void)_reloadPassAndView;
-(void)_sharePass;
-(void)_updateNavigationItem;
-(void)_updatePassProperties;
-(void)_updateStandardAppearance:(id)arg0 ;
-(void)_wifiChanged:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)passHeaderViewDidChangePass:(id)arg0 ;
-(void)passHeaderViewPassWasDeleted:(id)arg0 ;
-(void)pushSettingsFromViewToModel;
-(void)refreshControlValueChanged:(id)arg0 ;
-(void)reloadSection:(NSUInteger)arg0 ;
-(void)reloadSections:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setShowsLinks:(BOOL)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif