// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HCHUFFMANCODER_H
#define HCHUFFMANCODER_H

@class NSUUID;

#import <Foundation/Foundation.h>

#import "HCBurstTrie.h"
#import "HCIndexTable.h"

@interface HCHuffmanCoder : NSObject

@property (retain, nonatomic) HCBurstTrie *burstTrie; // ivar: _burstTrie
@property (readonly, nonatomic) NSUInteger count;
@property (retain, nonatomic) HCIndexTable *indexTable; // ivar: _indexTable
@property (readonly, nonatomic) NSUUID *versionUUID;


+(id)characterCoderForLocale:(id)arg0 ;
+(id)coderFromBurstTrieFile:(id)arg0 indexTableFile:(id)arg1 ;
+(id)coderMatchingName:(id)arg0 locale:(id)arg1 ;
+(id)wordCoderForLocale:(id)arg0 ;
-(id)codeForKey:(id)arg0 ;
-(id)init;
-(id)initWithBurstTrie:(id)arg0 indexTable:(id)arg1 ;
-(id)stringCodeForKey:(id)arg0 ;


@end


#endif