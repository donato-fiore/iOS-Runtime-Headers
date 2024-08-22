// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPCTTYPESETTERCACHE_H
#define TSWPCTTYPESETTERCACHE_H


#import <Foundation/Foundation.h>


@interface TSWPCTTypesetterCache : NSObject {
    map<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>>> _typesetters;
}




-(?)addTypesetterForParagraphIdentifiertypesetter;
-(struct shared_ptr<TSWPParagraphTypesetter> )cachedTypesetterForParagraphIdentifier:(NSUInteger)arg0 ;
-(void)clearCache;
-(void)dealloc;
-(void)p_limitCacheSize:(NSUInteger)arg0 ;
-(void)removeTypesetterForParagraphIndex:(NSUInteger)arg0 ;


@end


#endif