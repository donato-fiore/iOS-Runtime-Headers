// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDICTIONARYPARAMETER_H
#define WFDICTIONARYPARAMETER_H

@class NSSet, NSString;


#import "WFParameter.h"

@interface WFDictionaryParameter : WFParameter

@property (readonly, nonatomic) NSSet *allowedValueTypes; // ivar: _allowedValueTypes
@property (readonly, nonatomic) NSString *localizedItemTypeName; // ivar: _localizedItemTypeName
@property (readonly, nonatomic) NSString *localizedNewItemTypeName; // ivar: _localizedNewItemTypeName


-(BOOL)allowsMultipleValues;
-(Class)singleStateClass;
-(id)defaultSupportedVariableTypes;
-(id)initWithDefinition:(id)arg0 ;


@end


#endif