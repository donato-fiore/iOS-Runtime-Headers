// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ININTENTCODABLEPHRASE_H
#define ININTENTCODABLEPHRASE_H

@class NSString;
@protocol NSSecureCoding, NSCopying, INCodableCoding;

#import <Foundation/Foundation.h>

#import "INIntentCodableDescription.h"

@interface INIntentCodablePhrase : NSObject <NSSecureCoding, NSCopying, INCodableCoding>



@property (weak, nonatomic, setter=_setCodableDescription:) INIntentCodableDescription *_codableDescription; // ivar: _codableDescription
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *localizedPhrase;
@property (readonly, copy, nonatomic) NSString *localizedPronunciationHint;
@property (copy, nonatomic) NSString *phrase; // ivar: _phrase
@property (copy, nonatomic) NSString *phraseLocID; // ivar: _phraseLocID
@property (copy, nonatomic) NSString *pronunciationHint; // ivar: _pronunciationHint
@property (copy, nonatomic) NSString *pronunciationHintLocID; // ivar: _pronunciationHintLocID
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)__INCodableDescriptionPhraseIDKey;
-(id)__INCodableDescriptionPhraseKey;
-(id)__INCodableDescriptionPronunciationHintIDKey;
-(id)__INCodableDescriptionPronunciationHintKey;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)dictionaryRepresentationWithLocalizer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedPhraseForLanguage:(id)arg0 ;
-(id)localizedPhraseWithLocalizer:(id)arg0 ;
-(id)localizedPronunciationHintForLanguage:(id)arg0 ;
-(id)localizedPronunciationHintWithLocalizer:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif