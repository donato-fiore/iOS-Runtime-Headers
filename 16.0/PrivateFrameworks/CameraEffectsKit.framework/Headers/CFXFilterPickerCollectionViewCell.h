// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CFXFILTERPICKERCOLLECTIONVIEWCELL_H
#define CFXFILTERPICKERCOLLECTIONVIEWCELL_H

@class UIView, UILabel;


#import "CFXEffectPickerCollectionViewCell.h"

@interface CFXFilterPickerCollectionViewCell : CFXEffectPickerCollectionViewCell

@property (nonatomic, getter=isInCompactMode) BOOL compactMode; // ivar: _compactMode
@property (weak, nonatomic) UIView *selectionView; // ivar: _selectionView
@property (retain) UILabel *titleView; // ivar: _titleView


+(id)selectionColor;
-(void)CFX_updateLayerProperties;
-(void)CFX_updateSelectionView;
-(void)CFX_updateTitle;
-(void)configureCellAppearence;
-(void)prepareForReuse;
-(void)setEffect:(id)arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif