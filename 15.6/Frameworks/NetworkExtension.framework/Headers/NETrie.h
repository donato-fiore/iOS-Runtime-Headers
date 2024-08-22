// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NETRIE_H
#define NETRIE_H


#import <Foundation/Foundation.h>


@interface NETrie : NSObject

@property BOOL partialSearchAllowed; // ivar: _partialSearchAllowed
@property char partialSearchTerminator; // ivar: _partialSearchTerminator
@property BOOL reverse; // ivar: _reverse
@property ne_trie trie; // ivar: _trie


-(BOOL)search:(char *)arg0 length:(int)arg1 ;
-(BOOL)searchWithString:(id)arg0 ;
-(id)initWithDomains:(id)arg0 reverse:(BOOL)arg1 partialSearchAllowed:(BOOL)arg2 partialSearchTerminator:(char)arg3 ;
-(void)dealloc;


@end


#endif