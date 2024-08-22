// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXLAYOUTPARAMETERS_H
#define SXLAYOUTPARAMETERS_H


#import <Foundation/Foundation.h>

#import "SXLayoutOptions.h"

@interface SXLayoutParameters : NSObject

@property (readonly, nonatomic) CGFloat expectedDuration; // ivar: _expectedDuration
@property (readonly, nonatomic) SXLayoutOptions *layoutOptions; // ivar: _layoutOptions
@property (readonly, nonatomic) NSUInteger layoutType; // ivar: _layoutType


-(id)description;
-(id)initWithLayoutOptions:(id)arg0 layoutType:(NSUInteger)arg1 expectedDuration:(CGFloat)arg2 ;


@end


#endif