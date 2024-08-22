// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SKUIAPPLICATIONSHUTDOWNHELPER_H
#define _SKUIAPPLICATIONSHUTDOWNHELPER_H


#import <Foundation/Foundation.h>

#import "SKUIApplicationController.h"

@interface _SKUIApplicationShutdownHelper : NSObject {
    SKUIApplicationController *_applicationController;
    NSUInteger _taskID;
}




-(id)initWithApplicationController:(id)arg0 ;
-(void)dealloc;
-(void)start;
-(void)stop;


@end


#endif