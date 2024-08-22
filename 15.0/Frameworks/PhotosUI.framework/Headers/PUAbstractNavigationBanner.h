// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUABSTRACTNAVIGATIONBANNER_H
#define PUABSTRACTNAVIGATIONBANNER_H

@class UIView;
@protocol PUAbstractNavigationBannerDelegate;

#import <Foundation/Foundation.h>


@interface PUAbstractNavigationBanner : NSObject

@property (weak, nonatomic) NSObject<PUAbstractNavigationBannerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CGFloat height;
@property (readonly, nonatomic) UIView *view;




@end


#endif