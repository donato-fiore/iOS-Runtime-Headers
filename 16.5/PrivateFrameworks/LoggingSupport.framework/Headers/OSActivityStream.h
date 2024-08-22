// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OSACTIVITYSTREAM_H
#define OSACTIVITYSTREAM_H

@class NSMutableSet, NSCompoundPredicate;
@protocol OSActivityStreamDelegate, OSDeviceDelegate;

#import <Foundation/Foundation.h>

#import "_OSLogStreamFilter.h"
#import "OSLogDevice.h"

@interface OSActivityStream : NSObject {
    *os_activity_stream_s _stream;
    NSMutableSet *_pids;
    *void _deviceSearchSession;
    *void _deviceEventSession;
    BOOL _delegateStreamErrorLess;
    BOOL _delegateStreamWithError;
    BOOL _delegateHasDidFail;
    _OSLogStreamFilter *_streamFilter;
}


@property (weak, nonatomic) NSObject<OSActivityStreamDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) OSLogDevice *device; // ivar: _device
@property (weak, nonatomic) NSObject<OSDeviceDelegate> *deviceDelegate; // ivar: _deviceDelegate
@property (nonatomic) NSUInteger eventFilter; // ivar: _eventFilter
@property (nonatomic) NSUInteger events;
@property (nonatomic) NSUInteger options; // ivar: _options
@property (copy, nonatomic) NSCompoundPredicate *predicate; // ivar: _predicate


-(BOOL)establishTrust:(id)arg0 ;
-(BOOL)streamEvent:(id)arg0 error:(id)arg1 ;
-(id)getInfoForDevice:(id)arg0 andKey:(id)arg1 ;
-(id)init;
-(id)initWithDevice:(*void)arg0 ;
-(void)addProcessID:(int)arg0 ;
-(void)dealloc;
-(void)start;
-(void)startLocal;
-(void)startRemote;
-(void)stop;
-(void)stopLocal;
-(void)stopRemote;


@end


#endif