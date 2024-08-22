// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMSSEQUENTIALITEMENUMERATOR_H
#define NMSSEQUENTIALITEMENUMERATOR_H

@class NSMutableArray;
@protocol NMSDownloadableItemEnumerator;

#import <Foundation/Foundation.h>


@interface NMSSequentialItemEnumerator : NSObject <NMSDownloadableItemEnumerator>

 {
    NSMutableArray *_itemEnumerators;
}




-(id)initWithItemEnumerators:(id)arg0 ;
-(id)nextItem;


@end


#endif