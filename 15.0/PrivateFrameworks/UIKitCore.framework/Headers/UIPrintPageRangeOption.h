// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPRINTPAGERANGEOPTION_H
#define UIPRINTPAGERANGEOPTION_H

@class NSString, NSArray;
@protocol UIPrintOptionViewDelegate;


#import "UIPrintOption.h"
#import "UIPrintRangeView.h"

@interface UIPrintPageRangeOption : UIPrintOption <UIPrintOptionViewDelegate>



@property (retain, nonatomic) NSString *multiPageRangeTitle; // ivar: _multiPageRangeTitle
@property (retain, nonatomic) NSArray *multiPageRanges; // ivar: _multiPageRanges
@property (nonatomic) NSInteger pageCount; // ivar: _pageCount
@property (nonatomic) _NSRange pageRange; // ivar: _pageRange
@property (retain, nonatomic) UIPrintRangeView *pageRangeView; // ivar: _pageRangeView


-(BOOL)shouldShow;
-(id)initWithPrintInfo:(id)arg0 printPanelViewController:(id)arg1 ;
-(id)printOptionDetailView;
-(id)printOptionTableViewCell;
-(id)summary;
-(void)dealloc;
-(void)didSelectPrintOption;
-(void)pdfChanged:(id)arg0 ;
-(void)previewSelectionChanged:(id)arg0 ;
-(void)updateSummary;


@end


#endif