// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOPYEFFECTVIEWENTRY_H
#define _UICOPYEFFECTVIEWENTRY_H

@class UIVisualEffectViewEntry;


#import "_UIVisualEffectViewBackdropCaptureGroup.h"

@interface _UICopyEffectViewEntry : UIVisualEffectViewEntry

@property (retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *captureGroup; // ivar: _captureGroup


-(BOOL)canTransitionToEffect:(id)arg0 ;
-(id)description;
-(void)addEffectToView:(id)arg0 ;
-(void)removeEffectFromView:(id)arg0 ;


@end


#endif