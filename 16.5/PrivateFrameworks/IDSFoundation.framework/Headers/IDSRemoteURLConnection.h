// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSREMOTEURLCONNECTION_H
#define IDSREMOTEURLCONNECTION_H

@class NSString, NSURLRequest;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface IDSRemoteURLConnection : NSObject {
    NSObject<OS_xpc_object> *_connection;
    BOOL _cancelled;
    BOOL _loading;
    int _retries;
}


@property (copy) id *block; // ivar: _block
@property (retain) NSString *bundleIdentifierForDataUsage; // ivar: _bundleIdentifierForDataUsage
@property int concurrentConnections; // ivar: _concurrentConnections
@property BOOL disableKeepAlive; // ivar: _disableKeepAlive
@property BOOL forceCellularIfPossible; // ivar: _forceCellularIfPossible
@property int keepAliveCell; // ivar: _keepAliveCell
@property int keepAliveWifi; // ivar: _keepAliveWifi
@property (retain) NSURLRequest *request; // ivar: _request
@property BOOL requireIDSHost; // ivar: _requireIDSHost
@property BOOL shouldReturnTimingData; // ivar: _shouldReturnTimingData
@property BOOL shouldUsePipelining; // ivar: _shouldUsePipelining


+(id)alloc;
-(BOOL)_connect;
-(BOOL)_disconnect;
-(id)initWithURLRequest:(id)arg0 completionBlock:(id)arg1 ;
-(id)initWithURLRequest:(id)arg0 completionBlockWithTimingData:(id)arg1 ;
-(void)_disconnected;
-(void)cancel;
-(void)dealloc;
-(void)load;


@end


#endif