// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXDUETINTERACTIONDATASOURCE_H
#define ATXDUETINTERACTIONDATASOURCE_H


#import <Foundation/Foundation.h>

#import "ATXHeuristicDevice.h"

@interface ATXDuetInteractionDataSource : NSObject {
    ATXHeuristicDevice *_device;
}




-(id)initWithDevice:(id)arg0 ;
-(void)duetInteractionCountForHandles:(id)arg0 sinceDate:(id)arg1 callback:(id)arg2 ;


@end


#endif