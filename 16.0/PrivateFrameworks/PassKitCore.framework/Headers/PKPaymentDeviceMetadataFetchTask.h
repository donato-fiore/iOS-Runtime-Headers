// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTDEVICEMETADATAFETCHTASK_H
#define PKPAYMENTDEVICEMETADATAFETCHTASK_H


#import <Foundation/Foundation.h>

#import "PKPaymentDeviceMetadata.h"

@interface PKPaymentDeviceMetadataFetchTask : NSObject

@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) PKPaymentDeviceMetadata *deviceMetadata; // ivar: _deviceMetadata
@property (nonatomic) NSUInteger remaningFields; // ivar: _remaningFields
@property (nonatomic) NSUInteger requestedFields; // ivar: _requestedFields




@end


#endif