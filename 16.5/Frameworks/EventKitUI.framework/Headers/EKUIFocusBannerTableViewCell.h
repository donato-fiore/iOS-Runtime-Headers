// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKUIFOCUSBANNERTABLEVIEWCELL_H
#define EKUIFOCUSBANNERTABLEVIEWCELL_H

@class UITableViewCell, UIButton, UIListContentView, NSArray;
@protocol EKUIFocusBannerTableViewCellDelegate;



@interface EKUIFocusBannerTableViewCell : UITableViewCell {
    UIButton *_focusFilterToggleButton;
    UIListContentView *_listContentView;
    NSArray *_constraints;
}


@property (weak, nonatomic) NSObject<EKUIFocusBannerTableViewCellDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL on; // ivar: _on


-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)_tapped;
-(void)_updateView;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif