// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYRULEPERSONCELL_H
#define PXSHAREDLIBRARYRULEPERSONCELL_H

@class UICollectionViewCell, UIImageView, PHPerson, UIButton, UILabel;



@interface PXSharedLibraryRulePersonCell : UICollectionViewCell

@property (readonly, nonatomic) UIImageView *faceImageView; // ivar: _faceImageView
@property (retain, nonatomic) PHPerson *imagePerson;
@property (readonly, nonatomic) UIButton *minusButton; // ivar: _minusButton
@property (readonly, nonatomic) UIImageView *minusImageView; // ivar: _minusImageView
@property (readonly, nonatomic) UILabel *nameLabel; // ivar: _nameLabel
@property (readonly, nonatomic) UIImageView *plusImageView; // ivar: _plusImageView
@property (nonatomic) SEL removeAction; // ivar: _removeAction
@property (weak, nonatomic) id *removeTarget; // ivar: _removeTarget
@property (readonly, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateMinusButton;
-(void)prepareForReuse;
-(void)remove:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif