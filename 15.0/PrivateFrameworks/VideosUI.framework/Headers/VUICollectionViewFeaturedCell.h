// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUICOLLECTIONVIEWFEATUREDCELL_H
#define VUICOLLECTIONVIEWFEATUREDCELL_H



#import "VUIBaseCollectionViewCell.h"
#import "VUICollectionViewFeaturedView.h"

@interface VUICollectionViewFeaturedCell : VUIBaseCollectionViewCell

@property (retain, nonatomic) VUICollectionViewFeaturedView *featuredView; // ivar: _featuredView


+(CGFloat)_iOSLockupWidthWithWindowWidth:(CGFloat)arg0 safeAreaInsets:(struct UIEdgeInsets )arg1 showsPageControl:(BOOL)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_commonInitWithFrame:(struct CGRect )arg0 ;


@end


#endif