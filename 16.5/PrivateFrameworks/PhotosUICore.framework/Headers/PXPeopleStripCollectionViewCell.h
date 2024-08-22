// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPEOPLESTRIPCOLLECTIONVIEWCELL_H
#define PXPEOPLESTRIPCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, NSArray;



@interface PXPeopleStripCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) NSArray *groupAvatarViews; // ivar: _groupAvatarViews
@property (retain, nonatomic) NSArray *people; // ivar: _people


-(id)focusEffect;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_layoutAvatarViewsInFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif