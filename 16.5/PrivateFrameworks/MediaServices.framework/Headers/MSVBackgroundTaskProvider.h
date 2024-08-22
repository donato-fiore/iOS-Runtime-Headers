// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSVBACKGROUNDTASKPROVIDER_H
#define MSVBACKGROUNDTASKPROVIDER_H

@class BKSProcessAssertion, NSMutableDictionary;
@protocol MSVBackgroundTaskProviding;

#import <Foundation/Foundation.h>


@interface MSVBackgroundTaskProvider : NSObject <MSVBackgroundTaskProviding>

 {
    os_unfair_lock_s _lock;
    BKSProcessAssertion *_assertion;
    NSInteger _assertionCount;
    unsigned int _assertionInvalidationNonce;
}


@property (nonatomic) NSUInteger lastIdentifier; // ivar: _lastIdentifier
@property (retain, nonatomic) NSMutableDictionary *timeoutGuards; // ivar: _timeoutGuards


+(id)sharedProvider;
-(BOOL)_locked_acquireAssertion;
-(NSUInteger)beginTaskWithExpirationHandler:(id)arg0 ;
-(NSUInteger)beginTaskWithName:(id)arg0 expirationHandler:(id)arg1 ;
-(id)init;
-(void)_locked_releaseAssertion;
-(void)endTask:(NSUInteger)arg0 ;


@end


#endif