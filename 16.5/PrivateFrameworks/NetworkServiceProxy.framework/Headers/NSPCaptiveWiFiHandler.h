// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPCAPTIVEWIFIHANDLER_H
#define NSPCAPTIVEWIFIHANDLER_H

@class NSString, NSURLSession, NSOperationQueue, NSURLSessionDataTask;

#import <Foundation/Foundation.h>


@interface NSPCaptiveWiFiHandler : NSObject {
    BOOL _isRunning;
    NSString *_interfaceName;
    NSURLSession *_urlSession;
    NSOperationQueue *_operationQueue;
    NSURLSessionDataTask *_dataTask;
    id *_completionHandler;
}




+(id)sharedHandler;
-(BOOL)evaluate:(id)arg0 completionHandler:(id)arg1 ;
-(void)abort;


@end


#endif