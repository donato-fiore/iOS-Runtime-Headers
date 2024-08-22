// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HDALERTSUPPRESSORASSERTION_H
#define _HDALERTSUPPRESSORASSERTION_H

@class HDAssertion, NSString;
@protocol OS_dispatch_source;



@interface _HDAlertSuppressorAssertion : HDAssertion {
    NSString *_processBundleIdentifier;
    NSObject<OS_dispatch_source> *_keepaliveTimer;
}






@end


#endif