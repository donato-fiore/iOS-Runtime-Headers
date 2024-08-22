// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPPTHREADKEYEXCLUSIVEACCESSTOKEN_H
#define MPPTHREADKEYEXCLUSIVEACCESSTOKEN_H

@protocol MPExclusiveAccessToken;

#import <Foundation/Foundation.h>


@interface MPPThreadKeyExclusiveAccessToken : NSObject <MPExclusiveAccessToken>

 {
    NSUInteger _key;
    id *_owner;
}




+(id)tokenWithKey:(NSUInteger)arg0 owner:(id)arg1 ;
-(id)_init;
-(void)assertHasExclusiveAccessForOwner:(id)arg0 ;


@end


#endif