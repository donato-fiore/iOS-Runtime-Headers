// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXFLIGHTSTATUSDATASOURCE_H
#define ATXFLIGHTSTATUSDATASOURCE_H


#import <Foundation/Foundation.h>

#import "ATXHeuristicDevice.h"

@interface ATXFlightStatusDataSource : NSObject {
    ATXHeuristicDevice *_device;
}




-(BOOL)_flightIDIsValid:(id)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(void)flightStatusForFlight:(id)arg0 callback:(id)arg1 ;


@end


#endif