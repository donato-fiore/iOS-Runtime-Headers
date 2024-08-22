// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMSALTERNATINGITEMENUMERATOR_H
#define NMSALTERNATINGITEMENUMERATOR_H

@class NSMutableArray;
@protocol NMSDownloadableItemEnumerator;

#import <Foundation/Foundation.h>


@interface NMSAlternatingItemEnumerator : NSObject <NMSDownloadableItemEnumerator>

 {
    NSMutableArray *_itemEnumerators;
    NSUInteger _itemEnumeratorIndex;
}




-(id)initWithItemEnumerators:(id)arg0 ;
-(id)nextItem;


@end


#endif