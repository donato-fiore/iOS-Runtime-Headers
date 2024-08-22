// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPCAPTIVEWIFIHANDLER_H
#define NSPCAPTIVEWIFIHANDLER_H

@class NSURLSessionDataTask, NSString, NSOperationQueue, NSURLSession;
@protocol NSURLSessionTaskDelegate;

#import <Foundation/Foundation.h>


@interface NSPCaptiveWiFiHandler : NSObject <NSURLSessionTaskDelegate>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) NSURLSessionDataTask *dataTask; // ivar: _dataTask
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (nonatomic) BOOL isRunning; // ivar: _isRunning
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly) Class superclass;
@property (retain, nonatomic) NSURLSession *urlSession; // ivar: _urlSession


+(id)sharedHandler;
-(BOOL)evaluate:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)isHTTPResponseStatusCodeOK:(NSInteger)arg0 ;
-(BOOL)isHTTPResponseStatusCodeRedirect:(id)arg0 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didFinishCollectingMetrics:(id)arg2 ;
-(void)abort;
-(void)cleanup;
-(void)report:(int)arg0 ;
-(void)setup:(id)arg0 completionHandler:(id)arg1 ;
-(void)start;


@end


#endif