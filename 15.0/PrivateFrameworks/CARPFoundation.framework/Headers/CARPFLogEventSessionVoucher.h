// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CARPFLOGEVENTSESSIONVOUCHER_H
#define CARPFLOGEVENTSESSIONVOUCHER_H

@class NSString, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CARPFLogEventSessionVoucher : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServiceName:(id)arg0 ;
-(id)initWithUUID:(id)arg0 serviceName:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif