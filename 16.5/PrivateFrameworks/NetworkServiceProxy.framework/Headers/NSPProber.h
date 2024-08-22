// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPPROBER_H
#define NSPPROBER_H

@class NSString, NSURLSession, NSURLSessionDataTask, NSOperationQueue, NSDate, NWPath;
@protocol NSSecureCoding, NSCopying, NSURLSessionTaskDelegate, NSPProberDelegate, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface NSPProber : NSObject <NSSecureCoding, NSCopying, NSURLSessionTaskDelegate>

 {
    BOOL _probingActive;
    BOOL _probeOnNetworkChange;
    BOOL _probePending;
    BOOL _proxyProber;
    int _linkQuality;
    id<NSPProberDelegate> *_delegate;
    NSString *_name;
    NSURLSession *_probeSession;
    NSURLSessionDataTask *_dataTask;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_source> *_probeRetryTimer;
    NSUInteger _probeCount;
    NSUInteger _probeConnectionTimeout;
    NSDate *_nextProbeDate;
    NWPath *_path;
    NSUInteger _probeSuccessCount;
    NSUInteger _probeFailedCount;
    NSUInteger _probeRedirectedCount;
    NSUInteger _probeServerErrorCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif