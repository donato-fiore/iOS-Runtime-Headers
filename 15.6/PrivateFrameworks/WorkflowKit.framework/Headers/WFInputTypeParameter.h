// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFINPUTTYPEPARAMETER_H
#define WFINPUTTYPEPARAMETER_H

@class NSString;
@protocol WFDynamicEnumerationDataSource;


#import "WFDynamicEnumerationParameter.h"

@interface WFInputTypeParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)allowsMultipleValues;
-(BOOL)parameterStateIsValid:(id)arg0 ;
-(BOOL)preferParameterValuePicker;
-(Class)singleStateClass;
-(id)accessoryIconForPossibleState:(id)arg0 ;
-(id)defaultSupportedVariableTypes;
-(id)enumeration:(id)arg0 localizedLabelForPossibleState:(id)arg1 ;
-(id)initWithDefinition:(id)arg0 ;
-(id)localizedLabelForMultipleCompleteState:(id)arg0 ;
-(id)possibleStatesForEnumeration:(id)arg0 ;
-(id)selectionType;
-(void)loadPossibleStatesForEnumeration:(id)arg0 searchTerm:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif