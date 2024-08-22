// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITEXTMODERNLOUPESESSION_H
#define UITEXTMODERNLOUPESESSION_H


#import <Foundation/Foundation.h>

#import "UITextGestureTuning.h"
#import "UIView.h"
#import "UITextModernLoupeView.h"

@interface UITextModernLoupeSession : NSObject

@property (nonatomic) CGFloat caretInitialOffsetX; // ivar: _caretInitialOffsetX
@property (retain, nonatomic) UITextGestureTuning *gestureTuning; // ivar: _gestureTuning
@property (weak, nonatomic) UIView *interactionView; // ivar: _interactionView
@property (retain, nonatomic) UITextModernLoupeView *loupeView; // ivar: _loupeView


+(id)beginLoupeSessionAtPoint:(struct CGPoint )arg0 withCaretRect:(struct CGRect )arg1 fromView:(id)arg2 ;
-(struct CGPoint )_locationInContainerCoordinateSpace:(struct CGPoint )arg0 ;
-(void)dealloc;
-(void)didMoveToPoint:(struct CGPoint )arg0 withCaretRect:(struct CGRect )arg1 tracksCaret:(BOOL)arg2 ;


@end


#endif