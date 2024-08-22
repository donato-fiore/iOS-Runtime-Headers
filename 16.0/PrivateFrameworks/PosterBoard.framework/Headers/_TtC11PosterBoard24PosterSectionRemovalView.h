// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11POSTERBOARD24POSTERSECTIONREMOVALVIEW_H
#define _TTC11POSTERBOARD24POSTERSECTIONREMOVALVIEW_H

@class UICollectionReusableView, UIButton;



@interface _TtC11PosterBoard24PosterSectionRemovalView : UICollectionReusableView {
    ? delegate;
    ? posterID;
    ? deleteButtonDimension;
}


@property (nonatomic, retain) UIButton *deleteButton; // ivar: deleteButton


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif