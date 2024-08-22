// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOCTAGEDITORCOLORPICKERCELL_H
#define DOCTAGEDITORCOLORPICKERCELL_H

@class UICollectionViewCell, UIGestureRecognizer;


#import "DOCTagColorPicker.h"

@interface DOCTagEditorColorPickerCell : UICollectionViewCell

@property (readonly, nonatomic) UIGestureRecognizer *changeColorPanGestureRecognizer;
@property (retain, nonatomic) DOCTagColorPicker *colorPickerView; // ivar: _colorPickerView
@property (readonly, nonatomic) NSInteger selectedColor;


-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif