// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTCOMMUTEPLANREMINDER_H
#define PKPAYMENTCOMMUTEPLANREMINDER_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKPaymentCommutePlanReminder : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat timeInterval; // ivar: _timeInterval


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimeInterval:(CGFloat)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif