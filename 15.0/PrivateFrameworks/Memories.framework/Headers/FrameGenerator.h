// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FRAMEGENERATOR_H
#define FRAMEGENERATOR_H

@class AVAssetImageGenerator, NSMutableDictionary, NSLock;

#import <Foundation/Foundation.h>

#import "VideoMovie.h"

@interface FrameGenerator : NSObject {
    AVAssetImageGenerator *m_imageGenerator;
    NSMutableDictionary *m_fetchNotificationList;
    NSLock *m_fetchLock;
    ? m_timeToleranceBefore;
    ? m_timeToleranceAfter;
    BOOL m_requestedTimeTolerance;
    BOOL m_cropImage;
    CGRect m_cropRect;
}


@property (nonatomic) BOOL disablePosterFrame; // ivar: m_disablePosterFrame
@property (readonly, nonatomic) BOOL isQueueEmpty;
@property (readonly, nonatomic) NSInteger maximumCacheSize; // ivar: _maximumCacheSize
@property (nonatomic) CGSize maximumSize; // ivar: m_maximumSize
@property (retain, nonatomic) VideoMovie *movie; // ivar: m_movie
@property (readonly, nonatomic) CGSize naturalSize;
@property (nonatomic) float rotation; // ivar: m_rotation


+(BOOL)isAnythingFetching;
+(id)cachedFrameForMovie:(id)arg0 atTime:(struct ? )arg1 nearby:(BOOL)arg2 actualTime:(struct ? *)arg3 size:(struct CGSize )arg4 withRotation:(CGFloat)arg5 ;
+(id)imageKeyForTime:(int)arg0 size:(struct CGSize )arg1 withRotation:(float)arg2 ;
+(id)posterCacheDirectory;
+(id)posterCacheKeyForMovie:(id)arg0 ;
+(id)posterFrameForMovie:(id)arg0 ;
+(void)changeTimesToHighPriority:(id)arg0 forGenerator:(id)arg1 ;
+(void)ensureCacheDirectoryExists;
+(void)logAllQueuedTimes;
+(void)noteApplicationDidReceiveMemoryWarning;
+(void)nukeCaches;
+(void)pauseFetching;
+(void)queueGenerator:(id)arg0 forTimes:(id)arg1 highPriority:(BOOL)arg2 completionBlock:(id)arg3 ;
+(void)queueNextItem;
+(void)queueOne:(id)arg0 times:(id)arg1 completionHandler:(id)arg2 ;
+(void)removeQueueEntriesForGenerator:(id)arg0 ;
+(void)resumeFetching;
+(void)setCachedFrame:(id)arg0 forMovie:(id)arg1 atTime:(struct ? )arg2 canPoster:(BOOL)arg3 size:(struct CGSize )arg4 withRotation:(CGFloat)arg5 maximumCacheSize:(NSInteger)arg6 ;
+(void)setupCaches;
-(BOOL)fetchTimeInQueue:(struct ? )arg0 ;
-(BOOL)isFetching:(struct ? )arg0 ;
-(id)applyCrop:(id)arg0 ;
-(id)applyRotation:(id)arg0 ;
-(id)imageAtTime:(struct ? )arg0 ;
-(id)imageFrom:(struct CGImage *)arg0 ;
-(id)imageGenerator;
-(id)initWithMovie:(id)arg0 maximumCacheSize:(NSInteger)arg1 ;
-(void)cancelAllFetching;
-(void)cancelFetchingOutsideActiveSegment:(struct ? )arg0 until:(struct ? )arg1 maxRequestInFlight:(NSInteger)arg2 ;
-(void)changeTimesToHighPriority:(id)arg0 ;
-(void)clearImageGenerator;
-(void)cropImage:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)fetchTime:(struct ? )arg0 highPriority:(BOOL)arg1 resultBlock:(id)arg2 ;
-(void)logQueuedTimes;
-(void)requestedTimeTolerance:(struct ? )arg0 after:(struct ? )arg1 ;


@end


#endif