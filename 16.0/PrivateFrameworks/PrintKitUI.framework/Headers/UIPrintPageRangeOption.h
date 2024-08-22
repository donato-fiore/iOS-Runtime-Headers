// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPRINTPAGERANGEOPTION_H
#define UIPRINTPAGERANGEOPTION_H

@class NSString;
@protocol UIPrintOptionViewDelegate;


#import "UIPrintOption.h"
#import "UIPrintRangeView.h"

@interface UIPrintPageRangeOption : UIPrintOption <UIPrintOptionViewDelegate>



@property (retain, nonatomic) NSString *multiPageRangeTitle; // ivar: _multiPageRangeTitle
@property (retain, nonatomic) UIPrintRangeView *pageRangeView; // ivar: _pageRangeView


-(BOOL)shouldShow;
-(id)initWithPrintInfo:(id)arg0 printPanelViewController:(id)arg1 ;
-(id)printOptionDetailView;
-(id)printOptionTableViewCell;
-(id)summary;
-(void)dealloc;
-(void)didSelectPrintOption;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pdfChanged:(id)arg0 ;
-(void)updateFromPrintInfo;


@end


#endif