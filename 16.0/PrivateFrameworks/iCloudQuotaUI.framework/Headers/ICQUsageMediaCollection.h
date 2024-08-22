// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQUSAGEMEDIACOLLECTION_H
#define ICQUSAGEMEDIACOLLECTION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface ICQUsageMediaCollection : NSObject

@property (nonatomic, getter=isGrouped) BOOL grouped; // ivar: _grouped
@property (copy, nonatomic) NSArray *itemSizes; // ivar: _itemSizes
@property (copy, nonatomic) NSArray *items; // ivar: _items
@property (nonatomic) float totalSize; // ivar: _totalSize


-(void)removeItemAtIndex:(NSUInteger)arg0 ;
-(void)sortItemsByMediaKey:(id)arg0 ;


@end


#endif