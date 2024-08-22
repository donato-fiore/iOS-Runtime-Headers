// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC17SESSIONUISERVICES22ACTIVITYMETRICSREQUEST_H
#define _TTC17SESSIONUISERVICES22ACTIVITYMETRICSREQUEST_H

@protocol NSCopying, NSSecureCoding, BSXPCCoding;

#import <Foundation/Foundation.h>

#import "_TtC17SessionUIServices26ActivityItemMetricsRequest.h"

@interface _TtC17SessionUIServices22ActivityMetricsRequest : NSObject <NSCopying, NSSecureCoding, BSXPCCoding>



@property (nonatomic, retain) _TtC17SessionUIServices26ActivityItemMetricsRequest *lockScreenMetrics; // ivar: lockScreenMetrics


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLockScreenMetrics:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif