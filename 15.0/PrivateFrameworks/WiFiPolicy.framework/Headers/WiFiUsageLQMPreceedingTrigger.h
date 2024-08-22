// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WIFIUSAGELQMPRECEEDINGTRIGGER_H
#define WIFIUSAGELQMPRECEEDINGTRIGGER_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface WiFiUsageLQMPreceedingTrigger : NSObject

@property (retain, nonatomic) NSString *reason; // ivar: _reason
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp


-(id)description;
-(id)initWithReason:(id)arg0 andTimestamp:(id)arg1 ;


@end


#endif