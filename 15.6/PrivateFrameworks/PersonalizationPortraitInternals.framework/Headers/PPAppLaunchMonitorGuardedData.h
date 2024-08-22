// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPAPPLAUNCHMONITORGUARDEDDATA_H
#define PPAPPLAUNCHMONITORGUARDEDDATA_H

@class NSMutableDictionary, _CDClientContext;

#import <Foundation/Foundation.h>


@interface PPAppLaunchMonitorGuardedData : NSObject {
    NSMutableDictionary *handlers;
    NSUInteger nextToken;
    BOOL isRegistered;
    _CDClientContext *clientContext;
}






@end


#endif