// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNDONATIONEXTENSIONREQUESTHANDLER_H
#define CNDONATIONEXTENSIONREQUESTHANDLER_H

@class NSString;
@protocol NSExtensionRequestHandling;

#import <Foundation/Foundation.h>


@interface CNDonationExtensionRequestHandler : NSObject <NSExtensionRequestHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)donationVersioningNumber;
-(void)beginRequestWithExtensionContext:(id)arg0 ;
-(void)redonateAllValuesWithReason:(NSUInteger)arg0 ;
-(void)renewExpirationDateForDonatedValue:(id)arg0 acknowledgementHandler:(id)arg1 ;
-(void)userDidRejectDonatedValue:(id)arg0 ;


@end


#endif