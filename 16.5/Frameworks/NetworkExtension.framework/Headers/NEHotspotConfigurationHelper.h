// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEHOTSPOTCONFIGURATIONHELPER_H
#define NEHOTSPOTCONFIGURATIONHELPER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NEHelper.h"

@interface NEHotspotConfigurationHelper : NSObject {
    NEHelper *_helper;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)init;


@end


#endif