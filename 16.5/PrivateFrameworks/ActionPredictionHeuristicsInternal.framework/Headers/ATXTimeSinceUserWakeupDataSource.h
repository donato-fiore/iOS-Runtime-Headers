// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXTIMESINCEUSERWAKEUPDATASOURCE_H
#define ATXTIMESINCEUSERWAKEUPDATASOURCE_H


#import <Foundation/Foundation.h>

#import "ATXHeuristicDevice.h"

@interface ATXTimeSinceUserWakeupDataSource : NSObject {
    ATXHeuristicDevice *_device;
}




-(id)initWithDevice:(id)arg0 ;
-(void)timeIntervalSinceUserWakeupWithCallback:(id)arg0 ;


@end


#endif