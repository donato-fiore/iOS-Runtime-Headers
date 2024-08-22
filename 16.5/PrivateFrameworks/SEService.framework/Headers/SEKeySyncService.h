// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEKEYSYNCSERVICE_H
#define SEKEYSYNCSERVICE_H


#import <Foundation/Foundation.h>


@interface SEKeySyncService : NSObject



+(id)transcodeTLKShares:(id)arg0 fromCurrentIdentifier:(id)arg1 toIdentity:(id)arg2 outError:(*id)arg3 ;
+(void)recoveryDidComplete:(id)arg0 ;
+(void)shouldRollKeysNow:(id)arg0 altDISD:(id)arg1 ;


@end


#endif