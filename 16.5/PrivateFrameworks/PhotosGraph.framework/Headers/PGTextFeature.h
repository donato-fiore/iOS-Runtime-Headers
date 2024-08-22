// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGTEXTFEATURE_H
#define PGTEXTFEATURE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PGTextFeature : NSObject

@property (readonly, nonatomic) NSUInteger origin; // ivar: _origin
@property (readonly, nonatomic) NSString *originalString; // ivar: _originalString
@property (readonly, nonatomic) NSString *string; // ivar: _string
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (readonly, nonatomic) CGFloat weight; // ivar: _weight


+(NSUInteger)_mostImportantTextFeatureTypeAmongTypes:(id)arg0 ;
+(id)_localizedNameForLocalizableNode:(id)arg0 ;
+(id)_stringToIndexFromTokens:(id)arg0 ;
+(id)_tokensFromString:(id)arg0 lemmatize:(BOOL)arg1 ;
+(id)graphNamesForNode:(id)arg0 locationHelper:(id)arg1 ;
+(id)mergedTextFeatureFromTextFeatures:(id)arg0 ;
+(id)stringForFeatureOrigin:(NSUInteger)arg0 ;
+(id)stringForFeatureType:(NSUInteger)arg0 ;
+(id)textFeaturesFromNode:(id)arg0 type:(NSUInteger)arg1 weight:(CGFloat)arg2 options:(NSUInteger)arg3 locationHelper:(id)arg4 ;
+(id)textFeaturesFromString:(id)arg0 synonyms:(id)arg1 type:(NSUInteger)arg2 weight:(CGFloat)arg3 options:(NSUInteger)arg4 ;
+(id)textFeaturesFromString:(id)arg0 type:(NSUInteger)arg1 weight:(CGFloat)arg2 options:(NSUInteger)arg3 ;
+(id)vipTextFeatureTypes;
-(id)description;
-(id)initWithString:(id)arg0 originalString:(id)arg1 type:(NSUInteger)arg2 weight:(CGFloat)arg3 origin:(NSUInteger)arg4 ;
-(void)markAsStrippedOut;


@end


#endif