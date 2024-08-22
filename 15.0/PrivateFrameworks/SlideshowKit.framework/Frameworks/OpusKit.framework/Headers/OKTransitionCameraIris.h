// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKTRANSITIONCAMERAIRIS_H
#define OKTRANSITIONCAMERAIRIS_H



#import "OKTransitionCATransition.h"

@interface OKTransitionCameraIris : OKTransitionCATransition {
    CGPoint _location;
}




+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg0 ;
-(BOOL)needsToClip;
-(id)initWithSettings:(id)arg0 ;
-(struct CGPoint )settingLocation;
-(void)prepareInView:(id)arg0 ;
-(void)setSettingLocation:(struct CGPoint )arg0 ;


@end


#endif