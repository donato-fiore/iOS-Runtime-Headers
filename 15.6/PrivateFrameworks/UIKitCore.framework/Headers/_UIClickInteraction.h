// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICLICKINTERACTION_H
#define _UICLICKINTERACTION_H

@class NSString;
@protocol _UIClickInteractionDriverDelegate, UIInteraction_Private, UIInteraction_Internal, UIInteraction, _UIClickInteractionDelegate, _UIClickInteractionDriving, UIInteractionEffect;

#import <Foundation/Foundation.h>

#import "_UIClickFeedbackGenerator.h"
#import "UIView.h"

@interface _UIClickInteraction : NSObject <_UIClickInteractionDriverDelegate, UIInteraction_Private, UIInteraction_Internal, UIInteraction>



@property (nonatomic) CGFloat allowableMovement; // ivar: _allowableMovement
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIClickInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<_UIClickInteractionDriving> *driver; // ivar: _driver
@property (nonatomic) BOOL driverCancelsTouchesInView;
@property (retain, nonatomic) _UIClickFeedbackGenerator *feedbackGenerator; // ivar: _feedbackGenerator
@property (nonatomic) BOOL hapticsEnabled; // ivar: _hapticsEnabled
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<UIInteractionEffect> *interactionEffect; // ivar: _interactionEffect
@property (nonatomic, setter=_setOverrideDriverClass:) Class overrideDriverClass; // ivar: _overrideDriverClass
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIView *view; // ivar: _view


-(id)init;
-(struct CGPoint )locationInCoordinateSpace:(id)arg0 ;
-(void)_beginInteraction;
-(void)_createFeedbackGenerator;
-(void)_endInteraction;
-(void)_updateDriver;
-(void)_viewTraitCollectionDidChange:(id)arg0 ;
-(void)cancelInteraction;
-(void)clickDriver:(id)arg0 didPerformEvent:(NSUInteger)arg1 ;
-(void)clickDriver:(id)arg0 didUpdateHighlightProgress:(CGFloat)arg1 ;
-(void)clickDriver:(id)arg0 shouldBegin:(id)arg1 ;
-(void)didMoveToView:(id)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif