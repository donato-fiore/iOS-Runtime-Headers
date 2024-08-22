// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFDYNAMICRESOLVEPARAMETER_H
#define WFDYNAMICRESOLVEPARAMETER_H

@class INCodableAttribute, NSString, INStringLocalizer;
@protocol WFParameterValuePickable, WFCodableAttributeBackedParameter, WFDynamicResolveParameterDataSource, WFDynamicResolveParameterDelegate;


#import "WFParameter.h"

@interface WFDynamicResolveParameter : WFParameter <WFParameterValuePickable, WFCodableAttributeBackedParameter>



@property (retain, nonatomic) INCodableAttribute *codableAttribute; // ivar: _codableAttribute
@property (weak, nonatomic) NSObject<WFDynamicResolveParameterDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFDynamicResolveParameterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) INStringLocalizer *stringLocalizer; // ivar: _stringLocalizer
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wf_allowsMultipleSelection;
@property (readonly, nonatomic) BOOL wf_alwaysScaleIconImage;
@property (readonly, nonatomic) NSString *wf_displayLocalizedPrompt;
@property (readonly, nonatomic) BOOL wf_shouldValidateCurrentStateOnCollectionChanged;
@property (readonly, nonatomic) BOOL wf_supportsSearch;
@property (readonly, nonatomic) BOOL wf_usesGroupTableViewStyle;
@property (readonly, nonatomic) BOOL wf_usesTogglesForSelection;


-(Class)singleStateClass;
-(id)initWithDefinition:(id)arg0 ;
-(id)localizedLabelForState:(id)arg0 ;
-(id)wf_pickerLocalizedImageForState:(id)arg0 ;
-(id)wf_pickerLocalizedSubtitleForState:(id)arg0 ;
-(id)wf_pickerLocalizedTitleForState:(id)arg0 ;
-(void)endResolutionSession;
-(void)localizedDisambiguationPromptForItems:(id)arg0 intent:(id)arg1 completion:(id)arg2 ;
-(void)resolveOptionsForUserInput:(id)arg0 completionBlock:(id)arg1 ;
-(void)wf_loadStatesWithSearchTerm:(id)arg0 completionHandler:(id)arg1 ;
-(void)wf_reloadFromAttributesDidChangeWithCompletionHandler:(id)arg0 ;


@end


#endif