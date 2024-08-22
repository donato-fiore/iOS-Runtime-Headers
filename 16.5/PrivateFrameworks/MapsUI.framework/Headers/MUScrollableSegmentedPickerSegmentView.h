// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUSCROLLABLESEGMENTEDPICKERSEGMENTVIEW_H
#define MUSCROLLABLESEGMENTEDPICKERSEGMENTVIEW_H

@class UIControl, UILabel;


#import "MUEdgeLayout.h"
#import "MUScrollableSegmentedPickerCategory.h"

@interface MUScrollableSegmentedPickerSegmentView : UIControl {
    UILabel *_label;
    MUEdgeLayout *_edgeLayout;
}


@property (retain, nonatomic) MUScrollableSegmentedPickerCategory *viewModel; // ivar: _viewModel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupLabel;
-(void)_updateAppearance;
-(void)_updateFont;
-(void)_updateSelectionAppearance;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif