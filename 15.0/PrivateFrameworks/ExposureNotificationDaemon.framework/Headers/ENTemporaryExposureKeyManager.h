// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENTEMPORARYEXPOSUREKEYMANAGER_H
#define ENTEMPORARYEXPOSUREKEYMANAGER_H

@class NSDate, ENTemporaryExposureKey;
@protocol OS_dispatch_queue, ENTemporaryExposureKeyManagerDelegate;

#import <Foundation/Foundation.h>


@interface ENTemporaryExposureKeyManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (weak, nonatomic) NSObject<ENTemporaryExposureKeyManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) unsigned int lastTEKRequestENIN; // ivar: _lastTEKRequestENIN
@property (copy, nonatomic) NSDate *nextPromptDate; // ivar: _nextPromptDate
@property (readonly, nonatomic) ENTemporaryExposureKey *oldestTEK; // ivar: _oldestTEK


+(id)temporaryExposureKeyFromRawKey:(id)arg0 error:(*id)arg1 ;
-(BOOL)requireKeyReleasePromptForClient:(id)arg0 ;
-(id)_getTemporaryExposureKeysFromRollingStart:(unsigned int)arg0 includingActive:(BOOL)arg1 refresh:(BOOL)arg2 error:(*id)arg3 ;
-(id)getTemporaryExposureKeysForClient:(id)arg0 fromRollingStart:(unsigned int)arg1 didPrompt:(BOOL)arg2 forTesting:(BOOL)arg3 forceRefresh:(BOOL)arg4 error:(*id)arg5 ;
-(id)getTemporaryExposureKeysFromRollingStart:(unsigned int)arg0 includingActive:(BOOL)arg1 refresh:(BOOL)arg2 error:(*id)arg3 ;
-(id)initWithQueue:(id)arg0 ;
-(void)resetClientState;


@end


#endif