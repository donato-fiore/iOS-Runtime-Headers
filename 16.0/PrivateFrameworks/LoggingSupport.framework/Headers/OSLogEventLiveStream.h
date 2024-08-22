// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OSLOGEVENTLIVESTREAM_H
#define OSLOGEVENTLIVESTREAM_H

@protocol OS_xpc_object;


#import "OSLogEventStreamBase.h"
#import "_OSLogStreamFilter.h"
#import "OSLogEventLiveSource.h"

@interface OSLogEventLiveStream : OSLogEventStreamBase {
    _OSLogStreamFilter *_streamFilter;
    NSUInteger _reason;
}


@property (retain, nonatomic) NSObject<OS_xpc_object> *diagdconn; // ivar: _diagdconn
@property (copy, nonatomic) id *dropnoteHandler; // ivar: _dropnoteHandler
@property (readonly, nonatomic) OSLogEventLiveSource *source; // ivar: _source


-(id)initWithLiveSource:(id)arg0 ;
-(void)_activateLiveStream;
-(void)_handleStreamedObject:(id)arg0 usingProxy:(id)arg1 ;
-(void)activate;
-(void)invalidate;
-(void)setDroppedEventHandler:(id)arg0 ;
-(void)setFilterPredicate:(id)arg0 ;


@end


#endif