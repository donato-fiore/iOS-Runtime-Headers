// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRIVACYPROXYNETWORKSTATUSTIME_H
#define PRIVACYPROXYNETWORKSTATUSTIME_H

@class NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PrivacyProxyNetworkStatus.h"

@interface PrivacyProxyNetworkStatusTime : NSObject <NSSecureCoding, NSCopying>

 {
    PrivacyProxyNetworkStatus *_networkStatus;
    NSDate *_networkStatusStartTime;
    NSDate *_networkStatusEndTime;
}




+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif