// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKSESSIONGLOBALS_H
#define GKSESSIONGLOBALS_H


#import <Foundation/Foundation.h>


@interface GKSessionGlobals : NSObject {
    *unsigned int _activePIDList;
    NSUInteger _activePIDListSize;
    NSUInteger _activePIDListCount;
    _opaque_pthread_mutex_t _lock;
}




-(BOOL)hasActivePID:(unsigned int)arg0 ;
-(id)init;
-(void)lock;
-(void)registerPID:(unsigned int)arg0 ;
-(void)unlock;
-(void)unregisterPID:(unsigned int)arg0 ;


@end


#endif