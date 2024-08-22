// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHSTRINGOVSCHECKER_H
#define CHSTRINGOVSCHECKER_H


#import <Foundation/Foundation.h>


@interface CHStringOVSChecker : NSObject {
    *_CFBurstTrie _ovsTrie;
    unsigned int _flagsFilter;
    *_LXLexicon _staticLexicon;
    *_LXLexicon _customLexicon;
    *unk _stringNormalizationFunction;
}




+(id)obfuscateString:(id)arg0 ;
-(BOOL)_isInappropriateString:(id)arg0 withLexicon:(struct _LXLexicon *)arg1 ;
-(BOOL)_isInappropriateString:(id)arg0 withTrie:(struct _CFBurstTrie *)arg1 ;
-(BOOL)_isInappropriateTokenID:(unsigned int)arg0 withLexicon:(struct _LXLexicon *)arg1 ;
-(BOOL)isInappropriateLexiconEntry:(struct _LXEntry *)arg0 ;
-(BOOL)isInappropriateString:(id)arg0 ;
-(BOOL)isInappropriateTokenID:(unsigned int)arg0 ;
-(id)initWithTrie:(struct _CFBurstTrie *)arg0 staticLexicon:(struct _LXLexicon *)arg1 customLexicon:(struct _LXLexicon *)arg2 flags:(unsigned int)arg3 stringNormalizationFunction:(*unk)arg4 ;
-(void)dealloc;


@end


#endif