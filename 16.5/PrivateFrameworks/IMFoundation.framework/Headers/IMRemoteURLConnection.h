// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMREMOTEURLCONNECTION_H
#define IMREMOTEURLCONNECTION_H

@class NSString, NSURLRequest;

#import <Foundation/Foundation.h>

#import "IMURLRequestSession.h"

@interface IMRemoteURLConnection : NSObject

@property (retain, nonatomic) IMURLRequestSession *URLSession; // ivar: _URLSession
@property (copy) id *block; // ivar: _block
@property (retain) NSString *bundleIdentifierForDataUsage; // ivar: _bundleIdentifierForDataUsage
@property (nonatomic) BOOL cancelled; // ivar: _cancelled
@property int concurrentConnections; // ivar: _concurrentConnections
@property BOOL disableKeepAlive; // ivar: _disableKeepAlive
@property BOOL forceCellularIfPossible; // ivar: _forceCellularIfPossible
@property int keepAliveCell; // ivar: _keepAliveCell
@property int keepAliveWifi; // ivar: _keepAliveWifi
@property (nonatomic) BOOL loading; // ivar: _loading
@property (retain) NSURLRequest *request; // ivar: _request
@property BOOL requireIDSHost; // ivar: _requireIDSHost
@property BOOL shouldReturnTimingData; // ivar: _shouldReturnTimingData
@property BOOL shouldUsePipelining; // ivar: _shouldUsePipelining


-(id)initWithURLRequest:(id)arg0 completionBlock:(id)arg1 ;
-(id)initWithURLRequest:(id)arg0 completionBlockWithTimingData:(id)arg1 ;
-(void)_direct_cancel;
-(void)_direct_load;
-(void)cancel;
-(void)dealloc;
-(void)load;


@end


#endif