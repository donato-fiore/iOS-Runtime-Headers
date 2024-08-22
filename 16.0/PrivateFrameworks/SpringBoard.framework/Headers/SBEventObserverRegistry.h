// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBEVENTOBSERVERREGISTRY_H
#define SBEVENTOBSERVERREGISTRY_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SBEventObserverRegistry : NSObject {
    *void _provider;
    NSMutableDictionary *_observers;
}




+(id)sharedInstance;
-(void)addObserverWithToken:(NSUInteger)arg0 forEvent:(id)arg1 ;
-(void)handleEvent:(id)arg0 token:(NSUInteger)arg1 action:(NSInteger)arg2 ;
-(void)postEventToInterestedObservers:(struct __CFString *)arg0 ;
-(void)removeObserverWithToken:(NSUInteger)arg0 forEvent:(id)arg1 ;
-(void)setValue:(BOOL)arg0 forState:(struct __CFString *)arg1 ;


@end


#endif