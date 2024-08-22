// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASPEAKABLEPHRASE_H
#define SASPEAKABLEPHRASE_H

@class NSString;


#import "SADomainObject.h"

@interface SASpeakablePhrase : SADomainObject

@property (copy, nonatomic) NSString *phrase;
@property (copy, nonatomic) NSString *pronunciation;


+(id)speakablePhrase;
+(id)speakablePhraseWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif