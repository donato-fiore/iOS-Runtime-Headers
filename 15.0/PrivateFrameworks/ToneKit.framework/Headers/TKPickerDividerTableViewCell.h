// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TKPICKERDIVIDERTABLEVIEWCELL_H
#define TKPICKERDIVIDERTABLEVIEWCELL_H

@class UITableViewCell, UIView, UIColor;



@interface TKPickerDividerTableViewCell : UITableViewCell {
    UIView *_dividerView;
}


@property (nonatomic) NSInteger contentBackdropOverlayBlendMode; // ivar: _contentBackdropOverlayBlendMode
@property (retain, nonatomic) UIColor *contentBackgroundColor;


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGRect )_dividerViewFrame;
-(void)layoutSubviews;
-(void)setSeparatorStyle:(NSInteger)arg0 ;


@end


#endif