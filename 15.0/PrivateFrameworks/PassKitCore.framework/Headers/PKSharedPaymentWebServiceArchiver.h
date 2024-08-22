// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSHAREDPAYMENTWEBSERVICEARCHIVER_H
#define PKSHAREDPAYMENTWEBSERVICEARCHIVER_H

@class NSString;
@protocol PKPaymentWebServiceArchiver;

#import <Foundation/Foundation.h>


@interface PKSharedPaymentWebServiceArchiver : NSObject <PKPaymentWebServiceArchiver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedPaymentWebServiceArchiver;
-(void)archiveBackgroundContext:(id)arg0 ;
-(void)archiveContext:(id)arg0 ;


@end


#endif