// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ININTENTRESOLUTIONRESULT_H
#define ININTENTRESOLUTIONRESULT_H

@class NSArray, NSString;
@protocol INIntentResolutionResultExport, INIntentResolutionResultDataProviding;

#import <Foundation/Foundation.h>

#import "INIntent.h"

@interface INIntentResolutionResult : NSObject <INIntentResolutionResultExport, INIntentResolutionResultDataProviding>



@property (retain, nonatomic) NSArray *alternatives; // ivar: _alternatives
@property (nonatomic) NSUInteger confirmationReason; // ivar: _confirmationReason
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *disambiguationItems; // ivar: _disambiguationItems
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) INIntent *intentToExecute; // ivar: _intentToExecute
@property (retain, nonatomic) id *itemToConfirm; // ivar: _itemToConfirm
@property (nonatomic) NSInteger resolutionResultCode; // ivar: _resolutionResultCode
@property (retain, nonatomic) id *resolvedValue; // ivar: _resolvedValue
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger unsupportedReason; // ivar: _unsupportedReason


+(id)_dataForResolutionMethodUnimplemented;
+(id)_resolutionResultWithData:(id)arg0 slotDescription:(id)arg1 ;
+(id)confirmationRequiredWithItemToConfirm:(id)arg0 forReason:(NSInteger)arg1 ;
+(id)needsValue;
+(id)notRequired;
+(id)requiresExecutionOfIntent:(id)arg0 ;
+(id)resolutionResultConfirmationRequiredWithItemToConfirm:(id)arg0 ;
+(id)resolutionResultDisambiguationWithItemsToDisambiguate:(id)arg0 ;
+(id)resolutionResultNeedsValue;
+(id)resolutionResultNotRequired;
+(id)resolutionResultSuccessWithResolvedValue:(id)arg0 ;
+(id)resolutionResultUnsupportedWithReason:(NSUInteger)arg0 ;
+(id)resolutionResultUnsupportedWithReason:(NSUInteger)arg0 alternativeItems:(id)arg1 ;
+(id)unsupported;
+(id)unsupportedWithReason:(NSInteger)arg0 ;
-(id)_JSONDictionaryRepresentationForIntent:(id)arg0 parameterName:(id)arg1 ;
-(id)_buildIntentSlotResolutionResultWithIntentSlotDescription:(id)arg0 ;
-(id)_dataForIntentSlotDescription:(id)arg0 ;
-(id)_initWithIntentSlotResolutionResult:(id)arg0 slotDescription:(id)arg1 ;
-(id)_initWithResolutionResult:(id)arg0 ;
-(id)_initWithResultCode:(NSInteger)arg0 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_objectForIntentSlotValue:(id)arg0 slotDescription:(id)arg1 ;
-(id)_stringForResultCode:(NSInteger)arg0 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithJSONDictionary:(id)arg0 forIntent:(id)arg1 ;
-(id)resolutionResultDataForIntent:(id)arg0 intentSlotDescription:(id)arg1 error:(*id)arg2 ;
-(void)transformResolutionResultForIntent:(id)arg0 intentSlotDescription:(id)arg1 withOptionsProvider:(id)arg2 completion:(id)arg3 ;


@end


#endif