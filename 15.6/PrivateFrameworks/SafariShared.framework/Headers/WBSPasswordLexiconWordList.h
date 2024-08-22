// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSPASSWORDLEXICONWORDLIST_H
#define WBSPASSWORDLEXICONWORDLIST_H



#import "WBSPasswordWordList.h"

@interface WBSPasswordLexiconWordList : WBSPasswordWordList {
    *_LXLexicon _lexicon;
}




+(id)lexiconWordListWithIdentifier:(id)arg0 localeIdentifier:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 lexicon:(struct _LXLexicon *)arg1 ;
-(void)dealloc;
-(void)enumerateEntriesForString:(id)arg0 withBlock:(id)arg1 ;


@end


#endif