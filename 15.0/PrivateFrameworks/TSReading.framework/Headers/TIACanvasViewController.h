// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIACANVASVIEWCONTROLLER_H
#define TIACANVASVIEWCONTROLLER_H

@class UIGestureRecognizer;


#import "TSWPiOSCanvasViewController.h"
#import "TSAInteractiveCanvasController.h"

@interface TIACanvasViewController : TSWPiOSCanvasViewController

@property UIGestureRecognizer *hyperlinkGestureRecognizer;
@property (readonly, nonatomic) TSAInteractiveCanvasController *interactiveCanvasController;


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)wantsHyperlinkGestureRecognizer;
-(id)commonGestureRecognizers;
-(id)p_LocalGestureRecognizers;
-(void)setUpGestureRecognizers;


@end


#endif