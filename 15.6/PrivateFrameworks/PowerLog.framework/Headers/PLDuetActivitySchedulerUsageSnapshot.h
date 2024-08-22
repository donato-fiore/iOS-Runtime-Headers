// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLDUETACTIVITYSCHEDULERUSAGESNAPSHOT_H
#define PLDUETACTIVITYSCHEDULERUSAGESNAPSHOT_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface PLDuetActivitySchedulerUsageSnapshot : NSObject

@property (retain) NSString *bundleID; // ivar: _bundleID
@property CGFloat numberOfBytesDownloadedCell; // ivar: _numberOfBytesDownloadedCell
@property CGFloat numberOfBytesDownloadedWiFi; // ivar: _numberOfBytesDownloadedWiFi
@property CGFloat numberOfBytesUploadedCell; // ivar: _numberOfBytesUploadedCell
@property CGFloat numberOfBytesUploadedWiFi; // ivar: _numberOfBytesUploadedWiFi
@property (retain) NSDate *startDate; // ivar: _startDate
@property (retain) NSDate *stopDate; // ivar: _stopDate


-(id)description;


@end


#endif