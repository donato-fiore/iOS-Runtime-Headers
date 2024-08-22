// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ININTENTTESTRESOLVEDPARAMETER_H
#define ININTENTTESTRESOLVEDPARAMETER_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "INExtensionContextSlotResolutionResult.h"
#import "INIntent.h"
#import "INIntentSlotDescription.h"

@interface INIntentTestResolvedParameter : NSObject

@property (readonly, nonatomic) INExtensionContextSlotResolutionResult *extensionContextResolutionResult; // ivar: _extensionContextResolutionResult
@property (readonly, copy, nonatomic) INIntent *intent; // ivar: _intent
@property (readonly, copy, nonatomic) NSString *parameter; // ivar: _parameter
@property (readonly, nonatomic) BOOL resolveImplemented; // ivar: _resolveImplemented
@property (readonly, nonatomic) NSArray *results; // ivar: _results
@property (readonly, nonatomic) INIntentSlotDescription *slotDescription; // ivar: _slotDescription


-(id)description;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithParameter:(id)arg0 forIntent:(id)arg1 extensionContextResolutionResult:(id)arg2 ;


@end


#endif