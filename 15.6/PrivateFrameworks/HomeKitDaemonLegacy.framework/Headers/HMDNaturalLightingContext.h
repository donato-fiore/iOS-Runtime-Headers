// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDNATURALLIGHTINGCONTEXT_H
#define HMDNATURALLIGHTINGCONTEXT_H

@class HMFObject, NSString, NSTimeZone;
@protocol HMFLogging, NSSecureCoding, NSCopying;


#import "HMDNaturalLightingCurve.h"

@interface HMDNaturalLightingContext : HMFObject <HMFLogging, NSSecureCoding, NSCopying>



@property (readonly, copy) HMDNaturalLightingCurve *curve; // ivar: _curve
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSTimeZone *timeZone; // ivar: _timeZone


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCurve:(id)arg0 timeZone:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif