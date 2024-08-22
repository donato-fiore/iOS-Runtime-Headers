// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFEEDBACKVISUALIZER_H
#define _UIFEEDBACKVISUALIZER_H

@class NSMapTable;

#import <Foundation/Foundation.h>

#import "UIWindow.h"

@interface _UIFeedbackVisualizer : NSObject

@property (retain, nonatomic) NSMapTable *engineLayers; // ivar: _engineLayers
@property (retain, nonatomic) UIWindow *visualFeedbackWindow; // ivar: _visualFeedbackWindow


+(id)sharedVisualizer;
-(id)_colorForEngine:(id)arg0 ;
-(id)_colorForEngineState:(NSInteger)arg0 ;
-(id)_colorForFeedback:(id)arg0 ;
-(id)_monogramForEngine:(id)arg0 ;
-(id)init;
-(void)_showVisualForFeedback:(id)arg0 ;
-(void)_updateEngine:(id)arg0 ;
-(void)addEngine:(id)arg0 ;
-(void)cancelVisualForFeedback:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)showVisualForFeedback:(id)arg0 withDelay:(CGFloat)arg1 ;


@end


#endif