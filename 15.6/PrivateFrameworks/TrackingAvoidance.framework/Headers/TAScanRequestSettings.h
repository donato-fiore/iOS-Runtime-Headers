// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TASCANREQUESTSETTINGS_H
#define TASCANREQUESTSETTINGS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TAScanRequestSettings : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGFloat interVisitScanDelay; // ivar: _interVisitScanDelay
@property (readonly, nonatomic) NSUInteger maxInterVisitScanRequests; // ivar: _maxInterVisitScanRequests
@property (readonly, nonatomic) CGFloat minInterVisitDisplayOnDuration; // ivar: _minInterVisitDisplayOnDuration
@property (readonly, nonatomic) CGFloat minVisitEntryDisplayOnDuration; // ivar: _minVisitEntryDisplayOnDuration


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDefaults;
-(id)initWithMinVisitEntryDisplayOnDuration:(CGFloat)arg0 minInterVisitDisplayOnDuration:(CGFloat)arg1 interVisitScanDelay:(CGFloat)arg2 maxInterVisitScanRequests:(NSUInteger)arg3 ;
-(id)initWithMinVisitEntryDisplayOnDurationOrDefault:(id)arg0 minInterVisitDisplayOnDurationOrDefault:(id)arg1 interVisitScanDelayOrDefault:(id)arg2 maxInterVisitScanRequestsOrDefault:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif