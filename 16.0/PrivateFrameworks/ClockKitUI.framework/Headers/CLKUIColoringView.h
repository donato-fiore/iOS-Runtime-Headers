// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKUICOLORINGVIEW_H
#define CLKUICOLORINGVIEW_H

@class UIView, UIColor, NSString;
@protocol CLKUIColoringView;


#import "_CLKUIColorManager.h"

@interface CLKUIColoringView : UIView <CLKUIColoringView>

 {
    _CLKUIColorManager *_colorManager;
}


@property (retain, nonatomic) UIColor *color;
@property (readonly, nonatomic) UIColor *contentColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *overrideColor; // ivar: _overrideColor
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesLegibility;


-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif