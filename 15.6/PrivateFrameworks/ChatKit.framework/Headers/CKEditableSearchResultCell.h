// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKEDITABLESEARCHRESULTCELL_H
#define CKEDITABLESEARCHRESULTCELL_H

@class UICollectionViewCell, UIImageView;



@interface CKEditableSearchResultCell : UICollectionViewCell

@property (nonatomic, getter=_ck_isEditing, setter=_ck_setEditing:) BOOL _ck_editing; // ivar: __ck_editing
@property (retain, nonatomic) UIImageView *checkmarkView; // ivar: _checkmarkView
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) UIImageView *selectionOverlay; // ivar: _selectionOverlay


-(BOOL)__im_ff_systemImageAdoptionEnabled;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif