// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIACTIVITYACTIONCELL_H
#define UIACTIVITYACTIONCELL_H

@class UICollectionViewListCell, UIVisualEffectView, UIView;



@interface UIActivityActionCell : UICollectionViewListCell

@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (retain, nonatomic) UIVisualEffectView *effectView; // ivar: _effectView
@property (retain, nonatomic) UIView *fillView; // ivar: _fillView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif