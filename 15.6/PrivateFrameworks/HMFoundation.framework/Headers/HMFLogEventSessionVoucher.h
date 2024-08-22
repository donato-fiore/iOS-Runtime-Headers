// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMFLOGEVENTSESSIONVOUCHER_H
#define HMFLOGEVENTSESSIONVOUCHER_H

@class NSString, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMFLogEventSessionVoucher : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServiceName:(id)arg0 ;
-(id)initWithUUID:(id)arg0 serviceName:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif