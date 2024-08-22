// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AACERTIFICATEPINNER_H
#define AACERTIFICATEPINNER_H

@class NSString;
@protocol NSURLConnectionDelegate, NSURLSessionDelegate;

#import <Foundation/Foundation.h>


@interface AACertificatePinner : NSObject <NSURLConnectionDelegate, NSURLSessionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isSetupServiceHost:(id)arg0 ;
+(BOOL)isValidCertificateTrust:(struct __SecTrust *)arg0 ;
+(id)sharedPinner;
-(void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)connection:(id)arg0 willSendRequestForAuthenticationChallenge:(id)arg1 ;


@end


#endif