// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDDEFAULTSENDLATERUPDATECONTROLLERALARMDATEPROVIDER_H
#define EDDEFAULTSENDLATERUPDATECONTROLLERALARMDATEPROVIDER_H

@class NSString, NSDate;
@protocol EDSendLaterUpdateControllerAlarmDateProvider;

#import <Foundation/Foundation.h>


@interface EDDefaultSendLaterUpdateControllerAlarmDateProvider : NSObject <EDSendLaterUpdateControllerAlarmDateProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDate *nextDate;
@property (readonly) Class superclass;




@end


#endif