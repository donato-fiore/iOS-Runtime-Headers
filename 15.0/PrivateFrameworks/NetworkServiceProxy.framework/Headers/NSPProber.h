// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPPROBER_H
#define NSPPROBER_H

@class NSURLSessionDataTask, NSString, NSDate, NSOperationQueue, NWPath, NSURLSession;
@protocol NSSecureCoding, NSCopying, NSURLSessionTaskDelegate, NSPProberDelegate, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface NSPProber : NSObject <NSSecureCoding, NSCopying, NSURLSessionTaskDelegate>



@property (retain, nonatomic) NSURLSessionDataTask *dataTask; // ivar: _dataTask
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<NSPProberDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int linkQuality; // ivar: _linkQuality
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSDate *nextProbeDate; // ivar: _nextProbeDate
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (retain, nonatomic) NWPath *path; // ivar: _path
@property (nonatomic) NSUInteger probeConnectedCount; // ivar: _probeConnectedCount
@property (nonatomic) NSUInteger probeConnectionTimeout; // ivar: _probeConnectionTimeout
@property (nonatomic) NSUInteger probeCount; // ivar: _probeCount
@property (nonatomic) NSUInteger probeFailedCount; // ivar: _probeFailedCount
@property (nonatomic) BOOL probeOnNetworkChange; // ivar: _probeOnNetworkChange
@property (nonatomic) BOOL probePending; // ivar: _probePending
@property (nonatomic) NSUInteger probeRedirectedCount; // ivar: _probeRedirectedCount
@property (retain, nonatomic) NSObject<OS_dispatch_source> *probeRetryTimer; // ivar: _probeRetryTimer
@property (nonatomic) NSUInteger probeServerErrorCount; // ivar: _probeServerErrorCount
@property (retain, nonatomic) NSURLSession *probeSession; // ivar: _probeSession
@property (nonatomic) NSUInteger probeSuccessCount; // ivar: _probeSuccessCount
@property (nonatomic) BOOL probingActive; // ivar: _probingActive
@property (nonatomic) BOOL proxyProber; // ivar: _proxyProber
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 probeName:(id)arg1 linkQuality:(int)arg2 path:(id)arg3 proxyProber:(BOOL)arg4 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didFinishCollectingMetrics:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleLinkQualityChange:(int)arg0 ;
-(void)handlePathChange:(id)arg0 ;
-(void)probeFailed;
-(void)probeRedirected;
-(void)probeServerError;
-(void)probeSuccess;
-(void)resetPendingFetches;
-(void)retryNetworkFetch;
-(void)sendProbe:(id)arg0 ;
-(void)setProbeParametersForLinkQuality;
-(void)setup;
-(void)startProbing;


@end


#endif