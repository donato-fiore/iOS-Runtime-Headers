// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INCODABLEENUM_H
#define INCODABLEENUM_H

@class NSDictionary, NSString, NSArray;
@protocol NSSecureCoding, NSCopying, INCodableCoding;

#import <Foundation/Foundation.h>

#import "INCodableLocalizationTable.h"

@interface INCodableEnum : NSObject <NSSecureCoding, NSCopying, INCodableCoding>

 {
    NSDictionary *_valuesByIndex;
}


@property (copy, nonatomic, setter=_setLocalizationTable:) INCodableLocalizationTable *_localizationTable; // ivar: _localizationTable
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, copy, nonatomic) NSString *displayNameID; // ivar: _displayNameID
@property (copy, nonatomic, setter=_setEnumNamespace:) NSString *enumNamespace; // ivar: _enumNamespace
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *localizedDisplayName;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, copy, nonatomic) NSArray *values; // ivar: _values


+(BOOL)supportsSecureCoding;
+(id)__DisplayNameIDKey;
+(id)__DisplayNameKey;
+(id)__INCodableEnumValueDisplayNameIDKey;
+(id)__INCodableEnumValueDisplayNameKey;
+(id)__INCodableEnumValueIndexKey;
+(id)__INCodableEnumValueNameKey;
+(id)__INCodableEnumValueSynonymPronunciationHintIDKey;
+(id)__INCodableEnumValueSynonymPronunciationHintKey;
+(id)__INCodableEnumValueSynonymSynonymIDKey;
+(id)__INCodableEnumValueSynonymSynonymKey;
+(id)__INCodableEnumValueSynonymsKey;
+(id)__NameKey;
+(id)__TypeKey;
+(id)__ValuesKey;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)dictionaryRepresentationWithLocalizer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 displayName:(id)arg1 displayNameID:(id)arg2 enumNamespace:(id)arg3 type:(NSInteger)arg4 values:(id)arg5 localizationTable:(id)arg6 ;
-(id)localizedDisplayNameWithLocalizer:(id)arg0 ;
-(id)valueForIndex:(NSUInteger)arg0 ;
-(id)valuesByIndexForValues:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif