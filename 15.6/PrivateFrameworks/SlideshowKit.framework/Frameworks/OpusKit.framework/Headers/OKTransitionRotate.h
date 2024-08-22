// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OKTRANSITIONROTATE_H
#define OKTRANSITIONROTATE_H



#import "OKTransitionCATransition.h"

@interface OKTransitionRotate : OKTransitionCATransition {
    NSUInteger _direction;
}




+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg0 ;
-(BOOL)needsToClip;
-(NSUInteger)settingRotationDirection;
-(id)init;
-(id)initWithSettings:(id)arg0 ;
-(void)prepareInView:(id)arg0 ;
-(void)setSettingRotationDirection:(NSUInteger)arg0 ;


@end


#endif