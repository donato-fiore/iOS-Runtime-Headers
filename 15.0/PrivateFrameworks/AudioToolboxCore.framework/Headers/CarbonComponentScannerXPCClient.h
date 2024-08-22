// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CARBONCOMPONENTSCANNERXPCCLIENT_H
#define CARBONCOMPONENTSCANNERXPCCLIENT_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface CarbonComponentScannerXPCClient : NSObject {
    NSXPCConnection *_connection;
}




-(id)init;
-(id)xpcConnection;
-(struct AudioComponentVector )initialScan:(id)arg0 ;
-(void)handleConnectionError:(BOOL)arg0 ;
-(void)rescan:(id)arg0 added:(*void)arg1 removed:(*void)arg2 ;


@end


#endif