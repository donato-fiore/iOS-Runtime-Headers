// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKGROUPCOLLECTIONVIEWCELL_H
#define CKGROUPCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIView;



@interface CKGroupCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *avatarView; // ivar: _avatarView


+(id)reuseIdentifier;
-(BOOL)shouldHighlight;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;


@end


#endif