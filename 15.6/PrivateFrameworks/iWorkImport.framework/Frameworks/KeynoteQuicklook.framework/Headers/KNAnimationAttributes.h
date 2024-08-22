// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KNANIMATIONATTRIBUTES_H
#define KNANIMATIONATTRIBUTES_H

@class NSDictionary, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface KNAnimationAttributes : NSObject <NSCopying>



@property (readonly, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (readonly, nonatomic) NSString *effect; // ivar: _effect


+(BOOL)customAttributeKeyIsValid:(id)arg0 ;
+(id)attributesWithEffect:(id)arg0 attributes:(id)arg1 ;
+(id)supportedCustomAttributes;
-(BOOL)containsAttributeForKey:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributesAdjustedForTheme:(id)arg0 ;
-(id)attributesByAddingAttributes:(id)arg0 ;
-(id)attributesByAddingAttributesFromDictionary:(id)arg0 ;
-(id)attributesByChangingEffectToEffect:(id)arg0 ;
-(id)attributesByRemovingAttributeForKey:(id)arg0 ;
-(id)attributesBySettingValue:(id)arg0 forAttributeKey:(id)arg1 ;
-(id)attributesByUpdatingThemeCurveNamesWithOldToNewCurveNameMap:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithEffect:(id)arg0 attributes:(id)arg1 ;
-(id)p_curveForNameKey:(id)arg0 forTheme:(id)arg1 ;
-(id)valueForAttributeKey:(id)arg0 ;


@end


#endif