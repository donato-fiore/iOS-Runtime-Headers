// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC18ACTIVITYUISERVICES22ACTIVITYMETRICSREQUEST_H
#define _TTC18ACTIVITYUISERVICES22ACTIVITYMETRICSREQUEST_H

@protocol NSCopying, NSSecureCoding, BSXPCCoding;

#import <Foundation/Foundation.h>

#import "_TtC18ActivityUIServices26ActivityItemMetricsRequest.h"

@interface _TtC18ActivityUIServices22ActivityMetricsRequest : NSObject <NSCopying, NSSecureCoding, BSXPCCoding>



@property (nonatomic, retain) _TtC18ActivityUIServices26ActivityItemMetricsRequest *lockScreenMetrics; // ivar: lockScreenMetrics


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