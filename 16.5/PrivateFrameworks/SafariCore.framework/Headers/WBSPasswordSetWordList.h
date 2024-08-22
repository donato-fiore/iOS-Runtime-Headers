// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSPASSWORDSETWORDLIST_H
#define WBSPASSWORDSETWORDLIST_H

@class NSSet;


#import "WBSPasswordWordList.h"

@interface WBSPasswordSetWordList : WBSPasswordWordList {
    NSSet *_words;
}




-(id)initWithIdentifier:(id)arg0 words:(id)arg1 ;
-(void)enumerateEntriesForString:(id)arg0 withBlock:(id)arg1 ;


@end


#endif