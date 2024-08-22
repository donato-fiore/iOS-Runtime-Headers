// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDPSTATEHANDLERRESULT_H
#define CDPSTATEHANDLERRESULT_H

@class NSError;

#import <Foundation/Foundation.h>


@interface CDPStateHandlerResult : NSObject

@property BOOL cloudDataProtectionEnabled; // ivar: _cloudDataProtectionEnabled
@property (retain) NSError *error; // ivar: _error
@property NSUInteger peeriCloudKeychainState; // ivar: _peeriCloudKeychainState
@property BOOL shouldCompleteSignIn; // ivar: _shouldCompleteSignIn


+(id)resultWithCloudDataProtectionEnabled:(BOOL)arg0 shouldCompleteSignIn:(BOOL)arg1 error:(id)arg2 ;
+(id)resultWithCloudDataProtectionEnabled:(BOOL)arg0 shouldCompleteSignIn:(BOOL)arg1 peeriCloudKeychainState:(NSUInteger)arg2 error:(id)arg3 ;
+(id)resultWithError:(id)arg0 ;
+(id)successResult;


@end


#endif