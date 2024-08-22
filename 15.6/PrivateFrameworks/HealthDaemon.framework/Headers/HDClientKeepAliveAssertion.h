// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCLIENTKEEPALIVEASSERTION_H
#define HDCLIENTKEEPALIVEASSERTION_H

@class HDAssertion, NSDate, NSString, NSDictionary;



@interface HDClientKeepAliveAssertion : HDAssertion {
    NSInteger _launchCount;
    NSDate *_lastLaunchAttempt;
    NSString *_clientBundleIdentifier;
    NSDictionary *_payloadOptions;
}






@end


#endif