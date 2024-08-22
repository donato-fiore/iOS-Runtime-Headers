// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CNDREMOTEEXTENSIONCONTEXT_H
#define _CNDREMOTEEXTENSIONCONTEXT_H

@class CNDExtensionContext, NSString;
@protocol _CNDRemoteExtensionContextProtocol;


#import "CNDonationExtensionRequestHandler.h"

@interface _CNDRemoteExtensionContext : CNDExtensionContext <_CNDRemoteExtensionContextProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CNDonationExtensionRequestHandler *requestHandler; // ivar: _requestHandler
@property (readonly) Class superclass;


-(id)hostContext;
-(void)redonateAllValuesWithReason:(NSUInteger)arg0 ;
-(void)renewExpirationDateForDonatedValue:(id)arg0 acknowledgementHandler:(id)arg1 ;


@end


#endif