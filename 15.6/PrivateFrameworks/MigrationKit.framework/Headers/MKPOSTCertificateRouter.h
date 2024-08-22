// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKPOSTCERTIFICATEROUTER_H
#define MKPOSTCERTIFICATEROUTER_H

@class NSString;
@protocol MKHTTPRouter, MKPOSTCertificateRouterDelegate;

#import <Foundation/Foundation.h>

#import "MKSRPServer.h"

@interface MKPOSTCertificateRouter : NSObject <MKHTTPRouter>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MKPOSTCertificateRouterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MKSRPServer *srp; // ivar: _srp
@property (readonly) Class superclass;


-(id)initWithSRP:(id)arg0 ;
-(void)server:(id)arg0 didReceiveRequest:(id)arg1 response:(id)arg2 ;


@end


#endif