// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPSCHEDULERINFORMATION_H
#define SPSCHEDULERINFORMATION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPSchedulerInformation : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger advertisementCount; // ivar: _advertisementCount
@property (nonatomic) NSInteger lowBatteryCount; // ivar: _lowBatteryCount
@property (nonatomic) NSInteger priorityCount; // ivar: _priorityCount


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif