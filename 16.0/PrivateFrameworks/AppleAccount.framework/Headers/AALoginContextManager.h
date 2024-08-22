// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AALOGINCONTEXTMANAGER_H
#define AALOGINCONTEXTMANAGER_H


#import <Foundation/Foundation.h>

#import "AAStorableLoginContext.h"

@interface AALoginContextManager : NSObject {
    AAStorableLoginContext *_stashedContext;
    os_unfair_lock_s _stashedContextLock;
}


@property (retain, nonatomic) AAStorableLoginContext *stashedContext;


+(id)sharedManager;
+(void)stashLoginResponseWithAuthenticationResults:(id)arg0 cloudKitToken:(id)arg1 ;
-(id)init;
-(void)persistStashedContext;


@end


#endif