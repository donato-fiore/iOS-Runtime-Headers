// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFPARAMETER_H
#define WFPARAMETER_H

@class NSDictionary, NSSet, NSHashTable, NSString;

#import <Foundation/Foundation.h>

#import "WFResourceManager.h"

@interface WFParameter : NSObject

@property (readonly, nonatomic) BOOL allowsMultipleValues; // ivar: _allowsMultipleValues
@property (readonly, copy, nonatomic) NSDictionary *arraySizesBySizeClass; // ivar: _arraySizesBySizeClass
@property (readonly, copy, nonatomic) id *defaultSerializedRepresentation; // ivar: _defaultSerializedRepresentation
@property (readonly, nonatomic) NSSet *defaultSupportedVariableTypes; // ivar: _defaultSupportedVariableTypes
@property (readonly, copy, nonatomic) NSDictionary *definition; // ivar: _definition
@property (readonly, nonatomic) NSSet *disallowedVariableTypes; // ivar: _disallowedVariableTypes
@property (readonly, nonatomic) BOOL displaysMultipleValueEditor;
@property (readonly, nonatomic) BOOL doNotLocalizePlaceholder; // ivar: _doNotLocalizePlaceholder
@property (readonly, nonatomic) BOOL doNotLocalizeValues; // ivar: _doNotLocalizeValues
@property (readonly, nonatomic) NSHashTable *eventObservers; // ivar: _eventObservers
@property (readonly, nonatomic, getter=isFixedSizeArray) BOOL fixedSizeArray; // ivar: _fixedSizeArray
@property (nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (readonly, nonatomic) NSString *importQuestionBehavior; // ivar: _importQuestionBehavior
@property (readonly, nonatomic, getter=isInsideWorkflow) BOOL insideWorkflow; // ivar: _insideWorkflow
@property (readonly, nonatomic) NSString *intentSlotName; // ivar: _intentSlotName
@property (nonatomic) BOOL isEditingForConfiguration; // ivar: _isEditingForConfiguration
@property (readonly, copy, nonatomic) NSString *key; // ivar: _key
@property (readonly, copy, nonatomic) NSString *keyForSerialization; // ivar: _keyForSerialization
@property (readonly, copy, nonatomic) NSString *legacyKey; // ivar: _legacyKey
@property (copy, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (readonly, copy, nonatomic) NSString *localizedLabel; // ivar: _localizedLabel
@property (copy, nonatomic) NSString *localizedPlaceholder; // ivar: _localizedPlaceholder
@property (copy, nonatomic) NSString *localizedPrompt; // ivar: _localizedPrompt
@property (readonly, nonatomic) WFResourceManager *resourceManager; // ivar: _resourceManager
@property (readonly, nonatomic) BOOL shouldAlignLabels; // ivar: _shouldAlignLabels
@property (readonly, nonatomic) BOOL stripsTTSHints;
@property (readonly, nonatomic) NSSet *supportedVariableTypes; // ivar: _supportedVariableTypes


+(id)allInsertableVariableTypes;
+(id)parameterWithDefinition:(id)arg0 ;
+(id)referencedActionResourceClasses;
-(BOOL)parameterStateIsValid:(id)arg0 ;
-(Class)multipleStateClass;
-(Class)singleStateClass;
-(Class)stateClass;
-(NSInteger)arraySizeForWidgetSizeClass:(id)arg0 ;
-(id)initWithDefinition:(id)arg0 ;
-(void)addEventObserver:(id)arg0 ;
-(void)attributesDidChange;
-(void)removeEventObserver:(id)arg0 ;
-(void)setActionResources:(id)arg0 ;
-(void)stateValidityCriteriaDidChange;
-(void)wasAddedToWorkflow;
-(void)wasRemovedFromWorkflow;


@end


#endif