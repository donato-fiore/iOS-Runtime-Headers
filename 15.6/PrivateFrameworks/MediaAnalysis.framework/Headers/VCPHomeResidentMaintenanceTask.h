// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPHOMERESIDENTMAINTENANCETASK_H
#define VCPHOMERESIDENTMAINTENANCETASK_H

@class NSDictionary;
@protocol VCPMADTaskProtocol;

#import <Foundation/Foundation.h>


@interface VCPHomeResidentMaintenanceTask : NSObject <VCPMADTaskProtocol>

 {
    id *_completionHandler;
    NSDictionary *_options;
    atomic<bool> _started;
    atomic<bool> _cancel;
    int _taskID;
}


@property (copy, nonatomic) id *cancelBlock; // ivar: _cancelBlock


+(id)taskWithOptions:(id)arg0 andCompletionHandler:(id)arg1 ;
-(BOOL)autoCancellable;
-(BOOL)isCanceled;
-(float)resourceRequirement;
-(id)initWithOptions:(id)arg0 andCompletionHandler:(id)arg1 ;
-(int)run;
-(void)cancel;
-(void)dealloc;


@end


#endif