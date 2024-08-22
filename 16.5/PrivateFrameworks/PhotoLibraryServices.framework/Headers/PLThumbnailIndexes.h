// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLTHUMBNAILINDEXES_H
#define PLTHUMBNAILINDEXES_H

@class NSMutableIndexSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PLThumbnailIndexes : NSObject {
    NSObject<OS_dispatch_queue> *_isolationQeueue;
    NSMutableIndexSet *_unusedIndexes;
    NSInteger _usedMax;
    NSUInteger _fetchTimestamp;
}




+(NSUInteger)nextAvailableThumbnailIndexInLibrary:(id)arg0 ;
+(id)occupiedThumbnailIndexesWithLibrary:(id)arg0 fetchTimestampToUpdate:(*NSUInteger)arg1 ;
+(void)getAvailableThumbnailIndexInLibrary:(id)arg0 withHandler:(id)arg1 ;
+(void)getAvailableThumbnailIndexesInLibrary:(id)arg0 withCount:(NSUInteger)arg1 handler:(id)arg2 ;
+(void)recycleThumbnailIndexes:(id)arg0 inLibrary:(id)arg1 ;
+(void)recycleThumbnailIndexes:(id)arg0 inLibrary:(id)arg1 timestamp:(NSUInteger)arg2 ;
-(id)getAvailableThumbnailIndexesWithCount:(NSUInteger)arg0 inLibrary:(id)arg1 ;
-(id)init;
-(void)getAvailableThumbnailIndexesFromLibrary:(id)arg0 ;
-(void)getAvailableThumbnailIndexesWithCount:(NSUInteger)arg0 inLibrary:(id)arg1 handler:(id)arg2 ;
-(void)recycleThumbnailIndexes:(id)arg0 timestamp:(NSUInteger)arg1 ;


@end


#endif