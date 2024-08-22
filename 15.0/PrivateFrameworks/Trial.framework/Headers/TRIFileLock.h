// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIFILELOCK_H
#define TRIFILELOCK_H


#import <Foundation/Foundation.h>


@interface TRIFileLock : NSObject



+(int)_lockingFlagsFromFileLockMode:(struct ? )arg0 ;
+(struct ? )acquireLockOnPath:(id)arg0 fileLockMode:(struct ? )arg1 blocking:(BOOL)arg2 andRunBlock:(id)arg3 ;


@end


#endif