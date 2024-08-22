// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLGNSSDISABLEMENTASSERTION_H
#define CLGNSSDISABLEMENTASSERTION_H


#import <Foundation/Foundation.h>


@interface CLGnssDisablementAssertion : NSObject {
    unique_ptr<CLGnssDisablementAssertionInternal, std::default_delete<CLGnssDisablementAssertionInternal>> fInternal;
}




+(id)newAssertionForBundle:(id)arg0 withReason:(id)arg1 callbackQueue:(id)arg2 completionHandler:(id)arg3 ;
+(id)newAssertionForBundleIdentifier:(id)arg0 withReason:(id)arg1 callbackQueue:(id)arg2 completionHandler:(id)arg3 ;
-(id)initWithRegistrationMessageName:(char *)arg0 messagePayload:(id)arg1 callbackQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif