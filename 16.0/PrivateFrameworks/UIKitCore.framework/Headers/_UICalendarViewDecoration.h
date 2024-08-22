// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICALENDARVIEWDECORATION_H
#define _UICALENDARVIEWDECORATION_H

@protocol _UICalendarViewDecorationProviding;

#import <Foundation/Foundation.h>

#import "UIView.h"

@interface _UICalendarViewDecoration : NSObject <_UICalendarViewDecorationProviding>



@property (retain, nonatomic, setter=_setDecorationView:) UIView *_decorationView; // ivar: _decorationView


-(id)_decorationViewForReuseView:(id)arg0 ;


@end


#endif