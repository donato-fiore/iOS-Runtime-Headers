// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKPHOTOSMALLATTRIBUTIONVIEW_H
#define MKPHOTOSMALLATTRIBUTIONVIEW_H

@class UIView;


#import "_MKUILabel.h"

@interface MKPhotoSmallAttributionView : UIView {
    _MKUILabel *_label;
    UIView *_backgroundView;
    CGSize _labelSize;
}




-(id)attributionFont;
-(id)initWithMapItem:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)layoutSubviews;


@end


#endif