// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMTRANSCRIPTBUBBLESIZECACHE_H
#define IMTRANSCRIPTBUBBLESIZECACHE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface IMTranscriptBubbleSizeCache : NSObject

@property (retain) NSMutableArray *sizeCache; // ivar: _sizeCache


-(id)_cacheEntryForMaximumWidth:(CGFloat)arg0 getEffectiveIndex:(*NSUInteger)arg1 ;
-(id)init;
-(struct CGSize )sizeForMaximumWidth:(CGFloat)arg0 ;
-(void)_insertCacheEntry:(id)arg0 ;
-(void)flush;
-(void)setSize:(struct CGSize )arg0 forMaximumWidth:(CGFloat)arg1 ;


@end


#endif