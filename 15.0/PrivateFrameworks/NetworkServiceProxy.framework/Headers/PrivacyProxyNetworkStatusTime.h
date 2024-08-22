// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRIVACYPROXYNETWORKSTATUSTIME_H
#define PRIVACYPROXYNETWORKSTATUSTIME_H

@class NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PrivacyProxyNetworkStatus.h"

@interface PrivacyProxyNetworkStatusTime : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) PrivacyProxyNetworkStatus *networkStatus; // ivar: _networkStatus
@property (retain, nonatomic) NSDate *networkStatusEndTime; // ivar: _networkStatusEndTime
@property (retain, nonatomic) NSDate *networkStatusStartTime; // ivar: _networkStatusStartTime


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif