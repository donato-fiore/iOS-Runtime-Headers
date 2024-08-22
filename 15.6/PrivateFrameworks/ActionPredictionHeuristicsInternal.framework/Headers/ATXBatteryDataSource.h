// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXBATTERYDATASOURCE_H
#define ATXBATTERYDATASOURCE_H


#import <Foundation/Foundation.h>

#import "ATXHeuristicDevice.h"

@interface ATXBatteryDataSource : NSObject {
    ATXHeuristicDevice *_device;
}




-(id)initWithDevice:(id)arg0 ;
-(void)batteryInformationWithCallback:(id)arg0 ;


@end


#endif