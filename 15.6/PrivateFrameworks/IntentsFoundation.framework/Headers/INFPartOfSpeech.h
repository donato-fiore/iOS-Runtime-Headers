// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INFPARTOFSPEECH_H
#define INFPARTOFSPEECH_H

@class NSString, NSMutableDictionary;


#import "INFSentenceToken.h"

@interface INFPartOfSpeech : INFSentenceToken {
    NSString *_identifier;
}


@property (nonatomic) NSUInteger gender; // ivar: _gender
@property (copy, nonatomic) NSString *language; // ivar: _language
@property (nonatomic) NSUInteger partOfSpeechType; // ivar: _partOfSpeechType
@property (retain, nonatomic) NSMutableDictionary *variants; // ivar: _variants


+(id)adjectiveWithIdentifier:(id)arg0 language:(id)arg1 ;
+(id)nounWithGender:(NSUInteger)arg0 identifier:(id)arg1 language:(id)arg2 ;
+(id)nounWithIdentifier:(id)arg0 language:(id)arg1 ;
-(id)contributingSentenceContext;
-(id)dictionaryRepresentation;
-(id)identifier;
-(id)init;
-(id)initWithDictionary:(id)arg0 identifier:(id)arg1 ;
-(id)initWithPartOfSpeechType:(NSUInteger)arg0 identifier:(id)arg1 language:(id)arg2 ;
-(id)stringForContext:(id)arg0 ;
-(id)stringForVariants:(NSUInteger)arg0 ;
-(id)stringForVariantsDescriptor:(id)arg0 ;
-(void)setString:(id)arg0 forVariants:(NSUInteger)arg1 ;
-(void)setString:(id)arg0 forVariantsDescriptor:(id)arg1 ;
-(void)validateSelf;


@end


#endif