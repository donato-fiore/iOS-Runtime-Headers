// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOCTAGEDITORTAGCELL_H
#define DOCTAGEDITORTAGCELL_H

@class UICollectionViewCell, DOCTag;


#import "DOCLargeTagView.h"

@interface DOCTagEditorTagCell : UICollectionViewCell

@property (nonatomic) BOOL mixedSelection; // ivar: _mixedSelection
@property (retain, nonatomic) DOCTag *tagValue;
@property (retain, nonatomic) DOCLargeTagView *tagView; // ivar: _tagView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)updateStyle;


@end


#endif