// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DPDATATYPEPARAMETERS_H
#define _DPDATATYPEPARAMETERS_H


#import <Foundation/Foundation.h>

#import "_DPPrivacyBudget.h"

@interface _DPDataTypeParameters : NSObject

@property (readonly, nonatomic) _DPPrivacyBudget *budget; // ivar: _budget
@property (readonly, nonatomic) float localPrivacyBudget; // ivar: _localPrivacyBudget


+(id)allDataTypeNames;
+(id)dataTypeParametersFromDictionary:(id)arg0 ;
+(id)initParametersForDataType:(id)arg0 ;
+(id)parametersFromFile:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif