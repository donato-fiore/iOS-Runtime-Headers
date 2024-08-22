// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11POSTERBOARD24POSTERCOLLECTIONVIEWCELL_H
#define _TTC11POSTERBOARD24POSTERCOLLECTIONVIEWCELL_H

@class UICollectionViewCell;



@interface _TtC11PosterBoard24PosterCollectionViewCell : UICollectionViewCell {
    ? posterCornerRadius;
    ? layoutMode;
    ? scaleInAlongsideLayoutMode;
}


@property (nonatomic, readonly) BOOL layoutModeUsesFullscreenSizedMetrics;


-(BOOL)_descendantsShouldHighlight;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif