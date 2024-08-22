// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDBACKGROUNDOPERATIONMANAGERCURRENTDEVICESTATEDATASOURCE_H
#define HMDBACKGROUNDOPERATIONMANAGERCURRENTDEVICESTATEDATASOURCE_H

@protocol HMDBackgroundOperationManagerCurrentDeviceStateDataSource;

#import <Foundation/Foundation.h>


@interface HMDBackgroundOperationManagerCurrentDeviceStateDataSource : NSObject <HMDBackgroundOperationManagerCurrentDeviceStateDataSource>



@property (readonly, nonatomic) BOOL isAppleTV;
@property (readonly, nonatomic) BOOL isDesignatedFMFDevice;
@property (readonly, nonatomic) BOOL isHomePod;
@property (readonly, nonatomic) BOOL isiOSDevice;


-(id)currentDate;
-(id)timerWithTimeInterval:(CGFloat)arg0 options:(NSUInteger)arg1 label:(id)arg2 ;


@end


#endif