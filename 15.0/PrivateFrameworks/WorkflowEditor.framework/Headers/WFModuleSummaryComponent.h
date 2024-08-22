// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFMODULESUMMARYCOMPONENT_H
#define WFMODULESUMMARYCOMPONENT_H

@class WFAction, NSSet, NSString, NSDictionary;
@protocol WFComponentNavigationContext, WFModuleParameterStateWriter, WFVariableProvider, WFVariableUIDelegate;


#import "CKStatefulViewComponent.h"
#import "WFModuleAppearance.h"

@interface WFModuleSummaryComponent : CKStatefulViewComponent

@property (readonly, weak, nonatomic) WFAction *actionForRunningMonitoring; // ivar: _actionForRunningMonitoring
@property (readonly, nonatomic) WFModuleAppearance *appearance; // ivar: _appearance
@property (readonly, copy, nonatomic) NSSet *editableParameters; // ivar: _editableParameters
@property (readonly, nonatomic) BOOL extendSlotBackgroundOffEdges; // ivar: _extendSlotBackgroundOffEdges
@property (readonly, nonatomic) NSString *firstResponderParameterKey; // ivar: _firstResponderParameterKey
@property (readonly, nonatomic) CGFloat horizontalPadding; // ivar: _horizontalPadding
@property (readonly, weak, nonatomic) NSObject<WFComponentNavigationContext> *navigationContext; // ivar: _navigationContext
@property (readonly, copy, nonatomic) NSDictionary *parameterStates; // ivar: _parameterStates
@property (readonly, copy, nonatomic) NSSet *parameters; // ivar: _parameters
@property (readonly, nonatomic) BOOL preparingToRun; // ivar: _preparingToRun
@property (readonly, nonatomic) BOOL processing; // ivar: _processing
@property (readonly, copy, nonatomic) NSDictionary *stagedParameterStates; // ivar: _stagedParameterStates
@property (readonly, weak, nonatomic) NSObject<WFModuleParameterStateWriter> *stateWriter; // ivar: _stateWriter
@property (readonly, copy, nonatomic) NSString *summaryFormatString; // ivar: _summaryFormatString
@property (readonly, nonatomic) NSInteger textAlignment; // ivar: _textAlignment
@property (readonly, weak, nonatomic) NSObject<WFVariableProvider> *variableProvider; // ivar: _variableProvider
@property (readonly, weak, nonatomic) NSObject<WFVariableUIDelegate> *variableUIDelegate; // ivar: _variableUIDelegate


+(id)newWithSummaryFormatString:(id)arg0 parameters:(id)arg1 editableParameters:(id)arg2 parameterStates:(id)arg3 processing:(BOOL)arg4 appearance:(id)arg5 stateWriter:(id)arg6 variableProvider:(id)arg7 variableUIDelegate:(id)arg8 navigationContext:(id)arg9 firstResponderParameterKey:(id)arg10 horizontalPadding:(CGFloat)arg11 textAlignment:(NSInteger)arg12 extendSlotBackgroundOffEdges:(BOOL)arg13 actionForRunningMonitoring:(id)arg14 preparingToRun:(BOOL)arg15 ;
-(struct CKComponentLayout )computeLayoutThatFits:(struct CKSizeRange )arg0 ;
-(void)reflowWithStagedParameterStates:(id)arg0 ;


@end


#endif