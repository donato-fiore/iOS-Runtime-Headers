// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DSKEYCHAINPERSISTENCE_H
#define DSKEYCHAINPERSISTENCE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DSKeychainPersistence : NSObject {
    NSObject<OS_dispatch_queue> *_clientQueue;
}




-(BOOL)loadListenerState:(*id)arg0 withError:(*id)arg1 ;
-(BOOL)removeListenerState:(id)arg0 withError:(*id)arg1 ;
-(BOOL)saveListenerState:(id)arg0 withError:(*id)arg1 ;
-(id)initWithQueue:(id)arg0 ;


@end


#endif