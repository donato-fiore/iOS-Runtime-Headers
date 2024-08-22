// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWSTREAMPAIR_H
#define NWSTREAMPAIR_H

@class CFNCoreLoggable;
@protocol OS_nw_connection, OS_dispatch_queue;



@interface NWStreamPair : CFNCoreLoggable {
    NSObject<OS_nw_connection> *_connection;
    *void _rs;
    *void _ws;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned char _doneInitialRead;
    *__CFError _readError;
    *__CFError _writeError;
    *ReadBuffer _readData;
    unsigned char _atEOF;
    unsigned char _wsClosing;
    unsigned char _rsClosing;
    *__CFData _cachedPeerName;
    *__SecTrust _cachedTrust;
    *__CFArray _cachedPeerCerts;
    NSInteger _outstandingWrites;
}




-(void)dealloc;


@end


#endif