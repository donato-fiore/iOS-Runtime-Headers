// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MECHANISMCONTEXT_H
#define MECHANISMCONTEXT_H

@protocol LABackoffCounter, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MechanismContext : NSObject

@property (retain, nonatomic) NSObject<LABackoffCounter> *backoffCounter; // ivar: _backoffCounter
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serverQueue; // ivar: _serverQueue


+(id)sharedInstance;


@end


#endif