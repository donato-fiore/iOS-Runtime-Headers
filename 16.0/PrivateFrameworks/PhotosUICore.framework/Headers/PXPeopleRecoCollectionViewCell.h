// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPEOPLERECOCOLLECTIONVIEWCELL_H
#define PXPEOPLERECOCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIImageView;



@interface PXPeopleRecoCollectionViewCell : UICollectionViewCell

@property (readonly, nonatomic) UIImageView *checkView; // ivar: _checkView
@property (readonly, nonatomic) UIImageView *faceView; // ivar: _faceView


-(BOOL)hasImageSet;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)prepareForReuse;
-(void)setImage:(id)arg0 contentsRect:(struct CGRect )arg1 ;
-(void)setIsRejected:(BOOL)arg0 ;


@end


#endif