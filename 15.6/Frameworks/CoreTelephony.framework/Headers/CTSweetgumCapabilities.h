// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTSWEETGUMCAPABILITIES_H
#define CTSWEETGUMCAPABILITIES_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTSweetgumCapabilities : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL supportsApplications; // ivar: _supportsApplications
@property (nonatomic) BOOL supportsPlans; // ivar: _supportsPlans
@property (nonatomic) BOOL supportsServices; // ivar: _supportsServices
@property (nonatomic) BOOL supportsUsage; // ivar: _supportsUsage


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif