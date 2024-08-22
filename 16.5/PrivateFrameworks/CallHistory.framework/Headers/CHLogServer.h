// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHLOGSERVER_H
#define CHLOGSERVER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CHLogServer : NSObject

@property (readonly, nonatomic) os_unfair_lock_s accessorLock; // ivar: _accessorLock
@property (readonly, nonatomic) NSMutableDictionary *logHandleToDomain; // ivar: _logHandleToDomain


+(id)sharedInstance;
-(id)init;
-(id)logHandleForDomain:(char *)arg0 ;


@end


#endif