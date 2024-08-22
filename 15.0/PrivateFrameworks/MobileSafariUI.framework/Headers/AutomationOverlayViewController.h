// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AUTOMATIONOVERLAYVIEWCONTROLLER_H
#define AUTOMATIONOVERLAYVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol AutomationOverlayWindowDelegate, AutomationOverlayViewControllerDelegate;



@interface AutomationOverlayViewController : UIViewController <AutomationOverlayWindowDelegate>

 {
    id<AutomationOverlayViewControllerDelegate> *_delegate;
    BOOL _allowsUserInteraction;
    BOOL _showDebugUI;
    id *_resetTemporaryUserInteractionAllowedBlock;
}


@property (readonly, nonatomic) BOOL allowsUserInteraction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)automationWindowAllowsUserInteraction:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)_interceptUserInteraction;
-(void)_toggleAllowsUserInteractionTemporarily:(BOOL)arg0 ;
-(void)loadView;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif