// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVALERTTEMPLATEVIEW_H
#define _TVALERTTEMPLATEVIEW_H

@class UIView, UIImage, UIImageView, UICollectionView, NSArray;



@interface _TVAlertTemplateView : UIView {
    UIImage *_bgImage;
    UIImageView *_bgImageView;
}


@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (retain, nonatomic) NSArray *viewsAbove; // ivar: _viewsAbove
@property (retain, nonatomic) NSArray *viewsBelow; // ivar: _viewsBelow


-(void)layoutSubviews;
-(void)setBgImage:(id)arg0 ;


@end


#endif