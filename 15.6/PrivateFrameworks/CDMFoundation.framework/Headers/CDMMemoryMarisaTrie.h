// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMMEMORYMARISATRIE_H
#define CDMMEMORYMARISATRIE_H

@class NSString;
@protocol CDMBaseTrie;

#import <Foundation/Foundation.h>


@interface CDMMemoryMarisaTrie : NSObject <CDMBaseTrie>

 {
    unique_ptr<marisa::Trie, std::default_delete<marisa::Trie>> _readOnlyTrie;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasEntry:(id)arg0 ;
-(BOOL)hasPrefix:(id)arg0 ;
-(NSUInteger)size;
-(id)initWithEntries:(id)arg0 ;
-(id)traversePrefix:(id)arg0 ;


@end


#endif