// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRIVACYPROXYSERVICESTATUSTIME_H
#define PRIVACYPROXYSERVICESTATUSTIME_H

@class NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PrivacyProxyServiceStatusTime : NSObject <NSSecureCoding, NSCopying>



@property NSUInteger serviceStatus; // ivar: _serviceStatus
@property (retain) NSDate *serviceStatusEndTime; // ivar: _serviceStatusEndTime
@property (retain) NSDate *serviceStatusStartTime; // ivar: _serviceStatusStartTime


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)diagnostics;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif