// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSELECTIONGESTUREVIEW_H
#define PKSELECTIONGESTUREVIEW_H

@class UIView;


#import "PKSelectionController.h"
#import "PKSelectionInteraction.h"

@interface PKSelectionGestureView : UIView

@property (weak, nonatomic) PKSelectionController *selectionController; // ivar: _selectionController
@property (retain, nonatomic) PKSelectionInteraction *selectionInteraction; // ivar: _selectionInteraction


-(id)initWithFrame:(struct CGRect )arg0 selectionController:(id)arg1 ;
-(void)didMoveToWindow;


@end


#endif