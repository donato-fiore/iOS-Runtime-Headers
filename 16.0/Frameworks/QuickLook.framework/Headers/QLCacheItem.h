// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLCACHEITEM_H
#define QLCACHEITEM_H

@class NSMutableArray, QLItem;

#import <Foundation/Foundation.h>


@interface QLCacheItem : NSObject {
    NSMutableArray *_handlers;
}


@property (retain, nonatomic) QLItem *item; // ivar: _item


-(void)_performHandlers;
-(void)addCompletionHandler:(id)arg0 ;
-(void)invalidate;


@end


#endif