// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _WBSFIELDLABELPATTERNMATCHERFACTORY_H
#define _WBSFIELDLABELPATTERNMATCHERFACTORY_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _WBSFieldLabelPatternMatcherFactory : NSObject {
    NSMutableDictionary *_trie;
}




+(struct __WBSFieldLabelPatternMatcherArray *)createFieldLabelPatternMatcherArrayFromWordArrays:(id)arg0 allowingEndOfWordMatches:(BOOL)arg1 ;
-(id)init;
-(void)_addWord:(id)arg0 allowingEndOfWordMatch:(BOOL)arg1 ;


@end


#endif