// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCHOOSEFROMMENUACTION_H
#define WFCHOOSEFROMMENUACTION_H

@class NSString;
@protocol WFArrayParameterEventObserver, WFVariableDelegate;


#import "WFControlFlowAction.h"
#import "WFVariableString.h"

@interface WFChooseFromMenuAction : WFControlFlowAction <WFArrayParameterEventObserver, WFVariableDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) WFVariableString *itemTitle; // ivar: _itemTitle
@property (readonly, nonatomic) NSInteger latestMenuChoice; // ivar: _latestMenuChoice
@property (readonly) Class superclass;


-(BOOL)ignoresOutputFromAction:(id)arg0 inWorkflow:(id)arg1 ;
-(BOOL)inputPassthrough;
-(BOOL)inputRequired;
-(NSUInteger)numberOfActionsIncludedWithAction:(id)arg0 ;
-(id)createAccompanyingActions;
-(id)defaultOutputName;
-(id)initWithIdentifier:(id)arg0 definition:(id)arg1 serializedParameters:(id)arg2 ;
-(id)inputSourceInWorkflow:(id)arg0 ;
-(id)intermediaryActions;
-(id)name;
-(id)newIntermediaryActionWithMenuItemTitle:(id)arg0 ;
-(id)serializedParameters;
-(void)arrayParameter:(id)arg0 confirmDeletionOfItemAtIndex:(NSUInteger)arg1 withHandler:(id)arg2 ;
-(void)arrayParameter:(id)arg0 itemWasInserted:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)arrayParameter:(id)arg0 itemWasMovedFromIndex:(NSUInteger)arg1 toIndex:(NSUInteger)arg2 ;
-(void)arrayParameter:(id)arg0 itemWasUpdatedAtIndex:(NSUInteger)arg1 toValue:(id)arg2 ;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)showAlertWithInput:(id)arg0 ;
-(void)variableDidChange:(id)arg0 ;


@end


#endif