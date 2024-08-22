// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFOCUSREGIONDEBUGDRAWINGCONFIGURATION_H
#define _UIFOCUSREGIONDEBUGDRAWINGCONFIGURATION_H


#import <Foundation/Foundation.h>

#import "UIColor.h"

@interface _UIFocusRegionDebugDrawingConfiguration : NSObject

@property (readonly, nonatomic) id *associatedObject; // ivar: _associatedObject
@property (readonly, nonatomic) UIColor *color; // ivar: _color
@property (readonly, nonatomic) BOOL dashedStroke; // ivar: _dashedStroke
@property (readonly, nonatomic) *CGPattern pattern; // ivar: _pattern
@property (readonly, nonatomic) CGFloat patternAlpha; // ivar: _patternAlpha


+(id)containerGuideConfigurationForRegion:(id)arg0 ;
+(id)guideConfigurationForRegion:(id)arg0 ;
+(id)itemConfigurationForRegion:(id)arg0 ;
+(id)promiseConfigurationForRegion:(id)arg0 ;
-(id)initWithRegion:(id)arg0 baseHue:(CGFloat)arg1 patternAlpha:(CGFloat)arg2 dashedStroke:(BOOL)arg3 ;


@end


#endif