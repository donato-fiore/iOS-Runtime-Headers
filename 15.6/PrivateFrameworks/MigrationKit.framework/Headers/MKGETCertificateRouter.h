// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKGETCERTIFICATEROUTER_H
#define MKGETCERTIFICATEROUTER_H

@class NSString;
@protocol MKHTTPRouter, MKGETCertificateRouterDelegate;

#import <Foundation/Foundation.h>

#import "MKCertificate.h"
#import "MKSRPServer.h"

@interface MKGETCertificateRouter : NSObject <MKHTTPRouter>



@property (retain, nonatomic) MKCertificate *certificate; // ivar: _certificate
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MKGETCertificateRouterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MKSRPServer *srp; // ivar: _srp
@property (readonly) Class superclass;


-(id)initWithSRP:(id)arg0 certificate:(id)arg1 ;
-(void)server:(id)arg0 didReceiveRequest:(id)arg1 response:(id)arg2 ;


@end


#endif