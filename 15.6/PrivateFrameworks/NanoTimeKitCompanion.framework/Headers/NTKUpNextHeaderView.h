// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKUPNEXTHEADERVIEW_H
#define NTKUPNEXTHEADERVIEW_H

@class UICollectionReusableView, CLKTextProvider;


#import "NTKColoringLabel.h"

@interface NTKUpNextHeaderView : UICollectionReusableView {
    NTKColoringLabel *_label;
}


@property (copy, nonatomic) CLKTextProvider *textProvider; // ivar: _textProvider


-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif