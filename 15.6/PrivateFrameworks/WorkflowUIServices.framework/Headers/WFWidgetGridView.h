// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFWIDGETGRIDVIEW_H
#define WFWIDGETGRIDVIEW_H

@class UIView, NSString, NSArray;
@protocol WFWidgetCellDelegate, WFWidgetGridViewDelegate, OS_os_log;



@interface WFWidgetGridView : UIView <WFWidgetCellDelegate>



@property (readonly, nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFWidgetGridViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger family; // ivar: _family
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *lastKnownContentSizeCategory; // ivar: _lastKnownContentSizeCategory
@property (nonatomic) CGSize lastKnownSize; // ivar: _lastKnownSize
@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *workflows; // ivar: _workflows


-(BOOL)cellExistsAtIndex:(NSUInteger)arg0 ;
-(id)cellAtIndex:(NSUInteger)arg0 ;
-(id)cellForWorkflowWithIdentifier:(id)arg0 ;
-(id)initWithFamily:(NSInteger)arg0 cornerRadius:(CGFloat)arg1 log:(id)arg2 ;
-(id)workflowIdentifiersForVisibleCells;
-(void)disableAllCellsExceptCell:(id)arg0 ;
-(void)enableAllCells;
-(void)layoutWithWorkflows:(id)arg0 ;
-(void)widgetCellDidTransitionToState:(NSInteger)arg0 ;
-(void)widgetCellWasTapped:(id)arg0 ;


@end


#endif