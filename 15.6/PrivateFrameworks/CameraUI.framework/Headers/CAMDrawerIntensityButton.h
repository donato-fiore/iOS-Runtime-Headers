// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMDRAWERINTENSITYBUTTON_H
#define CAMDRAWERINTENSITYBUTTON_H



#import "CAMControlDrawerCustomButton.h"

@interface CAMDrawerIntensityButton : CAMControlDrawerCustomButton

@property (nonatomic, getter=isOn) BOOL on; // ivar: _on


-(BOOL)shouldUseActiveTintForCurrentState;
-(NSInteger)controlType;
-(id)imageNameForCurrentState;


@end


#endif