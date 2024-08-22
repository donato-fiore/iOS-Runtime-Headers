// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTPASSDETAILSECTIONCONTROLLER_H
#define PKPAYMENTPASSDETAILSECTIONCONTROLLER_H

@class NSArray, NSString, UIColor;
@protocol PKTableViewSectionController;

#import <Foundation/Foundation.h>


@interface PKPaymentPassDetailSectionController : NSObject <PKTableViewSectionController>



@property (retain, nonatomic) NSArray *allSectionIdentifiers; // ivar: _allSectionIdentifiers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIColor *detailTextColor; // ivar: _detailTextColor
@property (nonatomic) NSInteger detailViewStyle; // ivar: _detailViewStyle
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *highlightColor; // ivar: _highlightColor
@property (retain, nonatomic) UIColor *linkTextColor; // ivar: _linkTextColor
@property (retain, nonatomic) UIColor *primaryTextColor; // ivar: _primaryTextColor
@property (retain, nonatomic) NSArray *sectionIdentifiers; // ivar: _sectionIdentifiers
@property (readonly) Class superclass;
@property (retain, nonatomic) UIColor *warningTextColor; // ivar: _warningTextColor


+(BOOL)validForPaymentPass:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSectionIdentifier:(id)arg1 ;
-(id)checkmarkCellWithText:(id)arg0 forTableView:(id)arg1 ;
-(id)defaultCellWithTextColor:(id)arg0 forTableView:(id)arg1 ;
-(id)disabledCellWithText:(id)arg0 forTableView:(id)arg1 ;
-(id)disclosureCellWithTitle:(id)arg0 forTableView:(id)arg1 ;
-(id)imageViewCellForImage:(id)arg0 contentMode:(NSInteger)arg1 forTableView:(id)arg2 ;
-(id)infoCellWithDescription:(id)arg0 forTableView:(id)arg1 ;
-(id)infoCellWithPrimaryText:(id)arg0 detailText:(id)arg1 cellStyle:(NSInteger)arg2 forTableView:(id)arg3 ;
-(id)infoCellWithPrimaryText:(id)arg0 detailText:(id)arg1 cellStyle:(NSInteger)arg2 reuseIdentifier:(id)arg3 forTableView:(id)arg4 ;
-(id)init;
-(id)linkCellWithText:(id)arg0 forTableView:(id)arg1 ;
-(id)settingsTableCellWithTitle:(id)arg0 action:(SEL)arg1 setOn:(BOOL)arg2 enabled:(BOOL)arg3 ;
-(id)spinnerCellForTableView:(id)arg0 ;
-(id)stackedInfoCellWithPrimaryText:(id)arg0 detailText:(id)arg1 cellStyle:(NSInteger)arg2 forTableView:(id)arg3 ;
-(id)subtitleCellForTableView:(id)arg0 ;
-(id)switchCellWithText:(id)arg0 forTableView:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2 ;
-(id)value1CellWithTextColor:(id)arg0 forTableView:(id)arg1 ;
-(void)_applyDefaultDynamicStylingToCell:(id)arg0 ;
-(void)_applyDefaultStaticStylingToCell:(id)arg0 ;
-(void)preflight:(id)arg0 ;
-(void)reportPassDetailsAnalyticsForTappedButtonTag:(id)arg0 additionalAnalytics:(id)arg1 pass:(id)arg2 ;
-(void)reportPassDetailsAnalyticsForTappedRowTag:(id)arg0 additionalAnalytics:(id)arg1 pass:(id)arg2 ;
-(void)reportPassDetailsAnalyticsForToggleTag:(id)arg0 toggleResult:(BOOL)arg1 additionalAnalytics:(id)arg2 pass:(id)arg3 ;
-(void)showSpinner:(BOOL)arg0 inCell:(id)arg1 detailText:(id)arg2 ;
-(void)showSpinner:(BOOL)arg0 inCell:(id)arg1 overrideTextColor:(id)arg2 ;


@end


#endif