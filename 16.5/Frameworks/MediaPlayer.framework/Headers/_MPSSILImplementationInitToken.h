// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MPSSILIMPLEMENTATIONINITTOKEN_H
#define _MPSSILIMPLEMENTATIONINITTOKEN_H

@protocol MPExclusiveAccessToken;

#import <Foundation/Foundation.h>


@interface _MPSSILImplementationInitToken : NSObject <MPExclusiveAccessToken>





-(void)assertHasExclusiveAccessForOwner:(id)arg0 ;


@end


#endif