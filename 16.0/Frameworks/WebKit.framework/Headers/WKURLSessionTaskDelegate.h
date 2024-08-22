// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKURLSESSIONTASKDELEGATE_H
#define WKURLSESSIONTASKDELEGATE_H

@class NSString;
@protocol NSURLSessionTaskDelegate;

#import <Foundation/Foundation.h>


@interface WKURLSessionTaskDelegate : NSObject <NSURLSessionTaskDelegate>

 {
    ObjectIdentifier<WebKit::DataTaskIdentifierType> _identifier;
    WeakPtr<WebKit::NetworkSessionCocoa, WTF::EmptyCounter> _session;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)connection;
-(id)initWithIdentifier:(struct ObjectIdentifier<WebKit::DataTaskIdentifierType> )arg0 session:(*void)arg1 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4 ;


@end


#endif