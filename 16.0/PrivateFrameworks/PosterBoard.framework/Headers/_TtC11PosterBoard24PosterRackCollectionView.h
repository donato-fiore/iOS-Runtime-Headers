// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11POSTERBOARD24POSTERRACKCOLLECTIONVIEW_H
#define _TTC11POSTERBOARD24POSTERRACKCOLLECTIONVIEW_H

@class UICollectionView;



@interface _TtC11PosterBoard24PosterRackCollectionView : UICollectionView {
    ? posterRackDelegate;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 collectionViewLayout:(id)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif