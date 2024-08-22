// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEPRIVATELTENETWORK_H
#define NEPRIVATELTENETWORK_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NEPrivateLTENetwork : NSObject <NSCopying, NSSecureCoding>



@property (copy) NSString *mobileCountryCode; // ivar: _mobileCountryCode
@property (copy) NSString *mobileNetworkCode; // ivar: _mobileNetworkCode
@property (copy) NSString *trackingAreaCode; // ivar: _trackingAreaCode


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif