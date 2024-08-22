// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMSTOREENUMERATORBASE_H
#define BMSTOREENUMERATORBASE_H


#import <Foundation/Foundation.h>

#import "BMStreamMetadata.h"
#import "BMStoreBookmark.h"
#import "BMFrameStore.h"
#import "BMStreamDatastoreBase.h"

@interface BMStoreEnumeratorBase : NSObject {
    NSUInteger _frameStoreOffset;
    CGFloat _iterationStartTime;
    CGFloat _endTime;
    NSUInteger _maxEvents;
    NSUInteger _eventCount;
    NSUInteger _lastEventCount;
    NSUInteger _options;
    BMStreamMetadata *_metadata;
}


@property (readonly, nonatomic) BMStoreBookmark *bookmark;
@property (readonly, nonatomic) BMFrameStore *currentFrameStore; // ivar: _currentFrameStore
@property (readonly, nonatomic) BMStreamDatastoreBase *ds; // ivar: _ds
@property (readonly, nonatomic) BMStreamMetadata *metadata;


-(BOOL)advanceBookmarkToStartTime:(CGFloat)arg0 eventsFound:(*NSUInteger)arg1 lastN:(NSUInteger)arg2 ;
-(BOOL)isDataAccessible;
-(id)_eventWithFrameStore:(id)arg0 frame:(id)arg1 error:(unsigned char)arg2 ;
-(id)copyNextEventAndMoveBookmark:(BOOL)arg0 ;
-(id)copyNextEventAndMoveBookmark:(BOOL)arg0 makeEvent:(id)arg1 ;
-(id)initWithStreamDatastore:(id)arg0 bookmark:(id)arg1 options:(NSUInteger)arg2 ;
-(id)initWithStreamDatastore:(id)arg0 currentFrameStore:(id)arg1 frameStoreOffset:(NSUInteger)arg2 iterationStartTime:(CGFloat)arg3 endTime:(CGFloat)arg4 maxEvents:(NSUInteger)arg5 lastN:(NSUInteger)arg6 options:(NSUInteger)arg7 ;
-(id)initWithStreamDatastore:(id)arg0 startTime:(CGFloat)arg1 endTime:(CGFloat)arg2 maxEvents:(NSUInteger)arg3 lastN:(NSUInteger)arg4 options:(NSUInteger)arg5 ;
-(id)nextEvent;
-(id)peekEvent;
-(void)nextEventWithContext:(id)arg0 ;
-(void)setFrameStoreOffset:(NSUInteger)arg0 ;


@end


#endif