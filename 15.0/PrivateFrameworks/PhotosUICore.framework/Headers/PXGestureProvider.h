// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGESTUREPROVIDER_H
#define PXGESTUREPROVIDER_H

@class NSArray, UIView;
@protocol PXGestureProviderDelegate;

#import <Foundation/Foundation.h>


@interface PXGestureProvider : NSObject

@property (weak, nonatomic) NSObject<PXGestureProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSArray *gestureRecognizers; // ivar: _gestureRecognizers
@property (weak, nonatomic) UIView *hostingView; // ivar: _hostingView




@end


#endif