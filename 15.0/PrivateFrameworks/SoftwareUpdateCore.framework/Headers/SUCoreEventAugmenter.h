// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUCOREEVENTAUGMENTER_H
#define SUCOREEVENTAUGMENTER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SUCoreDescriptor.h"
#import "SUCorePolicy.h"

@interface SUCoreEventAugmenter : NSObject {
    NSObject<OS_dispatch_queue> *_stateQueue;
}


@property (retain, nonatomic) SUCoreDescriptor *alternateDescriptor; // ivar: _alternateDescriptor
@property (retain, nonatomic) SUCorePolicy *policy; // ivar: _policy
@property (retain, nonatomic) SUCoreDescriptor *primaryDescriptor; // ivar: _primaryDescriptor


+(void)augmentEvent:(id)arg0 withDescriptor:(id)arg1 ;
+(void)augmentEvent:(id)arg0 withDescriptor:(id)arg1 specifyAlternateUpdate:(BOOL)arg2 ;
+(void)augmentEvent:(id)arg0 withPolicy:(id)arg1 ;
+(void)augmentEvent:(id)arg0 withPolicy:(id)arg1 primaryDescriptor:(id)arg2 alternateDescriptor:(id)arg3 ;
-(id)init;
-(void)augmentEvent:(id)arg0 ;


@end


#endif