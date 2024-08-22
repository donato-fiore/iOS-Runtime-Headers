// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWKUIAQISEGMENTEDVIEW_H
#define NWKUIAQISEGMENTEDVIEW_H

@class UIView, NSArray;


#import "NWKUIAQISegmentedModel.h"

@interface NWKUIAQISegmentedView : UIView {
    ? _constraints;
    CGFloat _lastLayoutHeight;
    NSArray *_segmentViews;
}


@property (readonly) NWKUIAQISegmentedModel *model; // ivar: _model


-(id)initWithModel:(id)arg0 constraints:(struct ? )arg1 ;
-(struct CGSize )intrinsicContentSize;
-(void)_addSubviewsFromModel:(id)arg0 ;
-(void)layoutSubviews;
-(void)updateModel:(id)arg0 ;


@end


#endif