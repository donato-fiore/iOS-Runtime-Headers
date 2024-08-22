// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AUSERVICEMANAGER_H
#define AUSERVICEMANAGER_H


#import <Foundation/Foundation.h>


@interface AUServiceManager : NSObject



+(int)startServiceInSandbox;
+(void)startService;


@end


#endif