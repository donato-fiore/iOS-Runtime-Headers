// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUQUICKCONTROLSTEPPERVIEWMETRICS_H
#define HUQUICKCONTROLSTEPPERVIEWMETRICS_H


#import <Foundation/Foundation.h>

#import "HUIntrinsicSizeDescriptor.h"

@interface HUQuickControlStepperViewMetrics : NSObject

@property (readonly, nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, nonatomic) NSUInteger orientation; // ivar: _orientation
@property (readonly, nonatomic) HUIntrinsicSizeDescriptor *sizeDescriptor; // ivar: _sizeDescriptor


-(id)initWithSizeDescriptor:(id)arg0 orientation:(NSUInteger)arg1 cornerRadius:(CGFloat)arg2 ;


@end


#endif