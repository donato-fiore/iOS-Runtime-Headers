// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _IMMEMORYCACHEITEM_H
#define _IMMEMORYCACHEITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _IMMemoryCacheItem : NSObject

@property (nonatomic) BOOL conformsToProtocol; // ivar: _conformsToProtocol
@property (nonatomic) NSUInteger cost; // ivar: _cost
@property (retain, nonatomic) id *item; // ivar: _item
@property (copy, nonatomic) NSString *key; // ivar: _keyString
@property (nonatomic) NSUInteger timeStamp; // ivar: _timeStamp


+(id)cacheItemWithItem:(id)arg0 key:(id)arg1 cost:(NSUInteger)arg2 ;
-(id)description;


@end


#endif