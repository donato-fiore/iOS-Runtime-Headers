// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INCODABLEENUMVALUE_H
#define INCODABLEENUMVALUE_H

@class NSString, NSArray;
@protocol INCodableAttributeRelationComparing, NSSecureCoding, NSCopying, INCodableCoding;

#import <Foundation/Foundation.h>

#import "INCodableEnum.h"

@interface INCodableEnumValue : NSObject <INCodableAttributeRelationComparing, NSSecureCoding, NSCopying, INCodableCoding>



@property (weak, nonatomic, setter=_setCodableEnum:) INCodableEnum *_codableEnum; // ivar: _codableEnum
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSString *displayNameLocID; // ivar: _displayNameLocID
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger index; // ivar: _index
@property (readonly, copy, nonatomic) NSString *localizedDisplayName;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *synonyms; // ivar: _synonyms


+(BOOL)supportsSecureCoding;
-(BOOL)_intents_compareValue:(id)arg0 relation:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)__INCodableEnumDisplayNameIDKey;
-(id)__INCodableEnumDisplayNameKey;
-(id)__INCodableEnumIndexKey;
-(id)__INCodableEnumNameKey;
-(id)__INCodableEnumSynonymsKey;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)dictionaryRepresentationWithLocalizer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedDisplayNameForLanguage:(id)arg0 ;
-(id)localizedDisplayNameWithLocalizer:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif