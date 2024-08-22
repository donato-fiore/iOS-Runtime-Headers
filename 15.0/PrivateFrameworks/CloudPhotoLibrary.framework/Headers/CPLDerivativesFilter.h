// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLDERIVATIVESFILTER_H
#define CPLDERIVATIVESFILTER_H

@class NSMutableDictionary, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CPLDerivativesFilter : NSObject <NSSecureCoding>

 {
    NSMutableDictionary *_skipInfoForAssetChange;
    NSMutableDictionary *_skipInfoForMasterChange;
}


@property (readonly, nonatomic) NSArray *plistDescription;


+(BOOL)supportsSecureCoding;
-(BOOL)_isValidDropDerivativeRecipeWithUTI:(id)arg0 sourceType:(NSUInteger)arg1 derivativeTypes:(id)arg2 changeType:(NSUInteger)arg3 ;
-(BOOL)addServerDropDerivativesRecipe:(id)arg0 ;
-(BOOL)addServerDropDerivativesRecipes:(id)arg0 ;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)mightDropSomeDerivativesForSourceType:(NSUInteger)arg0 forChangeType:(NSUInteger)arg1 ;
-(BOOL)shouldDropDerivativeWithDropDerivativeRecipe:(id)arg0 ;
-(id)_descriptionForStoredResponse:(id)arg0 recordType:(NSUInteger)arg1 ;
-(id)_getTargetDictionaryForChangeType:(NSUInteger)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)redactedDescription;
-(void)_enumerateDropDerivativeRules:(id)arg0 ofType:(NSUInteger)arg1 withBlock:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateDropDerivativeRulesWithBlock:(id)arg0 ;
-(void)reset;


@end


#endif