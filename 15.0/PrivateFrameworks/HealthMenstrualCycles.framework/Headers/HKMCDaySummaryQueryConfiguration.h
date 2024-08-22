// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKMCDAYSUMMARYQUERYCONFIGURATION_H
#define HKMCDAYSUMMARYQUERYCONFIGURATION_H

@class HKQueryServerConfiguration;



@interface HKMCDaySummaryQueryConfiguration : HKQueryServerConfiguration

@property (nonatomic) BOOL ascending; // ivar: _ascending
@property (nonatomic) ? dayIndexRange; // ivar: _dayIndexRange
@property (nonatomic) NSInteger limit; // ivar: _limit


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif