// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BGSYSTEMTASKSTATUS_H
#define BGSYSTEMTASKSTATUS_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface BGSystemTaskStatus : NSObject

@property (readonly, copy, nonatomic) NSSet *blockingReasons; // ivar: _blockingReasons
@property (readonly, nonatomic) NSInteger status; // ivar: _status




@end


#endif