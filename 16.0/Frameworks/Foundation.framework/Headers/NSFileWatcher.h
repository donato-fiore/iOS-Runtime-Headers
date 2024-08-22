// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSFILEWATCHER_H
#define NSFILEWATCHER_H

@class NSURL, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "NSFileWatcherObservations.h"
#import "NSString.h"

@interface NSFileWatcher : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    ? _auditToken;
    NSURL *_url;
    id *_observer;
    BOOL _isWatching;
    NSObject<OS_dispatch_source> *_eventSource;
    NSUInteger _lastObservedEventID;
    *__FSEventStream _eventStream;
    BOOL _eventsAreAboutDirectory;
    BOOL _isUnsettled;
    NSFileWatcherObservations *_itemObservations;
    NSMutableDictionary *_subitemObservationsByEventPath;
    NSURL *_fileReferenceURL;
    NSString *_formerPath;
    NSURL *_formerURL;
}




-(id)initWithQueue:(id)arg0 auditToken:(struct ? )arg1 ;
-(void)_coalesceSubitemObservations;
-(void)dealloc;
-(void)handleFSEventPath:(id)arg0 flags:(unsigned int)arg1 id:(NSUInteger)arg2 ;
-(void)setLastObservedEventID:(NSUInteger)arg0 ;
-(void)setObserver:(id)arg0 ;
-(void)setURL:(id)arg0 ;
-(void)settle;
-(void)start;
-(void)stop;
-(void)unsettle;
-(void)watchItem;


@end


#endif