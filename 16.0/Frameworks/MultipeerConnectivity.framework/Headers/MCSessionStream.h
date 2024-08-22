// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCSESSIONSTREAM_H
#define MCSESSIONSTREAM_H

@class NSMutableData, NSString, NSProgress, NSURL;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "MCResourceProgressObserver.h"
#import "MCPeerID.h"
#import "MCResourceDownloader.h"

@interface MCSessionStream : NSObject

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (nonatomic) int fd; // ivar: _fd
@property (retain, nonatomic) NSMutableData *incomingBuffer; // ivar: _incomingBuffer
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) MCResourceProgressObserver *observer; // ivar: _observer
@property (nonatomic) MCPeerID *peerID; // ivar: _peerID
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (nonatomic) BOOL progressUnbounded; // ivar: _progressUnbounded
@property (nonatomic) NSObject<OS_dispatch_source> *source; // ivar: _source
@property (nonatomic) BOOL sourceSuspended; // ivar: _sourceSuspended
@property (nonatomic) int state; // ivar: state
@property (nonatomic) unsigned int streamID; // ivar: _streamID
@property (copy, nonatomic) NSURL *url; // ivar: _url
@property (retain, nonatomic) MCResourceDownloader *urlDownloader; // ivar: _urlDownloader


-(void)dealloc;


@end


#endif