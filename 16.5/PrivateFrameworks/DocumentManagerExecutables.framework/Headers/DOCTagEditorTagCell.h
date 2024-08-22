// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOCTAGEDITORTAGCELL_H
#define DOCTAGEDITORTAGCELL_H

@class UICollectionViewCell, DOCTag;


#import "_TtC26DocumentManagerExecutables24DOCHoverEffectController.h"
#import "DOCLargeTagView.h"

@interface DOCTagEditorTagCell : UICollectionViewCell

@property (retain, nonatomic) _TtC26DocumentManagerExecutables24DOCHoverEffectController *hoverEffectController; // ivar: _hoverEffectController
@property (nonatomic) BOOL mixedSelection; // ivar: _mixedSelection
@property (retain, nonatomic) DOCTag *tagValue;
@property (retain, nonatomic) DOCLargeTagView *tagView; // ivar: _tagView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)updateStyle;


@end


#endif