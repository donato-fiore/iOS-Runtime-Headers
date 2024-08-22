// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _WBSPARSECSUBSCRIPTIONINFOKEYVALUESTRINGPARSER_H
#define _WBSPARSECSUBSCRIPTIONINFOKEYVALUESTRINGPARSER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _WBSParsecSubscriptionInfoKeyValueStringParser : NSObject {
    NSString *_string;
    NSUInteger _index;
}




+(id)parseKeyValuePairsFromString:(id)arg0 ;
-(BOOL)_isAtEnd;
-(BOOL)_parseKeyValuePairWithKey:(*id)arg0 value:(*id)arg1 ;
-(id)_initWithString:(id)arg0 ;
-(id)_parseJSONValue;
-(id)_parseKey;
-(id)_parseKeyValuePairs;
-(id)_parseUpToCharacterFromSet:(id)arg0 ;
-(id)_parseValue;
-(unsigned short)_consumeCharacter;
-(unsigned short)_previewCharacter;
-(void)_skipWhitespace;


@end


#endif