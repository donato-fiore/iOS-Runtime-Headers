// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIPOINTERINTERACTIONASSISTANT_H
#define _UIPOINTERINTERACTIONASSISTANT_H

@class NSMutableDictionary, NSString;
@protocol _UIViewSubtreeMonitor, UIPointerInteractionDelegate;


#import "UIPointerInteraction.h"
#import "UIView.h"
#import "UIWindow.h"

@interface _UIPointerInteractionAssistant : UIPointerInteraction <_UIViewSubtreeMonitor, UIPointerInteractionDelegate>

 {
    UIView *_previewContainer;
    UIWindow *_monitoredWindow;
    NSMutableDictionary *_assistants;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView *previewContainer;
@property (readonly) Class superclass;


-(BOOL)_monitorsView:(id)arg0 ;
-(id)_assistantForView:(id)arg0 ;
-(id)createPreviewTargetForView:(id)arg0 center:(struct CGPoint )arg1 ;
-(id)createRegionFromRect:(struct CGRect )arg0 targetView:(id)arg1 identifier:(id)arg2 selected:(BOOL)arg3 ;
-(id)createStyleForButton:(id)arg0 shapeProvider:(id)arg1 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGPoint )request:(id)arg0 locationInView:(id)arg1 ;
-(void)_monitoredView:(id)arg0 didMoveFromSuperview:(id)arg1 toSuperview:(id)arg2 ;
-(void)_monitoredView:(id)arg0 willMoveFromSuperview:(id)arg1 toSuperview:(id)arg2 ;
-(void)_updatePointerInteractionForSubtree:(id)arg0 suppressInteractions:(BOOL)arg1 ;
-(void)pointerInteraction:(id)arg0 willEnterRegion:(id)arg1 animator:(id)arg2 ;
-(void)pointerInteraction:(id)arg0 willExitRegion:(id)arg1 animator:(id)arg2 ;
-(void)setAssistedView:(id)arg0 identifier:(id)arg1 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif