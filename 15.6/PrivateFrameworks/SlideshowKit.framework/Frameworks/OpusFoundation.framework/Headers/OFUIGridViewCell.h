// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OFUIGRIDVIEWCELL_H
#define OFUIGRIDVIEWCELL_H

@class UIView, UILongPressGestureRecognizer, NSString, NSMutableArray, UITapGestureRecognizer;
@protocol UIGestureRecognizerDelegate;


#import "OFUIGridViewItem.h"

@interface OFUIGridViewCell : UIView <UIGestureRecognizerDelegate>

 {
    UILongPressGestureRecognizer *_longPressRecognizer;
    BOOL _continuousSelection;
    BOOL _selected;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger index; // ivar: _index
@property (retain, nonatomic) OFUIGridViewItem *item; // ivar: _item
@property (readonly, retain, nonatomic) NSMutableArray *operations; // ivar: _operations
@property (readonly, copy, nonatomic) NSString *reuseIdentifier; // ivar: _reuseIdentifier
@property (readonly, retain, nonatomic) UITapGestureRecognizer *selectAllRecognizer; // ivar: _selectAllRecognizer
@property (readonly, retain, nonatomic) UITapGestureRecognizer *singleTapRecognizer; // ivar: _singleTapRecognizer
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)hasOperations;
-(NSUInteger)countOperations;
-(id)gridView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(id)newDraggingItem;
-(id)selectionColor;
-(void)_setHighlightedOnCell:(BOOL)arg0 ;
-(void)addOperation:(id)arg0 ;
-(void)cancelAllOperations;
-(void)commonInit;
-(void)dealloc;
-(void)enumerateOperations:(id)arg0 ;
-(void)handleSelectAll:(id)arg0 ;
-(void)handleTap:(id)arg0 ;
-(void)removeOperation:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)showSelectionBorder:(BOOL)arg0 ;
-(void)startDragging:(id)arg0 ;


@end


#endif