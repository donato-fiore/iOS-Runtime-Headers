// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSHAREDPEERPAYMENTWEBSERVICEARCHIVER_H
#define PKSHAREDPEERPAYMENTWEBSERVICEARCHIVER_H

@class NSString;
@protocol PKPeerPaymentWebServiceArchiver;

#import <Foundation/Foundation.h>

#import "PKPeerPaymentService.h"

@interface PKSharedPeerPaymentWebServiceArchiver : NSObject <PKPeerPaymentWebServiceArchiver>

 {
    PKPeerPaymentService *_peerPaymentService;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithPeerPaymentService:(id)arg0 ;
-(void)archiveContext:(id)arg0 ;


@end


#endif