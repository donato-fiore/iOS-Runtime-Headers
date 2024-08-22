// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UARPUPDATEFIRMWAREANALYTICSEVENTFRAMEWORKPARAMS_H
#define UARPUPDATEFIRMWAREANALYTICSEVENTFRAMEWORKPARAMS_H

@class NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UARPUpdateFirmwareAnalyticsEventFrameworkParams : NSObject <NSSecureCoding>



@property (retain) NSNumber *applyDuration; // ivar: _applyDuration
@property (retain) NSNumber *applyStatus; // ivar: _applyStatus
@property (retain) NSNumber *applyUserInitiated; // ivar: _applyUserInitiated
@property (retain) NSNumber *applyVendorError; // ivar: _applyVendorError
@property (retain) NSNumber *stagingDuration; // ivar: _stagingDuration
@property (retain) NSNumber *stagingIterations; // ivar: _stagingIterations
@property (retain) NSNumber *stagingStatus; // ivar: _stagingStatus
@property (retain) NSNumber *stagingUserInitiated; // ivar: _stagingUserInitiated
@property (retain) NSNumber *stagingVendorError; // ivar: _stagingVendorError


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif