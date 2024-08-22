// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKUITABLEVIEWCELL_H
#define EKUITABLEVIEWCELL_H

@class UITableViewCell, UIVisualEffectView, UIColor, UIVisualEffect;


#import "RowSeparatorView.h"

@interface EKUITableViewCell : UITableViewCell {
    UIVisualEffectView *_bottomRowSeparatorParentView;
    RowSeparatorView *_bottomSeparatorViewForNonOpaqueTables;
    UIVisualEffectView *_topRowSeparatorParentView;
    RowSeparatorView *_topSeparatorViewForNonOpaqueTables;
}


@property (nonatomic) BOOL disableSelectedBackground; // ivar: _disableSelectedBackground
@property (nonatomic) BOOL drawsOwnRowSeparators; // ivar: _drawsOwnRowSeparators
@property (retain, nonatomic) UIColor *rowSeparatorColor; // ivar: _rowSeparatorColor
@property (retain, nonatomic) UIVisualEffect *rowSeparatorVisualEffect; // ivar: _rowSeparatorVisualEffect
@property (nonatomic) NSUInteger separatorEdges; // ivar: _separatorEdges
@property (nonatomic) BOOL usesInsetMargin; // ivar: _usesInsetMargin


+(BOOL)vibrant;
+(CGFloat)rowSeparatorThickness;
+(id)reuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)separatorParentView;
-(id)separatorView;
-(void)_layoutSeparator;
-(void)_setMarginExtendsToFullWidth:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)updateConfigurationUsingState:(id)arg0 ;
-(void)updateRowSeparators;


@end


#endif