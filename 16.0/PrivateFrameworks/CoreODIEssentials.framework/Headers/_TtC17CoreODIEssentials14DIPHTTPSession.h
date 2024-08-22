// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC17COREODIESSENTIALS14DIPHTTPSESSION_H
#define _TTC17COREODIESSENTIALS14DIPHTTPSESSION_H

@class NSString;
@protocol NSURLSessionTaskDelegate;

#import <Foundation/Foundation.h>


@interface _TtC17CoreODIEssentials14DIPHTTPSession : NSObject <NSURLSessionTaskDelegate>

 {
    ? urlSession;
    ? anonymousURLSession;
    ? configuration;
    ? retrier;
    ? overridingAltDSID;
}


@property (nonatomic, readonly) NSString *description;


-(id)init;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4 ;
-(void)URLSession:(id)arg0 taskIsWaitingForConnectivity:(id)arg1 ;


@end


#endif