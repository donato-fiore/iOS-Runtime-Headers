// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPMABASETASK_H
#define VCPMABASETASK_H

@protocol VCPMADTaskProtocol;

#import <Foundation/Foundation.h>


@interface VCPMABaseTask : NSObject <VCPMADTaskProtocol>

 {
    atomic<bool> _started;
    atomic<bool> _canceled;
}


@property (copy, nonatomic) id *cancelBlock; // ivar: _cancelBlock
@property (readonly, nonatomic) id *completionHandler; // ivar: _completionHandler


-(BOOL)autoCancellable;
-(BOOL)isCanceled;
-(BOOL)run:(*id)arg0 ;
-(float)resourceRequirement;
-(id)init;
-(id)initWithCompletionHandler:(id)arg0 ;
-(int)run;
-(void)cancel;
-(void)dealloc;


@end


#endif