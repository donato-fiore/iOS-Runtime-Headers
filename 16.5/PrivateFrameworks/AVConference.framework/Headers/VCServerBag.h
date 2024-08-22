// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCSERVERBAG_H
#define VCSERVERBAG_H


#import <Foundation/Foundation.h>


@interface VCServerBag : NSObject {
    _opaque_pthread_cond_t isLoadedCondition;
    _opaque_pthread_mutex_t isLoadedMutex;
    BOOL isLoaded;
    id *observer;
}




+(BOOL)verifyRequiredKeys:(*id)arg0 ;
+(BOOL)verifyRequiredKeys:(id)arg0 withError:(*id)arg1 ;
+(BOOL)verifyRequiredVoiceChatKeys:(*id)arg0 ;
+(id)sharedInstance;
+(void)checkKeysAgainstHardcodedPrefs:(id)arg0 ;
+(void)clearBagWithRefreshIntervalInSeconds:(int)arg0 ;
+(void)pullStoreBagKeys;
+(void)retrieveBag;
-(id)init;
-(void)waitForBagLoad;


@end


#endif