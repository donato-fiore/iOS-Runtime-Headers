// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIPAGEINDICATORVIEW_H
#define _UIPAGEINDICATORVIEW_H



#import "UIImageView.h"

@interface _UIPageIndicatorView : UIImageView {
    CGSize _cachedSize;
}


@property (nonatomic) NSInteger page; // ivar: _page


-(BOOL)isInvalidated;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithImage:(id)arg0 ;
-(struct CGSize )sizeForImage:(id)arg0 withTraitCollection:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)invalidate;
-(void)prepare;
-(void)setImage:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateSymbolConfigurationForTraitCollection;


@end


#endif