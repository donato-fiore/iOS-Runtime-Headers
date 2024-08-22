// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXTEXTTANGIERCANVASVIEWCONTROLLER_H
#define SXTEXTTANGIERCANVASVIEWCONTROLLER_H

@class TSWPiOSCanvasViewController;



@interface SXTextTangierCanvasViewController : TSWPiOSCanvasViewController

@property (nonatomic) BOOL selectionEnabled; // ivar: _selectionEnabled


-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)interactionShouldBegin:(id)arg0 atPoint:(struct CGPoint )arg1 ;
-(NSInteger)overrideUserInterfaceStyle;
-(id)actionForHyperlink:(id)arg0 inRep:(id)arg1 gesture:(id)arg2 ;
-(id)targetForAction:(SEL)arg0 withSender:(id)arg1 ;
-(void)dealloc;
-(void)interactionDidEnd:(id)arg0 ;
-(void)loadView;
-(void)selectAll:(id)arg0 ;


@end


#endif