// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKWATCHFACELIBRARYSERVER_H
#define CLKWATCHFACELIBRARYSERVER_H

@class NSXPCConnection;
@protocol CLKWatchFaceLibraryServerInterface;

#import <Foundation/Foundation.h>


@interface CLKWatchFaceLibraryServer : NSObject <CLKWatchFaceLibraryServerInterface>

 {
    NSXPCConnection *_connection;
}




+(id)sharedInstance;
-(void)_clearConnection;
-(void)_queue_setupConnectionIfNeeded;
-(void)dealloc;
-(void)openWatchFaceURLWithBookmarkData:(id)arg0 sourceApplicationBundleIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)validateFaceType:(id)arg0 faceBundleId:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif