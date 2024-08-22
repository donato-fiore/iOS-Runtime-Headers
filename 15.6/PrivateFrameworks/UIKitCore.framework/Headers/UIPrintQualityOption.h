// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIPRINTQUALITYOPTION_H
#define UIPRINTQUALITYOPTION_H

@class NSArray;
@protocol UIPrintOptionViewDelegate;


#import "UIPrintOption.h"
#import "UIPrintQualityView.h"

@interface UIPrintQualityOption : UIPrintOption <UIPrintOptionViewDelegate>



@property (retain, nonatomic) NSArray *printQualities; // ivar: _printQualities
@property (retain, nonatomic) UIPrintQualityView *printQualityView; // ivar: _printQualityView
@property (retain, nonatomic) NSArray *qualities; // ivar: _qualities
@property (nonatomic) NSInteger selectedQuality; // ivar: _selectedQuality


-(BOOL)shouldShow;
-(id)initWithPrintInfo:(id)arg0 printPanelViewController:(id)arg1 ;
-(id)printOptionDetailView;
-(id)printOptionTableViewCell;
-(id)shortSummary;
-(id)summary;
-(void)dealloc;
-(void)didSelectPrintOption;
-(void)setCurrentPrinter:(id)arg0 ;
-(void)updatePrinterInfo;
-(void)updateQuality;
-(void)updateSummary;


@end


#endif