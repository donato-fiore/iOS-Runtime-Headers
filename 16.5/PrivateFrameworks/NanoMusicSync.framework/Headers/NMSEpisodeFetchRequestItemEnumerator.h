// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMSEPISODEFETCHREQUESTITEMENUMERATOR_H
#define NMSEPISODEFETCHREQUESTITEMENUMERATOR_H

@class NSFetchRequest, NSManagedObjectContext, NSArray;
@protocol NMSDownloadableItemEnumerator;

#import <Foundation/Foundation.h>


@interface NMSEpisodeFetchRequestItemEnumerator : NSObject <NMSDownloadableItemEnumerator>

 {
    NSFetchRequest *_fetchRequest;
    NSManagedObjectContext *_ctx;
    NSUInteger _itemIndex;
}


@property (readonly, nonatomic) NSArray *items; // ivar: _items


-(id)initWithFetchRequest:(id)arg0 ctx:(id)arg1 ;
-(id)nextItem;


@end


#endif