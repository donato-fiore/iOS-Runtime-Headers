// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRANSLATEPHRASEINTENT_H
#define TRANSLATEPHRASEINTENT_H

@class INIntent, NSNumber, NSString;



@interface TranslatePhraseIntent : INIntent

@property (nonatomic, retain) NSNumber *isCancel;
@property (nonatomic, retain) NSNumber *isProfanity;
@property (nonatomic, copy) NSString *phrase;
@property (nonatomic, copy) NSString *phraseReference;
@property (nonatomic, copy) NSString *sourceLanguage;
@property (nonatomic, copy) NSString *targetLanguage;
@property (nonatomic, retain) NSNumber *translateToSourceLanguage;


-(BOOL)supportsBSXPCSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDomain:(id)arg0 verb:(id)arg1 parametersByName:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 backingStore:(id)arg1 ;


@end


#endif