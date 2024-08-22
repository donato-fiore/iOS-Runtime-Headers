// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INSPEAKABLESTRING_H
#define INSPEAKABLESTRING_H

@class NSArray, NSString;
@protocol INSpeakableStringExport, INSpeakable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface INSpeakableString : NSObject <INSpeakableStringExport, INSpeakable, NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSArray *alternativeSpeakableMatches; // ivar: _alternativeSpeakableMatches
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *pronunciationHint; // ivar: _pronunciationHint
@property (retain, nonatomic) NSString *spokenPhrase; // ivar: _spokenPhrase
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *vocabularyIdentifier; // ivar: _vocabularyIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)length;
-(id)_effectiveNSStringValue;
-(id)_initWithVocabularyIdentifier:(id)arg0 spokenPhrase:(id)arg1 pronunciationHint:(id)arg2 alternativeMatches:(id)arg3 ;
-(id)_intents_localizedCopyWithLocalizer:(id)arg0 ;
-(id)_intents_readableTitleWithLocalizer:(id)arg0 metadata:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 spokenPhrase:(id)arg1 pronunciationHint:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 string:(id)arg1 ;
-(id)initWithSpokenPhrase:(id)arg0 ;
-(id)initWithVocabularyIdentifier:(id)arg0 spokenPhrase:(id)arg1 pronunciationHint:(id)arg2 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)string;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif