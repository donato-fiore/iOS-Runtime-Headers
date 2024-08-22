// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEHOTSPOTHELPER_H
#define NEHOTSPOTHELPER_H


#import <Foundation/Foundation.h>


@interface NEHotspotHelper : NSObject



+(BOOL)logoff:(id)arg0 ;
+(BOOL)registerWithOptions:(id)arg0 queue:(id)arg1 handler:(id)arg2 ;
+(id)supportedNetworkInterfaces;


@end


#endif