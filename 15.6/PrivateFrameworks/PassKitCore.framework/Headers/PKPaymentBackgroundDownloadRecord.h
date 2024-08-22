// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTBACKGROUNDDOWNLOADRECORD_H
#define PKPAYMENTBACKGROUNDDOWNLOADRECORD_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKPaymentBackgroundDownloadRecord : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger retryCount; // ivar: _retryCount
@property (nonatomic) NSInteger taskType; // ivar: _taskType


+(BOOL)supportsSecureCoding;
+(id)taskWithType:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif