// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PASBUNDLEIDRESOLVER_H
#define _PASBUNDLEIDRESOLVER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_PASLock.h"

@interface _PASBundleIdResolver : NSObject {
    NSString *_exePath;
    _PASLock *_lock;
}




-(id)bundleIdentifierOrProcessName:(*BOOL)arg0 ;
-(id)initWithProcessIdentifier:(int)arg0 ;
-(void)_populateResultWithLockWitness:(id)arg0 ;


@end


#endif