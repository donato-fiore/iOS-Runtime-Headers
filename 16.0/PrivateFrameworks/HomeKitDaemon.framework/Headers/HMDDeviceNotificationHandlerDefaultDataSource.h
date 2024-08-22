// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDDEVICENOTIFICATIONHANDLERDEFAULTDATASOURCE_H
#define HMDDEVICENOTIFICATIONHANDLERDEFAULTDATASOURCE_H

@class NSString;
@protocol HMDDeviceNotificationHandlerDataSource;

#import <Foundation/Foundation.h>

#import "HMDHome.h"

@interface HMDDeviceNotificationHandlerDefaultDataSource : NSObject <HMDDeviceNotificationHandlerDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMDHome *home; // ivar: _home
@property (readonly) Class superclass;


-(id)initWithHome:(id)arg0 ;
-(id)timerWithType:(unsigned char)arg0 ;


@end


#endif