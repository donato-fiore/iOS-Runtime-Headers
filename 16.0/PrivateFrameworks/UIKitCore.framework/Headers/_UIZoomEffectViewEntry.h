// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIZOOMEFFECTVIEWENTRY_H
#define _UIZOOMEFFECTVIEWENTRY_H

@class UIVisualEffectViewEntry;



@interface _UIZoomEffectViewEntry : UIVisualEffectViewEntry

@property (nonatomic) CGFloat zoomAmount; // ivar: _zoomAmount


-(BOOL)canTransitionToEffect:(id)arg0 ;
-(BOOL)shouldAnimateProperty:(id)arg0 ;
-(id)description;
-(void)applyIdentityEffectToView:(id)arg0 ;
-(void)applyRequestedEffectToView:(id)arg0 ;
-(void)convertToIdentity;
-(void)removeEffectFromView:(id)arg0 ;


@end


#endif