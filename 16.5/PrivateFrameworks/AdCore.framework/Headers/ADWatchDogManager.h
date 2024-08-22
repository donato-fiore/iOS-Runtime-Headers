// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ADWATCHDOGMANAGER_H
#define ADWATCHDOGMANAGER_H

@class NSNumber, NSMutableDictionary;
@protocol OS_dispatch_queue;


#import "ADSingleton.h"

@interface ADWatchDogManager : ADSingleton {
    NSObject<OS_dispatch_queue> *_watchdogQueue;
}


@property (retain, nonatomic) NSNumber *currentToken; // ivar: _currentToken
@property (readonly, nonatomic) NSMutableDictionary *tokenCollection; // ivar: _tokenCollection


+(id)sharedInstance;
-(BOOL)removeWatchdogWithToken:(id)arg0 ;
-(BOOL)updateReason:(id)arg0 forToken:(id)arg1 ;
-(id)createNewWatchdog:(id)arg0 withTimer:(NSUInteger)arg1 ;
-(id)getNextToken;
-(id)init;
-(void)incrementToken;
-(void)simulateCrash:(id)arg0 becauseOf:(NSUInteger)arg1 actuallyTook:(CGFloat)arg2 ;


@end


#endif