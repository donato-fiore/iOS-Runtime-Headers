// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMSITEMGROUPENUMERATOR_H
#define NMSITEMGROUPENUMERATOR_H

@class NSArray;
@protocol NMSDownloadableItemEnumerator;

#import <Foundation/Foundation.h>

#import "NMSMediaItemGroup.h"

@interface NMSItemGroupEnumerator : NSObject <NMSDownloadableItemEnumerator>

 {
    NMSMediaItemGroup *_itemGroup;
    NSArray *_itemList;
    NSUInteger _itemIndex;
}




-(id)initWithItemGroup:(id)arg0 ;
-(id)nextItem;


@end


#endif