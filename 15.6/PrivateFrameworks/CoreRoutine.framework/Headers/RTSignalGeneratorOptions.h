// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RTSIGNALGENERATOROPTIONS_H
#define RTSIGNALGENERATOROPTIONS_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "RTLocation.h"

@interface RTSignalGeneratorOptions : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) RTLocation *endLocation; // ivar: _endLocation
@property (readonly, nonatomic) NSArray *expectedVisits; // ivar: _expectedVisits
@property (readonly, nonatomic) RTLocation *startLocation; // ivar: _startLocation


+(BOOL)supportsSecureCoding;
+(id)getVisitsFromVisitsDescriptionData:(id)arg0 ;
+(id)visitsDescriptionDataAtPath:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartLocation:(id)arg0 endLocation:(id)arg1 expectedVisits:(id)arg2 ;
-(id)initWithVisitsDescriptionPListPath:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif