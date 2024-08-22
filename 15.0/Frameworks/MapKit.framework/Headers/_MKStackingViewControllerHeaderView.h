// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MKSTACKINGVIEWCONTROLLERHEADERVIEW_H
#define _MKSTACKINGVIEWCONTROLLERHEADERVIEW_H

@class UIView, NSString;


#import "_MKUILabel.h"

@interface _MKStackingViewControllerHeaderView : UIView {
    _MKUILabel *_titleLabel;
}


@property (copy, nonatomic) NSString *title;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;


@end


#endif