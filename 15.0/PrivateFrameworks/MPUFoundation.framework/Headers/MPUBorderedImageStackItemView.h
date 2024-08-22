// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPUBORDEREDIMAGESTACKITEMVIEW_H
#define MPUBORDEREDIMAGESTACKITEMVIEW_H

@class UIImageView;


#import "MPUImageStackItemView.h"
#import "MPUBorderConfiguration.h"
#import "MPUBorderDrawingCache.h"

@interface MPUBorderedImageStackItemView : MPUImageStackItemView {
    UIImageView *_borderImageView;
}


@property (copy, nonatomic) MPUBorderConfiguration *borderConfiguration; // ivar: _borderConfiguration
@property (retain, nonatomic) MPUBorderDrawingCache *borderDrawingCache; // ivar: _borderDrawingCache


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_borderDrawingCacheWasInvalidated:(id)arg0 ;
-(void)_updateBorderImageView;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif