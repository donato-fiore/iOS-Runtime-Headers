// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOCTHUMBNAILFITTINGIMAGEVIEW_H
#define DOCTHUMBNAILFITTINGIMAGEVIEW_H

@class FPItem, NSURL;


#import "DOCBorderedFittingImageView.h"

@interface DOCThumbnailFittingImageView : DOCBorderedFittingImageView

@property (nonatomic) NSInteger generatorGeneration; // ivar: _generatorGeneration
@property (readonly, nonatomic) FPItem *item; // ivar: _item
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(id)initWithCoder:(id)arg0 ;
-(id)initWithSize:(struct CGSize )arg0 item:(id)arg1 ;
-(id)initWithSize:(struct CGSize )arg0 url:(id)arg1 ;
-(void)_commonInitWithSize:(struct CGSize )arg0 ;
-(void)didMoveToWindow;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateThumbnail;
-(void)updateThumbnailForItem:(id)arg0 ;
-(void)updateThumbnailForURL:(id)arg0 ;


@end


#endif