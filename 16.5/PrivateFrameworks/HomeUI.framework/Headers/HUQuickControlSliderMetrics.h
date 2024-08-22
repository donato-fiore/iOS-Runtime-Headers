// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUQUICKCONTROLSLIDERMETRICS_H
#define HUQUICKCONTROLSLIDERMETRICS_H


#import <Foundation/Foundation.h>

#import "HUIntrinsicSizeDescriptor.h"

@interface HUQuickControlSliderMetrics : NSObject

@property (readonly, nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, nonatomic) HUIntrinsicSizeDescriptor *sizeDescriptor; // ivar: _sizeDescriptor
@property (readonly, nonatomic) CGFloat widthToCornerRadiusRatio; // ivar: _widthToCornerRadiusRatio


-(id)initWithSizeDescriptor:(id)arg0 cornerRadius:(CGFloat)arg1 widthToCornerRadiusRatio:(CGFloat)arg2 ;


@end


#endif