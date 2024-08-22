// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NTKCFACEDETAILPIGMENTADDCELL_H
#define _NTKCFACEDETAILPIGMENTADDCELL_H

@class NTKCFaceDetailCollectionCell, UIButton;
@protocol _NTKCFaceDetailPigmentAddCellDelegate;



@interface _NTKCFaceDetailPigmentAddCell : NTKCFaceDetailCollectionCell {
    UIButton *_button;
}


@property (weak, nonatomic) NSObject<_NTKCFaceDetailPigmentAddCellDelegate> *delegate; // ivar: _delegate


+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_tapped;
-(void)layoutSubviews;
-(void)setActive:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setImage:(id)arg0 ;


@end


#endif