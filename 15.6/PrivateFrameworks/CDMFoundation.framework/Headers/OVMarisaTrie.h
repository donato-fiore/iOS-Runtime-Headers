// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OVMARISATRIE_H
#define OVMARISATRIE_H


#import <Foundation/Foundation.h>


@interface OVMarisaTrie : NSObject {
    Trie trie;
    Keyset keyset;
}


@property (readonly, nonatomic) NSInteger count;


-(BOOL)lookupRow:(id)arg0 outIdx:(*NSInteger)arg1 ;
-(BOOL)reverseLookupKey:(int)arg0 dataLength:(NSUInteger)arg1 resultBlock:(id)arg2 ;
-(id)init;
-(id)initWithURL:(id)arg0 ;
-(id)reverseLookup:(int)arg0 ;
-(id)reverseLookupRow:(int)arg0 ;
-(void)addKey:(id)arg0 payload:(id)arg1 ;
-(void)addRow:(id)arg0 ;
-(void)enumerateAllEntriesWithBlock:(id)arg0 ;
-(void)enumerateAllRowsWithBlock:(id)arg0 ;
-(void)lookupKey:(id)arg0 resultBlock:(id)arg1 ;
-(void)lookupPrefix:(id)arg0 resultBlock:(id)arg1 ;
-(void)writeToURL:(id)arg0 ;


@end


#endif