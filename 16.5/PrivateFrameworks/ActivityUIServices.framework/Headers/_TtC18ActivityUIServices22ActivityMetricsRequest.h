// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18ACTIVITYUISERVICES22ACTIVITYMETRICSREQUEST_H
#define _TTC18ACTIVITYUISERVICES22ACTIVITYMETRICSREQUEST_H

@class NSString;
@protocol NSCopying, NSSecureCoding, BSXPCCoding;

#import <Foundation/Foundation.h>

#import "_TtC18ActivityUIServices26ActivityItemMetricsRequest.h"
#import "_TtC18ActivityUIServices28SystemApertureMetricsRequest.h"

@interface _TtC18ActivityUIServices22ActivityMetricsRequest : NSObject <NSCopying, NSSecureCoding, BSXPCCoding>

 {
    ? _lockScreenMetrics;
    ? _systemApertureMetrics;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSInteger hash;
@property (nonatomic, retain) _TtC18ActivityUIServices26ActivityItemMetricsRequest *lockScreenMetrics;
@property (nonatomic, retain) _TtC18ActivityUIServices28SystemApertureMetricsRequest *systemApertureMetrics;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLockScreenMetrics:(id)arg0 systemApertureMetrics:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif