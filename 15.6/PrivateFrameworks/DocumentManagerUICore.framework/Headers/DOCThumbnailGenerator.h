// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOCTHUMBNAILGENERATOR_H
#define DOCTHUMBNAILGENERATOR_H

@class QLThumbnailGenerator;

#import <Foundation/Foundation.h>

#import "DOCThumbnailCache.h"

@interface DOCThumbnailGenerator : NSObject {
    DOCThumbnailCache *_thumbnailCache;
}


@property (readonly, nonatomic) QLThumbnailGenerator *thumbnailGenerator; // ivar: _thumbnailGenerator


+(id)sharedGenerator;
+(void)setMaximumCachedThumbnailCount:(NSUInteger)arg0 ;
-(id)_currentItemThumbnailsBatch;
-(id)_endCurrentThumbnailsBatch;
-(id)_thumbnailFallbackForItem:(id)arg0 descriptor:(id)arg1 currentThumbnail:(id)arg2 ;
-(id)_thumbnailForItem:(id)arg0 descriptor:(id)arg1 forceFetch:(BOOL)arg2 ;
-(id)iconForItem:(id)arg0 descriptor:(id)arg1 ;
-(id)iconForURL:(id)arg0 descriptor:(id)arg1 ;
-(id)init;
-(id)startBatching;
-(id)thumbnailForItem:(id)arg0 descriptor:(id)arg1 ;
-(id)thumbnailForItem:(id)arg0 descriptor:(id)arg1 forceFetch:(BOOL)arg2 ;
-(void)endBatching:(id)arg0 ;
-(void)markThumbnailAsRecentlyUsed:(id)arg0 ;
-(void)performInBatch:(id)arg0 ;


@end


#endif