// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFPREFERENCESNOTIFICATIONCENTER_H
#define AFPREFERENCESNOTIFICATIONCENTER_H

@class NSNotificationCenter, NSLock, NSMutableDictionary;



@interface AFPreferencesNotificationCenter : NSNotificationCenter {
    NSLock *instanceLock;
    NSMutableDictionary *darwinRegistrationsByObserver;
    NSMutableDictionary *darwinRegistrationsByName;
}




+(id)sharedInstance;
-(id)addObserverForDarwinName:(struct __CFString *)arg0 usingBlock:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;


@end


#endif