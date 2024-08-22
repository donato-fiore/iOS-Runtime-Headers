// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNACTIONSVIEW_H
#define CNACTIONSVIEW_H

@class UIView, NSMutableDictionary, NUIContainerStackView, NSString, NSArray, UIFont;
@protocol CNActionViewDelegate, NUIContainerViewDelegate, CNActionsViewProtocol;



@interface CNActionsView : UIView <CNActionViewDelegate, NUIContainerViewDelegate>



@property (retain, nonatomic) NSMutableDictionary *actionItemsByType; // ivar: _actionItemsByType
@property (retain, nonatomic) NSMutableDictionary *actionViewsByType; // ivar: _actionViewsByType
@property (weak, nonatomic) NSObject<CNActionsViewProtocol> *actionsDelegate; // ivar: _actionsDelegate
@property (retain, nonatomic) NUIContainerStackView *containerView; // ivar: _containerView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *sortedActionTypes; // ivar: _sortedActionTypes
@property (nonatomic) CGFloat spacing; // ivar: _spacing
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (retain, nonatomic) UIFont *titleFont; // ivar: _titleFont


+(NSInteger)axisWithTitlesPresent:(BOOL)arg0 ;
-(BOOL)actionViewShouldPresentDisambiguationUI:(id)arg0 ;
-(NSUInteger)insertionIndexForType:(id)arg0 ;
-(id)actionViewForType:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)addActionItem:(id)arg0 ;
-(void)didPressActionView:(id)arg0 longPress:(BOOL)arg1 ;
-(void)removeActionItem:(id)arg0 ;
-(void)resetActions;
-(void)updateActionItem:(id)arg0 ;
-(void)updateAxis;


@end


#endif