// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFPRIVACYREPORTVIEWCONTROLLER_H
#define SFPRIVACYREPORTVIEWCONTROLLER_H

@class UIViewController, UITableView, WBSPrivacyReportData, NSString;
@protocol SFPrivacyReportPrivacyProxyTipTableViewCellDelegate, UITableViewDelegatePrivate, _SFTableViewDiffableDataSourceDelegate, SFPrivacyReportExplanationTableViewCellDelegate, SFPrivacyReportGridViewDelegate, SFPrivacyReportDetailToggleTableViewCellDelegate;


#import "_SFTableViewDiffableDataSource.h"

@interface SFPrivacyReportViewController : UIViewController <SFPrivacyReportPrivacyProxyTipTableViewCellDelegate, UITableViewDelegatePrivate, _SFTableViewDiffableDataSourceDelegate, SFPrivacyReportExplanationTableViewCellDelegate, SFPrivacyReportGridViewDelegate, SFPrivacyReportDetailToggleTableViewCellDelegate>

 {
    UITableView *_tableView;
    BOOL _showExplanationDetailView;
    WBSPrivacyReportData *_privacyReportData;
    _SFTableViewDiffableDataSource *_diffableDataSource;
    BOOL _needsRowHeightUpdate;
    NSInteger _listDetailType;
    CGFloat _maxCountForDetailList;
    BOOL _showingCurrentWebsite;
    BOOL _usesInsetStyle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *domain; // ivar: _domain
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_privacyProxyTip:(*NSInteger)arg0 ;
-(BOOL)tableView:(id)arg0 canFocusRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldDrawBottomSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldDrawTopSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)_sectionTypeFromSectionIndex:(NSInteger)arg0 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(id)_cellForRowWithIndexPath:(id)arg0 itemIdentifier:(id)arg1 ;
-(id)dataSource:(id)arg0 headerTextForSection:(NSInteger)arg1 ;
-(id)initWithDomain:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_createTableViewIfNeededLoadingReport:(BOOL)arg0 ;
-(void)_doneBarButtonItemAction:(id)arg0 ;
-(void)_reloadDataLoadingReport:(BOOL)arg0 ;
-(void)_updateLayoutMargins;
-(void)_updateUsesInsetStyle;
-(void)cellDidToggleDetailType:(id)arg0 ;
-(void)cellDidToggleExpandDetailedExplanation:(id)arg0 ;
-(void)cellPrivacyProxyStateChanged:(id)arg0 ;
-(void)cellPrivacyProxyUpsellDismissed:(id)arg0 ;
-(void)gridViewDidUpdateContentSize:(id)arg0 ;
-(void)setNeedsUpdateRowHeight;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif