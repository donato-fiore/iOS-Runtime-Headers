// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFUNIFIEDTABBARLAYOUTCONFIGURATION_H
#define SFUNIFIEDTABBARLAYOUTCONFIGURATION_H

@class UIScrollView;

#import <Foundation/Foundation.h>

#import "SFUnifiedTabBarMetrics.h"

@interface SFUnifiedTabBarLayoutConfiguration : NSObject

@property (retain, nonatomic) SFUnifiedTabBarMetrics *barMetrics; // ivar: _barMetrics
@property (nonatomic) BOOL flipped; // ivar: _flipped
@property (nonatomic) CGPoint midpointForCenteredContent; // ivar: _midpointForCenteredContent
@property (readonly, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (nonatomic, getter=isStandalone) BOOL standalone; // ivar: _standalone
@property (nonatomic) CGRect visibleRectOverride; // ivar: _visibleRectOverride


-(id)initWithScrollView:(id)arg0 ;


@end


#endif