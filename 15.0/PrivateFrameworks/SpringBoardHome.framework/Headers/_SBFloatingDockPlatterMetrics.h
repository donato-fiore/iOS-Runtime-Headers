// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SBFLOATINGDOCKPLATTERMETRICS_H
#define _SBFLOATINGDOCKPLATTERMETRICS_H


#import <Foundation/Foundation.h>


@interface _SBFloatingDockPlatterMetrics : NSObject

@property (readonly, nonatomic) CGRect bounds; // ivar: _bounds
@property (readonly, nonatomic) CGFloat continuousCornerRadius; // ivar: _continuousCornerRadius
@property (readonly, nonatomic) CGFloat shadowRadius; // ivar: _shadowRadius
@property (readonly, nonatomic) CGFloat shadowYOffset; // ivar: _shadowYOffset


-(id)initWithBounds:(struct CGRect )arg0 continuousCornerRadius:(CGFloat)arg1 shadowRadius:(CGFloat)arg2 shadowYOffset:(CGFloat)arg3 ;


@end


#endif