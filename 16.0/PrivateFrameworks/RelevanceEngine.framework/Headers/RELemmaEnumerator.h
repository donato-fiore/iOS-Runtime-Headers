// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RELEMMAENUMERATOR_H
#define RELEMMAENUMERATOR_H

@class NLTagger;

#import <Foundation/Foundation.h>


@interface RELemmaEnumerator : NSObject {
    NLTagger *_tagger;
}




-(BOOL)enumerateLemmasInString:(id)arg0 withBlock:(id)arg1 ;
-(id)init;


@end


#endif