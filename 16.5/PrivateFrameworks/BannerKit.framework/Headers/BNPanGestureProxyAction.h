// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BNPANGESTUREPROXYACTION_H
#define BNPANGESTUREPROXYACTION_H

@class BSAction, NSString, UIWindow;
@protocol BNPanGestureProxy;



@interface BNPanGestureProxyAction : BSAction <BNPanGestureProxy>



@property (copy, nonatomic) id *actionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL didCrossDefaultThreshold;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIWindow *serviceSideWindow; // ivar: _serviceSideWindow
@property (readonly, nonatomic) NSInteger state;
@property (readonly) Class superclass;


+(id)_infoFromPanGestureProxy:(id)arg0 window:(id)arg1 ;
-(id)initWithPanGestureProxy:(id)arg0 hostSideWindow:(id)arg1 ;
-(struct CGPoint )_convertPointInSceneReferenceSpace:(struct CGPoint )arg0 toCoordinateSpace:(id)arg1 ;
-(struct CGPoint )locationInCoordinateSpace:(id)arg0 ;
-(struct CGPoint )translationInCoordinateSpace:(id)arg0 ;
-(struct CGPoint )velocityInCoordinateSpace:(id)arg0 ;
-(struct CGPoint )visualTranslationInCoordinateSpace:(id)arg0 ;


@end


#endif