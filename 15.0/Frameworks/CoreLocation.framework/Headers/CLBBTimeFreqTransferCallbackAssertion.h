// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLBBTIMEFREQTRANSFERCALLBACKASSERTION_H
#define CLBBTIMEFREQTRANSFERCALLBACKASSERTION_H


#import <Foundation/Foundation.h>


@interface CLBBTimeFreqTransferCallbackAssertion : NSObject {
    *CLCallbackAssertionInternal fInternal;
}




+(id)newAssertionForBundle:(id)arg0 withReason:(id)arg1 withCallbackQueue:(id)arg2 andBlock:(id)arg3 ;
+(id)newAssertionForBundleIdentifier:(id)arg0 withReason:(id)arg1 withCallbackQueue:(id)arg2 andBlock:(id)arg3 ;
-(id)initWithRegistrationMessageName:(char *)arg0 messageDictionary:(id)arg1 dispatchQueue:(id)arg2 codeBlock:(id)arg3 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif