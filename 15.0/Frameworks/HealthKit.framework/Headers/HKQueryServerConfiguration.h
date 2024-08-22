// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKQUERYSERVERCONFIGURATION_H
#define HKQUERYSERVERCONFIGURATION_H

@class NSString;


#import "HKTaskConfiguration.h"
#import "_HKFilter.h"
#import "HKObjectType.h"

@interface HKQueryServerConfiguration : HKTaskConfiguration

@property (nonatomic) CGFloat activationTime; // ivar: _activationTime
@property (copy, nonatomic) NSString *debugIdentifier; // ivar: _debugIdentifier
@property (retain, nonatomic) _HKFilter *filter; // ivar: _filter
@property (copy, nonatomic) HKObjectType *objectType; // ivar: _objectType
@property (nonatomic) NSInteger qualityOfService; // ivar: _qualityOfService
@property (nonatomic) BOOL shouldDeactivateAfterInitialResults; // ivar: _shouldDeactivateAfterInitialResults
@property (nonatomic) BOOL shouldSuppressDataCollection; // ivar: _shouldSuppressDataCollection


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif