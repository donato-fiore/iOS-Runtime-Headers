// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFLOCATIONTRIGGER_H
#define WFLOCATIONTRIGGER_H

@class NSDate, CLCircularRegion;


#import "WFTrigger.h"

@interface WFLocationTrigger : WFTrigger

@property (retain, nonatomic) NSDate *endTime; // ivar: _endTime
@property (copy, nonatomic) CLCircularRegion *region; // ivar: _region
@property (retain, nonatomic) NSDate *startTime; // ivar: _startTime


+(BOOL)supportsSecureCoding;
+(id)timestampDateFormatter;
-(BOOL)hasValidConfiguration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)configureWithConfiguration:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif