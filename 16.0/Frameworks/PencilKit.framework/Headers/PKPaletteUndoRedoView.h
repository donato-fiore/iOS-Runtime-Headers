// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPALETTEUNDOREDOVIEW_H
#define PKPALETTEUNDOREDOVIEW_H

@class UIView, NSString, NSLayoutConstraint, UIStackView;
@protocol PKPaletteEdgeLocating, PKPaletteViewSizeScaling, PKPaletteUndoRedoViewDelegate;


#import "PKPaletteButton.h"

@interface PKPaletteUndoRedoView : UIView <PKPaletteEdgeLocating, PKPaletteViewSizeScaling>



@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaletteUndoRedoViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger edgeLocation; // ivar: _edgeLocation
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat interItemSpacing; // ivar: _interItemSpacing
@property (retain, nonatomic) PKPaletteButton *redoButton; // ivar: _redoButton
@property (retain, nonatomic) NSLayoutConstraint *redoButtonHeightConstraint; // ivar: _redoButtonHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *redoButtonWidthConstraint; // ivar: _redoButtonWidthConstraint
@property (nonatomic, getter=isRedoEnabled) BOOL redoEnabled; // ivar: _redoEnabled
@property (nonatomic) CGFloat scalingFactor; // ivar: _scalingFactor
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (readonly) Class superclass;
@property (retain, nonatomic) PKPaletteButton *undoButton; // ivar: _undoButton
@property (retain, nonatomic) NSLayoutConstraint *undoButtonHeightConstraint; // ivar: _undoButtonHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *undoButtonWidthConstraint; // ivar: _undoButtonWidthConstraint
@property (nonatomic, getter=isUndoEnabled) BOOL undoEnabled; // ivar: _undoEnabled


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_buttonSize;
-(struct CGSize )intrinsicContentSize;
-(void)_updateUI;
-(void)handleRedo:(id)arg0 ;
-(void)handleUndo:(id)arg0 ;
-(void)installRedoButton;
-(void)installStackView;
-(void)installUndoButton;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)updateUI;


@end


#endif