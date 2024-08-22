// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDDATATABLEVIEWCELL_H
#define WDDATATABLEVIEWCELL_H

@class UITableViewCell, UIImageView, UILabel, UIFont, NSString, HKSource;



@interface WDDataTableViewCell : UITableViewCell {
    UIImageView *_imageView;
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
}


@property (retain, nonatomic) UIFont *bodyFont; // ivar: _bodyFont
@property (retain, nonatomic) NSString *dateString; // ivar: _dateString
@property (retain, nonatomic) NSString *displayValue; // ivar: _displayValue
@property (nonatomic) BOOL displayValueAdjustsFontSizeToFitWidth; // ivar: _displayValueAdjustsFontSizeToFitWidth
@property (retain, nonatomic) HKSource *source; // ivar: _source


-(id)detailTextLabel;
-(id)imageView;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)textLabel;
-(struct CGRect )detailTextLabelFrame;
-(struct CGRect )imageViewFrame;
-(struct CGRect )textLabelFrame;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif