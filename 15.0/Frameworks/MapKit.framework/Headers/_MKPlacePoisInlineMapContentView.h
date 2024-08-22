// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MKPLACEPOISINLINEMAPCONTENTVIEW_H
#define _MKPLACEPOISINLINEMAPCONTENTVIEW_H

@class MKPlaceInlineMapContentView;


#import "_MKUILabel.h"

@interface _MKPlacePoisInlineMapContentView : MKPlaceInlineMapContentView {
    _MKUILabel *_storesLabel;
    _MKUILabel *_seeMoreLabel;
}


@property (nonatomic) BOOL visible; // ivar: _visible


-(BOOL)hasTitle;
-(BOOL)useImageView;
-(CGFloat)mapViewHeight;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)setLocationsNumber:(NSUInteger)arg0 ;


@end


#endif