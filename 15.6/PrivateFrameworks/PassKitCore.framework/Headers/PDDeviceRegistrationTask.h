// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDDEVICEREGISTRATIONTASK_H
#define PDDEVICEREGISTRATIONTASK_H

@class NSURL, NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface PDDeviceRegistrationTask : NSObject

@property (copy, nonatomic) NSURL *brokerURL; // ivar: _brokerURL
@property (retain, nonatomic) NSMutableArray *completionHandlers; // ivar: _completionHandlers
@property (copy, nonatomic) NSString *reason; // ivar: _reason
@property (nonatomic) BOOL shouldForceApplePay; // ivar: _shouldForceApplePay
@property (nonatomic) BOOL shouldForcePeerPayment; // ivar: _shouldForcePeerPayment


-(id)init;


@end


#endif