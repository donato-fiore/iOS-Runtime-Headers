// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVRTOUCHPADVIEW_H
#define TVRTOUCHPADVIEW_H

@class UIView;


#import "_TVRButtonHaptic.h"
#import "TVRTouchProcessor.h"

@interface TVRTouchpadView : UIView

@property (copy, nonatomic) id *configurationHandler; // ivar: _configurationHandler
@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (retain, nonatomic) _TVRButtonHaptic *haptic; // ivar: _haptic
@property (readonly, nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (weak, nonatomic) TVRTouchProcessor *touchProcessor; // ivar: _touchProcessor


-(id)_init;
-(void)_notifyConfigurationHandler:(BOOL)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif