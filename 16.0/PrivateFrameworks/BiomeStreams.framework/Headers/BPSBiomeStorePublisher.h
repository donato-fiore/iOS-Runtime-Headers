// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BPSBIOMESTOREPUBLISHER_H
#define BPSBIOMESTOREPUBLISHER_H

@class BMBookmarkablePublisher, BMStoreBookmark, BMStreamDatastoreReader, NSString;


#import "BMStreamsAccessClient.h"

@interface BPSBiomeStorePublisher : BMBookmarkablePublisher {
    CGFloat _startTime;
    CGFloat _endTime;
    NSUInteger _maxEvents;
    NSUInteger _lastEventCount;
    BOOL _reversed;
    BMStoreBookmark *_bookmark;
    BMStreamsAccessClient *_accessClient;
    BMStreamDatastoreReader *_streamDatastoreReader;
}


@property (readonly, nonatomic) NSString *streamId;


+(id)new;
+(id)publisherWithPublisher:(id)arg0 upstreams:(id)arg1 bookmarkState:(id)arg2 ;
-(BOOL)canStoreInternalStateInBookmark;
-(BOOL)canStorePassThroughValueInBookmark;
-(id)bookmarkableUpstreams;
-(id)init;
-(id)initWithStreamDatastoreReader:(id)arg0 streamsAccessClient:(id)arg1 ;
-(id)initWithStreamId:(id)arg0 storeConfig:(id)arg1 ;
-(id)initWithStreamId:(id)arg0 storeConfig:(id)arg1 streamsAccessClient:(id)arg2 ;
-(id)reverse;
-(id)withBookmark:(id)arg0 ;
-(id)withEndTime:(CGFloat)arg0 ;
-(id)withLastEvents:(NSUInteger)arg0 ;
-(id)withMaxEvents:(NSUInteger)arg0 ;
-(id)withStartTime:(CGFloat)arg0 ;
-(void)subscribe:(id)arg0 ;


@end


#endif