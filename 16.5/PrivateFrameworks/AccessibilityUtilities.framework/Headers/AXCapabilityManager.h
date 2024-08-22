// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXCAPABILITYMANAGER_H
#define AXCAPABILITYMANAGER_H


#import <Foundation/Foundation.h>


@interface AXCapabilityManager : NSObject



+(id)sharedManager;
-(BOOL)isAccessibilityCapability:(id)arg0 ;
-(BOOL)isCapabilityAvailable:(id)arg0 ;
-(id)capabilities;


@end


#endif