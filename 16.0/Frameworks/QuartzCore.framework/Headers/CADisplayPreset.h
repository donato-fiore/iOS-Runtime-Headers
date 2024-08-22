// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CADISPLAYPRESET_H
#define CADISPLAYPRESET_H


#import <Foundation/Foundation.h>

#import "CAUserAdjustment.h"

@interface CADisplayPreset : NSObject

@property (readonly) BOOL allowAutoBrightness; // ivar: _allowAutoBrightness
@property (readonly) BOOL allowNightShift; // ivar: _allowNightShift
@property (readonly) BOOL allowTrueTone; // ivar: _allowTrueTone
@property (readonly) BOOL isReference; // ivar: _isReference
@property (readonly) CGFloat maxSliderBrightness; // ivar: _maxSliderBrightness
@property (readonly) CGFloat minSliderBrightness; // ivar: _minSliderBrightness
@property (readonly) CAUserAdjustment *userAdjustment; // ivar: _userAdjustment


-(id)initWithIsReference:(BOOL)arg0 userAdjustment:(id)arg1 ;
-(void)applyUserAdjustmentCommand:(id)arg0 ;
-(void)dealloc;


@end


#endif