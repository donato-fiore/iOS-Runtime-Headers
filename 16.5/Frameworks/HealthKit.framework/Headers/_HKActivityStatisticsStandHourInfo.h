// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKACTIVITYSTATISTICSSTANDHOURINFO_H
#define _HKACTIVITYSTATISTICSSTANDHOURINFO_H

@protocol _HKJSONObject, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _HKActivityStatisticsStandHourInfo : NSObject <_HKJSONObject, NSSecureCoding>



@property (nonatomic) NSInteger state; // ivar: _state
@property (nonatomic) CGFloat timeStamp; // ivar: _timeStamp


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimeStamp:(CGFloat)arg0 state:(NSInteger)arg1 ;
-(id)jsonObject;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif