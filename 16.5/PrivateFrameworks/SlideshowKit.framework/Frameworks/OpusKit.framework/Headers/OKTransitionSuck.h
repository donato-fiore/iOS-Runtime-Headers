// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKTRANSITIONSUCK_H
#define OKTRANSITIONSUCK_H



#import "OKTransitionCATransition.h"

@interface OKTransitionSuck : OKTransitionCATransition {
    CGPoint _location;
}




+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg0 ;
-(id)initWithSettings:(id)arg0 ;
-(struct CGPoint )settingLocation;
-(void)prepareInView:(id)arg0 ;
-(void)setSettingLocation:(struct CGPoint )arg0 ;


@end


#endif