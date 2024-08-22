// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMLOWLIGHTSTATUSINDICATOR_H
#define CAMLOWLIGHTSTATUSINDICATOR_H



#import "CAMControlStatusIndicator.h"

@interface CAMLowLightStatusIndicator : CAMControlStatusIndicator

@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic, getter=isLowLightDisabled) BOOL lowLightDisabled; // ivar: _lowLightDisabled
@property (nonatomic) NSInteger lowLightMode; // ivar: _lowLightMode


-(BOOL)canShowValue;
-(BOOL)shouldFillOutlineForCurrentState;
-(BOOL)shouldShowOutlineForCurrentState;
-(BOOL)shouldShowSlashForCurrentState;
-(BOOL)shouldUseActiveTintForCurrentState;
-(BOOL)shouldUseSlash;
-(id)imageNameForAXHUD;
-(id)imageNameForCurrentState;
-(id)valueText;


@end


#endif