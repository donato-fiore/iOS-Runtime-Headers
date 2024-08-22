// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRLIKENESSVIEW_H
#define PRLIKENESSVIEW_H

@class UIView, NSData, PRLikeness;


#import "PRMonogramView.h"
#import "PRImageView.h"

@interface PRLikenessView : UIView {
    PRMonogramView *_monogramView;
    PRImageView *_imageView;
    NSUInteger _likenessType;
    NSData *_recipe;
    CGRect _cropRect;
    *CGImage _staticRepresentation;
}


@property (nonatomic, getter=isCircular) BOOL circular; // ivar: _circular
@property (nonatomic) BOOL highlighted; // ivar: _highlighted
@property (retain, nonatomic) PRLikeness *likeness; // ivar: _likeness
@property (nonatomic) BOOL shouldDecode; // ivar: _shouldDecode


+(void)initialize;
-(BOOL)_isLikenessEqual:(id)arg0 ;
-(BOOL)_shouldRenderStaticRepresentation;
-(id)_imageView;
-(id)_monogramView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithLikeness:(id)arg0 ;
-(void)_imageForLikeness:(id)arg0 completion:(id)arg1 ;
-(void)_setDisplayedView:(id)arg0 ;
-(void)_updateViewForLikeness:(BOOL)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setNeedsRedraw;


@end


#endif