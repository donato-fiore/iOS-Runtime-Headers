// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFINTERCHANGEACTION_H
#define WFINTERCHANGEACTION_H

@class INAppDescriptor, NSArray;


#import "WFAction.h"
#import "ICAction.h"

@interface WFInterchangeAction : WFAction {
    INAppDescriptor *_appDescriptor;
}


@property (retain, nonatomic) NSArray *contentClasses; // ivar: _contentClasses
@property (readonly, nonatomic) ICAction *interchangeAction; // ivar: _interchangeAction
@property (readonly, nonatomic) BOOL requiresCallback;


-(BOOL)appResourceRequiresAppInstall;
-(BOOL)callbackIsCurrentlyDisabled;
-(BOOL)inputPassthrough;
-(BOOL)inputRequired;
-(BOOL)inputsMultipleItems;
-(BOOL)isDiscontinued;
-(BOOL)isDiscoverable;
-(BOOL)mappedValueIsTrue:(id)arg0 forContentMapping:(id)arg1 ;
-(BOOL)neverSuggested;
-(BOOL)outputsMultipleItems;
-(BOOL)shouldSuppressCallback;
-(BOOL)skipsProcessingHiddenParameters;
-(id)app;
-(id)appDescriptor;
-(id)categories;
-(id)creationDate;
-(id)description;
-(id)descriptionDictionary;
-(id)disabledPlatformsForInterchangeActionWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 definition:(id)arg1 serializedParameters:(id)arg2 ;
-(id)initWithInterchangeAction:(id)arg0 identifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 ;
-(id)initWithInterchangeAction:(id)arg0 serializedParameters:(id)arg1 ;
-(id)inputContentClasses;
-(id)inputParameterKey;
-(id)keywords;
-(id)lastModifiedDate;
-(id)name;
-(id)outputContentClasses;
-(id)parameterSummary;
-(id)requiredResources;
-(id)shortName;
-(id)specifiedInputContentClasses;
-(id)specifiedOutputContentClasses;
-(id)subcategoryForCategory:(id)arg0 ;
-(id)userInterfaceTypes;
// -(void)performActionWithInput:(id)arg0 parameters:(id)arg1 userInterface:(id)arg2 successHandler:(id)arg3 errorHandler:(unk)arg4  ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)setAppDescriptor:(id)arg0 ;


@end


#endif