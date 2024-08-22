// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYFIRMWAREUPDATETIMEWINDOW_H
#define HMDACCESSORYFIRMWAREUPDATETIMEWINDOW_H

@class NSString, NSDateComponents;
@protocol HMFLogging;

#import <Foundation/Foundation.h>


@interface HMDAccessoryFirmwareUpdateTimeWindow : NSObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDateComponents *endTimeComponents; // ivar: _endTimeComponents
@property (readonly) NSUInteger hash;
@property (readonly) NSDateComponents *startTimeComponents; // ivar: _startTimeComponents
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithStartTime:(id)arg0 endTime:(id)arg1 ;


@end


#endif