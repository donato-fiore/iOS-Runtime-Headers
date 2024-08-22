// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDASHBOARDBALANCESUMMARYITEMPRESENTER_H
#define PKDASHBOARDBALANCESUMMARYITEMPRESENTER_H

@class NSDateFormatter, UIImage, NSData, QLItem, QLPreviewController, NSString;
@protocol QLPreviewItemDataProvider, QLPreviewControllerDelegate, QLPreviewControllerDataSource, PKDashboardItemPresenter;

#import <Foundation/Foundation.h>

#import "PKPaymentTransactionCollectionViewCell.h"
#import "PKDashboardButtonCollectionViewCell.h"
#import "PKDashboardCurrencyAmountCell.h"
#import "PKDashboardTitleMessageCell.h"

@interface PKDashboardBalanceSummaryItemPresenter : NSObject <QLPreviewItemDataProvider, QLPreviewControllerDelegate, QLPreviewControllerDataSource, PKDashboardItemPresenter>

 {
    PKPaymentTransactionCollectionViewCell *_sampleTransactionCell;
    PKDashboardButtonCollectionViewCell *_sampleButtonCell;
    PKDashboardCurrencyAmountCell *_sampleCurrencyCell;
    PKDashboardButtonCollectionViewCell *_downloadPDFCell;
    PKDashboardButtonCollectionViewCell *_exportStatementDataCell;
    PKDashboardTitleMessageCell *_sampleTitleMessageCell;
    NSDateFormatter *_formatterMonthYear;
    NSDateFormatter *_formatterMonthAndDay;
    NSDateFormatter *_formatterMonthDayYear;
    NSDateFormatter *_formatterMonth;
    UIImage *_statementIcon;
    NSData *_pdfData;
    NSData *_exportedStatementData;
    QLItem *_pdfItem;
    QLItem *_exportedStatementDataItem;
    QLPreviewController *_previewController;
}


@property (nonatomic) NSInteger cellStyle; // ivar: _cellStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_statementIsFromMonthPriorToSummaryForItem:(id)arg0 ;
-(BOOL)canSelectItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(Class)itemClass;
-(NSInteger)numberOfPreviewItemsInPreviewController:(id)arg0 ;
-(id)_readableFileTypeForFormat:(id)arg0 feature:(NSUInteger)arg1 ;
-(id)_statementCellTitleForItem:(id)arg0 ;
-(id)cellForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)collectionViewCellClasses;
-(id)init;
-(id)previewController:(id)arg0 previewItemAtIndex:(NSInteger)arg1 ;
-(id)provideDataForItem:(id)arg0 ;
-(id)statementIcon;
-(struct CGSize )sizeForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_configureCell:(id)arg0 forItem:(id)arg1 inCollectionView:(id)arg2 forIndexPath:(id)arg3 forSizing:(BOOL)arg4 ;
-(void)_configureDailyCashCell:(id)arg0 forItem:(id)arg1 ;
-(void)_configureExportStatementDataCell:(id)arg0 forItem:(id)arg1 ;
-(void)_configureInstallmentBalanceCell:(id)arg0 forItem:(id)arg1 ;
-(void)_configureInterestCell:(id)arg0 forItem:(id)arg1 ;
-(void)_configureMergeBalanceCell:(id)arg0 forItem:(id)arg1 ;
-(void)_configureMergeNoticeCell:(id)arg0 forItem:(id)arg1 ;
-(void)_configureMonthlySpendLimitCell:(id)arg0 forItem:(id)arg1 ;
-(void)_configurePaymentsAndCreditsCell:(id)arg0 forItem:(id)arg1 ;
-(void)_configurePriorStatementBalanceCell:(id)arg0 forItem:(id)arg1 ;
-(void)_configureRewardsSummaryCell:(id)arg0 forItem:(id)arg1 ;
-(void)_configureSpendingCell:(id)arg0 forItem:(id)arg1 ;
-(void)_configureStatementBalanceCell:(id)arg0 forItem:(id)arg1 ;
-(void)_configureStatementCell:(id)arg0 forItem:(id)arg1 ;
-(void)_configureStatementDownloadCell:(id)arg0 forItem:(id)arg1 ;
-(void)_configureTotalBalanceCell:(id)arg0 forItem:(id)arg1 ;
-(void)_configureTransactionLimitCell:(id)arg0 forItem:(id)arg1 ;
-(void)_downloadAndPresentStatementForItem:(id)arg0 inCollectionView:(id)arg1 ;
-(void)_downloadExportedStatementDataForItem:(id)arg0 withFileFormat:(id)arg1 inCollectionView:(id)arg2 ;
-(void)_selectFileFormatForExportedStatementDataForItem:(id)arg0 inCollectionView:(id)arg1 ;
-(void)didSelectItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 navigationController:(id)arg3 canPresent:(id)arg4 ;
-(void)traitCollectionDidChangeFromTrait:(id)arg0 toTrait:(id)arg1 inCollectionView:(id)arg2 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;


@end


#endif