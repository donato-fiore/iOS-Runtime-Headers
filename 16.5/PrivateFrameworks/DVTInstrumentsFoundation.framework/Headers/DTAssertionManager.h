// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTASSERTIONMANAGER_H
#define DTASSERTIONMANAGER_H

@class NSArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DTAssertionManager : NSObject {
    NSArray *_assertionFactories;
    NSArray *_disableKeys;
    NSObject<OS_dispatch_queue> *_guard;
    NSMutableDictionary *_pidInfosByPid;
}




+(id)sharedInstance;
+(void)defaultAssertionFactories:(*id)arg0 andDisableKeys:(*id)arg1 ;
-(id)init;
-(id)initWithAssertionFactories:(id)arg0 andDisableKeys:(id)arg1 ;
-(void)removeAssertionsForPid:(int)arg0 onBehalfOfClient:(id)arg1 ;
-(void)removeClaimsHeldByClient:(id)arg0 ;
-(void)takeAssertionsForPid:(int)arg0 onBehalfOfClient:(id)arg1 withOptions:(id)arg2 ;


@end


#endif