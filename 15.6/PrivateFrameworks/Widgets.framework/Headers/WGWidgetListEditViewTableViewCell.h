// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WGWIDGETLISTEDITVIEWTABLEVIEWCELL_H
#define WGWIDGETLISTEDITVIEWTABLEVIEWCELL_H

@class UITableViewCell, UIImageView, UIButton;



@interface WGWidgetListEditViewTableViewCell : UITableViewCell {
    UIImageView *_dotImageView;
}


@property (readonly, weak, nonatomic) UIButton *insertWidgetAccessoryButton; // ivar: _insertWidgetAccessoryButton
@property (nonatomic) BOOL showsDot; // ivar: _showsDot
@property (nonatomic, getter=isWidgetEnabled) BOOL widgetEnabled; // ivar: _widgetEnabled


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif