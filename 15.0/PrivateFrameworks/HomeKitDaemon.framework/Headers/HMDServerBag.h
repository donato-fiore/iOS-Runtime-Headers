// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDSERVERBAG_H
#define HMDSERVERBAG_H

@class HMFObject, NSURL, NSString, NSDictionary, NSURLSession;
@protocol NSURLSessionDelegate, HMFLocking, OS_dispatch_queue;



@interface HMDServerBag : HMFObject <NSURLSessionDelegate>

 {
    id<HMFLocking> *_lock;
}


@property (readonly, nonatomic) CGFloat accessoryReportTimeout;
@property (readonly, copy, nonatomic) NSURL *accessoryReportURL;
@property (readonly, copy, nonatomic) NSURL *activationCertificateHostnameURL;
@property (readonly, copy, nonatomic) NSURL *activationHostnameURL;
@property (readonly, nonatomic, getter=isControlCenterEnabled) BOOL controlCenterEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDictionary *dictionaryRepresentation; // ivar: _dictionaryRepresentation
@property (readonly, nonatomic) NSUInteger environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL refreshing; // ivar: _refreshing
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURL *url; // ivar: _url
@property (readonly, nonatomic) NSURLSession *urlSession; // ivar: _urlSession
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)defaultServerBag;
+(id)serverBagURLForEnvironment:(NSUInteger)arg0 ;
+(void)initialize;
-(id)init;
-(id)initWithEnvironment:(NSUInteger)arg0 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3 ;
-(void)_handleServerBagResponseData:(id)arg0 response:(id)arg1 error:(id)arg2 completionHandler:(id)arg3 ;
-(void)_loadDefaultBag;
-(void)_synchronizeWithCompletion:(id)arg0 ;


@end


#endif