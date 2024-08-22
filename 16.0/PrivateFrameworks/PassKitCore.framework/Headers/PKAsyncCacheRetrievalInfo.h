// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKASYNCCACHERETRIEVALINFO_H
#define PKASYNCCACHERETRIEVALINFO_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface PKAsyncCacheRetrievalInfo : NSObject {
    os_unfair_lock_s _lock;
    BOOL _itemFetched;
    id *_item;
    NSMutableArray *_deliveryBlocks;
}




-(id)init;
// -(id)synchronouslyRetrieve:(id)arg0 outDeliveryBlocks:(unk)arg1  ;
-(void)addDeliveryBlock:(id)arg0 ;
-(void)deliverItem:(id)arg0 ;


@end


#endif