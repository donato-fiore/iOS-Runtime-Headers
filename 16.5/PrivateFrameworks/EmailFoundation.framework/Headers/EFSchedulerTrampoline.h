// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EFSCHEDULERTRAMPOLINE_H
#define EFSCHEDULERTRAMPOLINE_H

@protocol EFScheduler;

#import <Foundation/Foundation.h>


@interface EFSchedulerTrampoline : NSObject {
    id<EFScheduler> *_scheduler;
    id *_object;
}




+(id)trampolineWithScheduler:(id)arg0 object:(id)arg1 ;
-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)_initWithScheduler:(id)arg0 object:(id)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif