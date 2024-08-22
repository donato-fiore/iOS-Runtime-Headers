// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKADORNMENTVIEW_H
#define PKADORNMENTVIEW_H

@class UIView;
@protocol PKSelectionRendering;


#import "PKImageView.h"
#import "PKSelectionController.h"
#import "PKStrokeSelection.h"
#import "PKStrokeSelectionImage.h"

@interface PKAdornmentView : UIView {
    PKImageView *_strokeSelectionImageView;
    BOOL _isInteracting;
}


@property (weak, nonatomic) PKSelectionController *selectionController; // ivar: _selectionController
@property (retain, nonatomic) NSObject<PKSelectionRendering> *selectionRenderer; // ivar: _selectionRenderer
@property (retain, nonatomic) PKStrokeSelection *strokeSelection; // ivar: _strokeSelection
@property (retain, nonatomic) PKStrokeSelectionImage *strokeSelectionImage; // ivar: _strokeSelectionImage


+(Class)classForSelectionType:(NSInteger)arg0 ;
-(BOOL)containsPoint:(struct CGPoint )arg0 forInputType:(NSInteger)arg1 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 strokeSelection:(id)arg1 selectionController:(id)arg2 selectionType:(NSInteger)arg3 ;
-(void)_hideStrokeSelectionImageView:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_liftStrokesOutOfTiledView;
-(void)_putStrokesBackIntoTiledViewAnimated:(BOOL)arg0 ;


@end


#endif