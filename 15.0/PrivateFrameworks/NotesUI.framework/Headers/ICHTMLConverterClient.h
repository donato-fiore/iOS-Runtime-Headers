// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICHTMLCONVERTERCLIENT_H
#define ICHTMLCONVERTERCLIENT_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICHTMLConverterClient : NSObject {
    NSXPCConnection *_connectionToService;
}


@property (nonatomic) NSUInteger requestCount; // ivar: _requestCount
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestCountQueue; // ivar: _requestCountQueue


+(id)sharedClient;
-(id)attributedStringFromHTMLString:(id)arg0 ;
-(id)init;
-(void)attributedStringFromHTMLString:(id)arg0 baseURL:(id)arg1 timeoutDate:(id)arg2 completionBlock:(id)arg3 ;
-(void)dealloc;
-(void)resumeConnectionIfNeeded;
-(void)suspendConnectionIfNeeded;


@end


#endif