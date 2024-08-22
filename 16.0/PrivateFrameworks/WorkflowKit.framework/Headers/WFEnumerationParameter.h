// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFENUMERATIONPARAMETER_H
#define WFENUMERATIONPARAMETER_H

@class NSString, NSArray;
@protocol WFParameterValuePickable, WFParameterDialogProvider;


#import "WFParameter.h"

@interface WFEnumerationParameter : WFParameter <WFParameterValuePickable, WFParameterDialogProvider>



@property (readonly, nonatomic) BOOL alwaysShowsButton; // ivar: _alwaysShowsButton
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *displayNames; // ivar: _displayNames
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL hideClearButton; // ivar: _hideClearButton
@property (readonly, nonatomic) BOOL hidesAccessoryIconInEditor;
@property (readonly, nonatomic) BOOL hidesSubtitleInEditor;
@property (readonly, nonatomic) BOOL liveUpdatesPossibleStatesInEditor; // ivar: _liveUpdatesPossibleStatesInEditor
@property (readonly, nonatomic) NSArray *possibleStates;
@property (readonly, nonatomic) NSArray *possibleStatesForLocalization;
@property (readonly, nonatomic) BOOL preferContextMenu;
@property (readonly, nonatomic) BOOL preferParameterValuePicker;
@property (readonly, nonatomic) BOOL providesLocalizedValuesForSummary; // ivar: _providesLocalizedValuesForSummary
@property (readonly, nonatomic) NSString *selectionType; // ivar: _selectionType
@property (readonly, nonatomic) NSArray *staticPossibleStates; // ivar: _staticPossibleStates
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *symbolNames; // ivar: _symbolNames
@property (readonly, nonatomic) NSString *tableViewStyle; // ivar: _tableViewStyle
@property (readonly, nonatomic) BOOL wf_allowsMultipleSelection;
@property (readonly, nonatomic) BOOL wf_alwaysScaleIconImage;
@property (readonly, nonatomic) NSString *wf_displayLocalizedPrompt;
@property (readonly, nonatomic) BOOL wf_shouldValidateCurrentStateOnCollectionChanged;
@property (readonly, nonatomic) BOOL wf_supportsSearch;
@property (readonly, nonatomic) BOOL wf_usesGroupTableViewStyle;
@property (readonly, nonatomic) BOOL wf_usesTogglesForSelection;


-(BOOL)displaysMultipleValueEditor;
-(BOOL)parameterStateIsValid:(id)arg0 ;
-(Class)singleStateClass;
-(id)accessoryColorForPossibleState:(id)arg0 ;
-(id)accessoryIconForPossibleState:(id)arg0 ;
-(id)accessoryImageForPossibleState:(id)arg0 ;
-(id)initWithDefinition:(id)arg0 ;
-(id)localizedLabelForMultipleCompleteState:(id)arg0 ;
-(id)localizedLabelForMultipleState:(id)arg0 ;
-(id)localizedLabelForPossibleState:(id)arg0 ;
-(id)localizedLabelForPossibleState:(id)arg0 inMultipleState:(id)arg1 ;
-(id)localizedSubtitleLabelForPossibleState:(id)arg0 ;
-(id)localizedTitleForButtonWithState:(id)arg0 ;
-(id)parameterStateFromDialogResponse:(id)arg0 ;
-(id)wf_pickerLocalizedIconForState:(id)arg0 ;
-(id)wf_pickerLocalizedImageForState:(id)arg0 ;
-(id)wf_pickerLocalizedSubtitleForState:(id)arg0 ;
-(id)wf_pickerLocalizedTitleForState:(id)arg0 ;
-(void)createDialogRequestWithAttribution:(id)arg0 defaultState:(id)arg1 prompt:(id)arg2 completionHandler:(id)arg3 ;
-(void)startLiveUpdatingPossibleStates;
-(void)stopLiveUpdatingPossibleStates;
-(void)wf_loadStatesWithSearchTerm:(id)arg0 completionHandler:(id)arg1 ;
-(void)wf_reloadFromAttributesDidChangeWithCompletionHandler:(id)arg0 ;


@end


#endif