// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMSMUTABLEITEMENUMERATOR_H
#define NMSMUTABLEITEMENUMERATOR_H

@class NSMutableArray;
@protocol NMSDownloadableItemEnumerator;

#import <Foundation/Foundation.h>


@interface NMSMutableItemEnumerator : NSObject <NMSDownloadableItemEnumerator>

 {
    NSMutableArray *_items;
    NSUInteger _itemIndex;
}




-(BOOL)hasItems;
-(id)init;
-(id)nextItem;
-(void)addItem:(id)arg0 ;


@end


#endif