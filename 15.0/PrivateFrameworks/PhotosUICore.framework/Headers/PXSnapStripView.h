// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSNAPSTRIPVIEW_H
#define PXSNAPSTRIPVIEW_H

@class UIView, NSArray;


#import "PXSnapStripViewInternal.h"

@interface PXSnapStripView : UIView {
    PXSnapStripViewInternal *_stripView;
}


@property (copy, nonatomic) NSArray *indicatorInfos; // ivar: _indicatorInfos


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateStripView:(BOOL)arg0 ;
-(void)layoutSubviews;


@end


#endif