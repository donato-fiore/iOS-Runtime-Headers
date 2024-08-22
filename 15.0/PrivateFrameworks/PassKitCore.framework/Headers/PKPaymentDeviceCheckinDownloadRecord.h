// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTDEVICECHECKINDOWNLOADRECORD_H
#define PKPAYMENTDEVICECHECKINDOWNLOADRECORD_H

@class NSUUID, NSString, NSData;
@protocol NSSecureCoding;


#import "PKPaymentBackgroundDownloadRecord.h"

@interface PKPaymentDeviceCheckinDownloadRecord : PKPaymentBackgroundDownloadRecord <NSSecureCoding>



@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *region; // ivar: _region
@property (retain, nonatomic) NSData *responseData; // ivar: _responseData


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif