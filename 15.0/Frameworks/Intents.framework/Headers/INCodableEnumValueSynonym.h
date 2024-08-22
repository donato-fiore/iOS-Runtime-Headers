// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INCODABLEENUMVALUESYNONYM_H
#define INCODABLEENUMVALUESYNONYM_H

@class NSString;
@protocol NSSecureCoding, NSCopying, INCodableCoding;

#import <Foundation/Foundation.h>

#import "INCodableEnum.h"
#import "INCodableEnumValue.h"

@interface INCodableEnumValueSynonym : NSObject <NSSecureCoding, NSCopying, INCodableCoding>



@property (readonly, weak, nonatomic) INCodableEnum *_codableEnum;
@property (weak, nonatomic, setter=_setCodableEnumValue:) INCodableEnumValue *_codableEnumValue; // ivar: _codableEnumValue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *localizedPronunciationHint;
@property (readonly, copy, nonatomic) NSString *localizedSynonym;
@property (copy, nonatomic) NSString *pronunciationHint; // ivar: _pronunciationHint
@property (copy, nonatomic) NSString *pronunciationHintLocID; // ivar: _pronunciationHintLocID
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *synonym; // ivar: _synonym
@property (copy, nonatomic) NSString *synonymLocID; // ivar: _synonymLocID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)__INCodableEnumPronunciationHintIDKey;
-(id)__INCodableEnumPronunciationHintKey;
-(id)__INCodableEnumSynonymIDKey;
-(id)__INCodableEnumSynonymKey;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)dictionaryRepresentationWithLocalizer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedPronunciationHintForLanguage:(id)arg0 ;
-(id)localizedPronunciationHintWithLocalizer:(id)arg0 ;
-(id)localizedSynonymForLanguage:(id)arg0 ;
-(id)localizedSynonymWithLocalizer:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif