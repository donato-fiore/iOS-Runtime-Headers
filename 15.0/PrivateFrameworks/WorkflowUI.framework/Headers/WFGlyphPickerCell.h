// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFGLYPHPICKERCELL_H
#define WFGLYPHPICKERCELL_H

@class UICollectionViewCell;


#import "WFGlyphView.h"

@interface WFGlyphPickerCell : UICollectionViewCell

@property (nonatomic) unsigned short glyphCharacter;
@property (weak, nonatomic) WFGlyphView *glyphView; // ivar: _glyphView
@property (nonatomic) BOOL outline;


-(BOOL)isAccessibilityElement;
-(NSUInteger)accessibilityTraits;
-(id)accessibilityLabel;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif