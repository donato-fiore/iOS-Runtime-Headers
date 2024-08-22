// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKTRANSITIONALIGNEDCUBE_H
#define OKTRANSITIONALIGNEDCUBE_H



#import "OKTransitionCATransition.h"

@interface OKTransitionAlignedCube : OKTransitionCATransition {
    NSUInteger _direction;
}




+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg0 ;
-(BOOL)needsToClip;
-(NSUInteger)settingDirection;
-(id)init;
-(id)initWithSettings:(id)arg0 ;
-(void)prepareInView:(id)arg0 ;
-(void)setSettingDirection:(NSUInteger)arg0 ;


@end


#endif