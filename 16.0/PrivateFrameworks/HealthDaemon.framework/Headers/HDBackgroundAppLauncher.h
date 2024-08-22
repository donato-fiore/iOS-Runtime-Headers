// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDBACKGROUNDAPPLAUNCHER_H
#define HDBACKGROUNDAPPLAUNCHER_H


#import <Foundation/Foundation.h>


@interface HDBackgroundAppLauncher : NSObject



-(void)requestAppLaunchWithBundleID:(id)arg0 updateFrequency:(CGFloat)arg1 ;
-(void)requestAssertionInvalidationForBundleID:(id)arg0 ;


@end


#endif