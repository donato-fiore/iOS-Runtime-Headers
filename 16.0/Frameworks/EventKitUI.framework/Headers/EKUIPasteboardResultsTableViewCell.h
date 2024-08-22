// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKUIPASTEBOARDRESULTSTABLEVIEWCELL_H
#define EKUIPASTEBOARDRESULTSTABLEVIEWCELL_H

@class UILabel, NSMutableArray, NSAttributedString, NSArray;


#import "EKUIAutocompleteSearchResultCell.h"

@interface EKUIPasteboardResultsTableViewCell : EKUIAutocompleteSearchResultCell {
    UILabel *_aggregateTextLabel;
    NSMutableArray *_colorDotViews;
    NSMutableArray *_titleTextLabels;
    UILabel *_xMoreLabel;
    NSAttributedString *_aggregateTitle;
    NSMutableArray *_eventCalendarColors;
    NSMutableArray *_eventTitles;
    NSArray *_cellConstraints;
}




+(CGFloat)cellHeightForResult:(id)arg0 forWidth:(CGFloat)arg1 ;
+(id)_aggregateTitleStringForAggregateResult:(id)arg0 ;
+(id)_titleStringForResult:(id)arg0 ;
+(id)reuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)setLabelFonts;
-(void)setupConstraints;
-(void)updateWithResult:(id)arg0 ;


@end


#endif