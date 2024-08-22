// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMLLEXICON_H
#define PMLLEXICON_H

@class _PASCFBurstTrie;

#import <Foundation/Foundation.h>


@interface PMLLexicon : NSObject {
    _PASCFBurstTrie *_lexicon;
}




+(BOOL)serializeLexiconToFile:(id)arg0 tokenToWordIDDict:(id)arg1 ;
-(NSUInteger)getTotalEntries;
-(NSUInteger)getWordIDforToken:(id)arg0 ;
-(id)init;
-(id)initWithPath:(id)arg0 ;


@end


#endif