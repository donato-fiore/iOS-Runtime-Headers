// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFMEDIAROUTEPICKERPARAMETER_H
#define WFMEDIAROUTEPICKERPARAMETER_H

@class WFDynamicEnumerationParameter, NSString;
@protocol WFParameterValuePickable, WFDynamicEnumerationDataSource, WFMediaRoutePickerObserver;


#import "WFMediaRoutePicker.h"

@interface WFMediaRoutePickerParameter : WFDynamicEnumerationParameter <WFParameterValuePickable, WFDynamicEnumerationDataSource, WFMediaRoutePickerObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WFMediaRoutePicker *routePicker; // ivar: _routePicker
@property (readonly, nonatomic) NSInteger routeType;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wf_allowsMultipleSelection;
@property (readonly, nonatomic) BOOL wf_alwaysScaleIconImage;
@property (readonly, nonatomic) NSString *wf_displayLocalizedPrompt;
@property (readonly, nonatomic) BOOL wf_shouldValidateCurrentStateOnCollectionChanged;
@property (readonly, nonatomic) BOOL wf_supportsSearch;
@property (readonly, nonatomic) BOOL wf_usesGroupTableViewStyle;
@property (readonly, nonatomic) BOOL wf_usesTogglesForSelection;


-(BOOL)hidesAccessoryIconInEditor;
-(BOOL)liveUpdatesPossibleStatesInEditor;
-(BOOL)parameterStateIsValid:(id)arg0 ;
-(BOOL)preferParameterValuePicker;
-(BOOL)shouldDefaultToLocalDeviceEndpoint;
-(Class)singleStateClass;
-(id)accessoryImageForPossibleState:(id)arg0 ;
-(id)defaultSerializedRepresentationForEnumeration:(id)arg0 ;
-(id)enumeration:(id)arg0 localizedLabelForPossibleState:(id)arg1 ;
-(id)initWithDefinition:(id)arg0 ;
-(id)localizedLabelForPossibleState:(id)arg0 ;
-(id)sortedStatesForAvailableRoutes:(id)arg0 ;
-(void)loadPossibleStatesForEnumeration:(id)arg0 searchTerm:(id)arg1 completionHandler:(id)arg2 ;
-(void)routePickerDidUpdateAvailableRoutes:(id)arg0 ;
-(void)startDiscoveringRoutes;
-(void)startLiveUpdatingPossibleStates;
-(void)stopDiscoveringRoutes;
-(void)stopLiveUpdatingPossibleStates;


@end


#endif