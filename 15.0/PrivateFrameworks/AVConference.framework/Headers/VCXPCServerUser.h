// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCXPCSERVERUSER_H
#define VCXPCSERVERUSER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VCXPCServerUser : NSObject

@property (copy, nonatomic) id *block; // ivar: block
@property (nonatomic) int eventLogLevel; // ivar: _eventLogLevel
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: queue


-(id)init;
-(void)dealloc;


@end


#endif