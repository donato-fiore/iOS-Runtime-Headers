// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKEYBOARDDICATIONBACKGROUNDGRADIENTVIEW_H
#define UIKEYBOARDDICATIONBACKGROUNDGRADIENTVIEW_H

@class NSString;
@protocol _UIBasicAnimationFactory;


#import "UIView.h"
#import "UIDictationView.h"
#import "UIKBRenderConfig.h"

@interface UIKeyboardDicationBackgroundGradientView : UIView <_UIBasicAnimationFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIDictationView *dictationView; // ivar: _dictationView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIKBRenderConfig *renderConfig; // ivar: _renderConfig
@property (readonly) Class superclass;


-(id)_basicAnimationForView:(id)arg0 withKeyPath:(id)arg1 ;
-(id)_timingFunctionForAnimation;
-(id)backgroundColorForCurrentRenderConfig;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_backgroundFillFrame;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)startColorTransitionIn;
-(void)startColorTransitionOut;


@end


#endif