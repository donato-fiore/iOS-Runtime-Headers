// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKEDITABLECOLLECTIONVIEWCELL_H
#define CKEDITABLECOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIImageView;



@interface CKEditableCollectionViewCell : UICollectionViewCell

@property (nonatomic, getter=_ck_isEditing, setter=_ck_setEditing:) BOOL _ck_editing; // ivar: __ck_editing
@property (retain, nonatomic) UIImageView *checkmark; // ivar: _checkmark
@property (readonly, nonatomic) UIEdgeInsets contentAlignmentInsets;
@property (nonatomic) CGRect contentAlignmentRect; // ivar: _contentAlignmentRect
@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (nonatomic) BOOL hidesCheckmark; // ivar: _hidesCheckmark
@property (nonatomic) UIEdgeInsets marginInsets; // ivar: _marginInsets


-(BOOL)__im_ff_systemImageAdoptionEnabled;
-(id)description;
-(struct UIEdgeInsets )_horizontalSafeAreaInsets;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)updateCheckmarkImage;


@end


#endif