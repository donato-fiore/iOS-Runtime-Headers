// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSERIESBUILDERCONFIGURATION_H
#define HKSERIESBUILDERCONFIGURATION_H

@class NSUUID;


#import "HKTaskConfiguration.h"
#import "HKDevice.h"

@interface HKSeriesBuilderConfiguration : HKTaskConfiguration

@property (readonly, copy, nonatomic) HKDevice *device; // ivar: _device
@property (readonly, copy, nonatomic) NSUUID *workoutBuilderID; // ivar: _workoutBuilderID


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDevice:(id)arg0 workoutBuilderID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif