// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDAMTIMEZONESPEC_H
#define EDAMTIMEZONESPEC_H

@class NSNumber, NSString;


#import "FATObject.h"

@interface EDAMTimeZoneSpec : FATObject

@property (retain, nonatomic) NSNumber *dstSavingsAdjustmentMillis; // ivar: _dstSavingsAdjustmentMillis
@property (retain, nonatomic) NSString *id; // ivar: _id
@property (retain, nonatomic) NSNumber *nextEnterDaylightSavings; // ivar: _nextEnterDaylightSavings
@property (retain, nonatomic) NSNumber *nextLeaveDaylightSavings; // ivar: _nextLeaveDaylightSavings
@property (retain, nonatomic) NSNumber *rawUTCOffsetMillis; // ivar: _rawUTCOffsetMillis


+(id)structFields;
+(id)structName;


@end


#endif