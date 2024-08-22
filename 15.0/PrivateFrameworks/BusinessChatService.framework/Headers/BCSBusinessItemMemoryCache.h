// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSBUSINESSITEMMEMORYCACHE_H
#define BCSBUSINESSITEMMEMORYCACHE_H

@class NSData;
@protocol BCSItemCaching;

#import <Foundation/Foundation.h>

#import "BCSBusinessItem.h"

@interface BCSBusinessItemMemoryCache : NSObject <BCSItemCaching>

 {
    BCSBusinessItem *_lastFetchedBusinessItem;
    BCSBusinessItem *_bizItemForLastFetchedIcon;
    NSData *_lastFetchedBusinessItemIconData;
}




-(id)itemMatching:(id)arg0 ;
-(void)deleteExpiredItemsOfType:(NSInteger)arg0 ;
-(void)deleteItemMatching:(id)arg0 ;
-(void)deleteItemsOfType:(NSInteger)arg0 ;
-(void)updateItem:(id)arg0 withItemIdentifier:(id)arg1 ;


@end


#endif