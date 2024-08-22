// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFMATERIALSTYLABLETABLEVIEWCELL_H
#define WFMATERIALSTYLABLETABLEVIEWCELL_H

@class UITableViewCell, MTVisualStylingProvider, UIView, UIColor;



@interface WFMaterialStylableTableViewCell : UITableViewCell

@property (retain, nonatomic) MTVisualStylingProvider *fillProvider; // ivar: _fillProvider
@property (retain, nonatomic) UIView *highlightedBackgroundView; // ivar: _highlightedBackgroundView
@property (retain, nonatomic) UIColor *overridingBackgroundColor; // ivar: _overridingBackgroundColor


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;


@end


#endif