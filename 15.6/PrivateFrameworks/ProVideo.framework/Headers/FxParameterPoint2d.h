// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FXPARAMETERPOINT2D_H
#define FXPARAMETERPOINT2D_H



#import "FxPinParameter.h"

@interface FxParameterPoint2d : FxPinParameter {
    *FxParameterPoint2dPriv _point2dPriv;
}




-(BOOL)isCanvasRelative;
-(BOOL)isTranslation;
-(id)init;
-(void)dealloc;
-(void)setIsCanvasRelative:(BOOL)arg0 ;
-(void)setIsTranslation:(BOOL)arg0 ;


@end


#endif