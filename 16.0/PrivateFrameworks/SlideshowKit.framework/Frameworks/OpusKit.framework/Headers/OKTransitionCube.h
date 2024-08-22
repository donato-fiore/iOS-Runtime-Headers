// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OKTRANSITIONCUBE_H
#define OKTRANSITIONCUBE_H



#import "OKTransitionCATransition.h"

@interface OKTransitionCube : OKTransitionCATransition {
    NSUInteger _direction;
}




+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg0 ;
-(BOOL)needsToBeFront;
-(NSUInteger)settingDirection;
-(id)init;
-(id)initWithSettings:(id)arg0 ;
-(void)prepareInView:(id)arg0 ;
-(void)setSettingDirection:(NSUInteger)arg0 ;


@end


#endif