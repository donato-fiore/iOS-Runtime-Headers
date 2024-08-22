// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKMAPSERVICEWALLETMERCHANTTICKET_H
#define _MKMAPSERVICEWALLETMERCHANTTICKET_H

@class NSString;
@protocol MKMapServiceWalletMerchantTicket, GEOMapServiceTicket;

#import <Foundation/Foundation.h>


@interface _mkMapServiceWalletMerchantTicket : NSObject <MKMapServiceWalletMerchantTicket>

 {
    id<GEOMapServiceTicket> *_ticket;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithRequest:(id)arg0 traits:(id)arg1 ;
-(void)cancel;
-(void)submitWithCompletionQueue:(id)arg0 handler:(id)arg1 ;


@end


#endif