// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ININTENTTESTRESULT_H
#define ININTENTTESTRESULT_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "INIntentResponse.h"
#import "INIntent.h"

@interface INIntentTestResult : NSObject

@property (readonly, nonatomic) INIntentResponse *confirmResponse; // ivar: _confirmResponse
@property (readonly, nonatomic) INIntentResponse *handleResponse; // ivar: _handleResponse
@property (readonly, nonatomic) BOOL resolvedAllParametersSuccesfully; // ivar: _resolvedAllParametersSuccesfully
@property (readonly, nonatomic) INIntent *resolvedIntent; // ivar: _resolvedIntent
@property (readonly, copy, nonatomic) NSDictionary *resolvedParameters; // ivar: _resolvedParameters


-(id)description;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithResolvedIntent:(id)arg0 resolvedParameters:(id)arg1 resolvedAllParametersSuccesfully:(BOOL)arg2 confirmResponse:(id)arg3 handleResponse:(id)arg4 ;


@end


#endif