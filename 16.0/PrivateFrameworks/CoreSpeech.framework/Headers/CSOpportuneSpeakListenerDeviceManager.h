// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSOPPORTUNESPEAKLISTENERDEVICEMANAGER_H
#define CSOPPORTUNESPEAKLISTENERDEVICEMANAGER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CSOpportuneSpeakListenerDeviceManager : NSObject

@property (copy, nonatomic) NSString *deviceId; // ivar: _deviceId


+(id)sharedManager;


@end


#endif