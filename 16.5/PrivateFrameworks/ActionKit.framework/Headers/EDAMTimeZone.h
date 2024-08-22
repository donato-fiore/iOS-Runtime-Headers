// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDAMTIMEZONE_H
#define EDAMTIMEZONE_H

@class NSString, NSNumber;


#import "FATObject.h"

@interface EDAMTimeZone : FATObject

@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) NSNumber *dstSavingsAdjustmentMillis; // ivar: _dstSavingsAdjustmentMillis
@property (retain, nonatomic) NSString *id; // ivar: _id
@property (retain, nonatomic) NSNumber *nextEnterDaylightSavings; // ivar: _nextEnterDaylightSavings
@property (retain, nonatomic) NSNumber *nextLeaveDaylightSavings; // ivar: _nextLeaveDaylightSavings
@property (retain, nonatomic) NSNumber *rawUTCOffsetMillis; // ivar: _rawUTCOffsetMillis


+(id)structFields;
+(id)structName;


@end


#endif