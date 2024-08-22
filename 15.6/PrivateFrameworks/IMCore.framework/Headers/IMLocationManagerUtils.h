// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMLOCATIONMANAGERUTILS_H
#define IMLOCATIONMANAGERUTILS_H


#import <Foundation/Foundation.h>


@interface IMLocationManagerUtils : NSObject



+(id)sharedInstance;
-(void)sendCurrentLocationMessageWithChat:(id)arg0 withLocationManager:(id)arg1 withSourceApplicationIdentifier:(id)arg2 foregroundAssertionForBundleIdentifier:(id)arg3 ;


@end


#endif