// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COMMUNICATIONSFILTERBLOCKLISTCACHE_H
#define COMMUNICATIONSFILTERBLOCKLISTCACHE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface CommunicationsFilterBlockListCache : NSObject {
    NSMutableArray *_recentItems;
    int _notifyEmptyListToken;
    BOOL _listIsEmpty;
}




-(NSInteger)cachedResponseForItem:(id)arg0 ;
-(id)init;
-(void)_blockListChanged:(id)arg0 ;
-(void)removeItemFromCache:(id)arg0 ;
-(void)setResponse:(BOOL)arg0 forItem:(id)arg1 ;
-(void)syncListEmptyState;


@end


#endif