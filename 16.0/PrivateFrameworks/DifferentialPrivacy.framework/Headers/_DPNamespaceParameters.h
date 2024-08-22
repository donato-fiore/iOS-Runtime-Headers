// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DPNAMESPACEPARAMETERS_H
#define _DPNAMESPACEPARAMETERS_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "_DPPrivacyBudget.h"

@interface _DPNamespaceParameters : NSObject

@property (retain, nonatomic) NSArray *allowedDataTypes; // ivar: _allowedDataTypes
@property (readonly, nonatomic) _DPPrivacyBudget *budget; // ivar: _budget


+(id)allNamespaceNames;
+(id)initParametersForNamespace:(id)arg0 ;
+(id)namespaceParametersFromDictionary:(id)arg0 ;
+(id)parametersFromFile:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif