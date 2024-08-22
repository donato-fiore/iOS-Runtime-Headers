// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKRECALIBRATEESTIMATESREQUESTRECORD_H
#define HKRECALIBRATEESTIMATESREQUESTRECORD_H

@class NSDate, NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKSampleType.h"
#import "HKSource.h"

@interface HKRecalibrateEstimatesRequestRecord : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSDate *effectiveDate; // ivar: _effectiveDate
@property (readonly, copy, nonatomic) HKSampleType *sampleType; // ivar: _sampleType
@property (readonly, copy, nonatomic) NSUUID *sessionIdentifier; // ivar: _sessionIdentifier
@property (readonly, copy, nonatomic) HKSource *source; // ivar: _source


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSessionIdentifier:(id)arg0 source:(id)arg1 sampleType:(id)arg2 effectiveDate:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif