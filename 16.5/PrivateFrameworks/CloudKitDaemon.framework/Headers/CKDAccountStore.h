// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDACCOUNTSTORE_H
#define CKDACCOUNTSTORE_H


#import <Foundation/Foundation.h>


@interface CKDAccountStore : NSObject



+(id)sharedAccountStore;
+(id)sharedPrimaryAccount;
+(void)invalidatePrimaryAccountCache;
-(id)init;


@end


#endif