// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUQUICKCONTROLBACKGROUNDEFFECTVIEW_H
#define HUQUICKCONTROLBACKGROUNDEFFECTVIEW_H

@class UIView;



@interface HUQuickControlBackgroundEffectView : UIView

@property (readonly, nonatomic) NSUInteger effectType; // ivar: _effectType


-(id)initWithEffectType:(NSUInteger)arg0 ;
-(void)_configureForCurrentEffectType;
-(void)tintColorDidChange;


@end


#endif