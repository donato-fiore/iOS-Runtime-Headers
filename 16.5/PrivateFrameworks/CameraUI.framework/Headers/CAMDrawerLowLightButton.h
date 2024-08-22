// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMDRAWERLOWLIGHTBUTTON_H
#define CAMDRAWERLOWLIGHTBUTTON_H



#import "CAMControlDrawerCustomButton.h"

@interface CAMDrawerLowLightButton : CAMControlDrawerCustomButton

@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (nonatomic, getter=isOn) BOOL on; // ivar: _on


-(BOOL)adjustsImageWhenDisabled;
-(BOOL)shouldShowSlashForCurrentState;
-(BOOL)shouldUseActiveTintForCurrentState;
-(BOOL)shouldUseSlash;
-(NSInteger)controlType;
-(id)imageNameForAXHUD;
-(id)imageNameForCurrentState;


@end


#endif