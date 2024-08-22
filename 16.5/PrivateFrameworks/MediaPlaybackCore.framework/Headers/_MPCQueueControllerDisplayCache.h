// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MPCQUEUECONTROLLERDISPLAYCACHE_H
#define _MPCQUEUECONTROLLERDISPLAYCACHE_H

@class NSString, NSMapTable;

#import <Foundation/Foundation.h>


@interface _MPCQueueControllerDisplayCache : NSObject

@property (nonatomic) NSInteger displayItemCount; // ivar: _displayItemCount
@property (copy, nonatomic) NSString *furthestContentItemID; // ivar: _furthestContentItemID
@property (retain, nonatomic) NSMapTable *indexCache; // ivar: _indexCache
@property (retain, nonatomic) NSMapTable *itemCache; // ivar: _itemCache


-(NSInteger)displayIndexForContentItemID:(id)arg0 ;
-(id)init;
-(id)itemEnumerator;
-(id)itemForContentItemID:(id)arg0 ;
-(void)clearIndexCache;
-(void)clearItemCache;
-(void)setDisplayIndex:(NSInteger)arg0 forContentItemID:(id)arg1 ;
-(void)setItem:(id)arg0 forContentItemID:(id)arg1 ;


@end


#endif