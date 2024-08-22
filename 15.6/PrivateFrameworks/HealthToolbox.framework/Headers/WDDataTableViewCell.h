// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDDATATABLEVIEWCELL_H
#define WDDATATABLEVIEWCELL_H

@class UITableViewCell, UIFont, NSString, HKSource;



@interface WDDataTableViewCell : UITableViewCell

@property (retain, nonatomic) UIFont *bodyFont; // ivar: _bodyFont
@property (retain, nonatomic) NSString *dateString; // ivar: _dateString
@property (retain, nonatomic) NSString *displayValue; // ivar: _displayValue
@property (nonatomic) BOOL displayValueAdjustsFontSizeToFitWidth; // ivar: _displayValueAdjustsFontSizeToFitWidth
@property (retain, nonatomic) HKSource *source; // ivar: _source


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGRect )imageViewBounds;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_setupUI;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif