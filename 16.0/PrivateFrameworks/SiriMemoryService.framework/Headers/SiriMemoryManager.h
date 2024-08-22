// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIMEMORYMANAGER_H
#define SIRIMEMORYMANAGER_H


#import <Foundation/Foundation.h>

#import "SiriMemoryManagerInternal.h"

@interface SiriMemoryManager : NSObject

@property (readonly, nonatomic) SiriMemoryManagerInternal *siriMemory; // ivar: _siriMemory


-(id)init;
-(void)createModules;


@end


#endif