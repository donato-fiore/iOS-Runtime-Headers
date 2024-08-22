// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMAPERTURESTATUSINDICATOR_H
#define CAMAPERTURESTATUSINDICATOR_H



#import "CAMControlStatusIndicator.h"

@interface CAMApertureStatusIndicator : CAMControlStatusIndicator

@property (nonatomic) CGFloat apertureValue; // ivar: _apertureValue
@property (nonatomic, getter=isOn) BOOL on; // ivar: _on


-(BOOL)canShowValue;
-(BOOL)shouldUseActiveTintForCurrentState;
-(id)imageNameForCurrentState;
-(id)valueText;


@end


#endif