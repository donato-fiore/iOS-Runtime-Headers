// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RKLEXICALENTITY_H
#define RKLEXICALENTITY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface RKLexicalEntity : NSObject

@property (retain) NSString *internalWord; // ivar: _internalWord
@property (retain) NSString *language; // ivar: _language
@property (retain) NSString *lemma; // ivar: _lemma
@property (retain) NSString *partOfSpeech; // ivar: _partOfSpeech
@property (retain) NSString *string; // ivar: _string
@property _NSRange tokenRange; // ivar: _tokenRange
@property (retain) NSString *tokenType; // ivar: _tokenType
@property (readonly) NSString *word;


-(id)description;


@end


#endif