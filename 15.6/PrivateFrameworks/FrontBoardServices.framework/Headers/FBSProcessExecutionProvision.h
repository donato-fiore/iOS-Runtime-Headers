// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBSPROCESSEXECUTIONPROVISION_H
#define FBSPROCESSEXECUTIONPROVISION_H

@class NSString, NSError;
@protocol BSDescriptionProviding, NSCopying, OS_dispatch_queue, FBSProcessExecutionProvisionDelegate, FBSProcessInternal;

#import <Foundation/Foundation.h>


@interface FBSProcessExecutionProvision : NSObject <BSDescriptionProviding, NSCopying>

 {
    BOOL _activated;
    NSObject<OS_dispatch_queue> *_delegateCalloutQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FBSProcessExecutionProvisionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isMonitoring) BOOL monitoring; // ivar: _monitoring
@property (readonly, weak, nonatomic) NSObject<FBSProcessInternal> *process; // ivar: _process
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isViolated) BOOL violated; // ivar: _violated


-(BOOL)isResourceProvision;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_beginMonitoring;
-(void)_noteViolatedWithError:(id)arg0 ;
-(void)_performDelegateCallout:(id)arg0 ;
-(void)_prepareForReuse;
-(void)_stopMonitoring;
-(void)_updateProgress;
-(void)monitorProcess:(id)arg0 ;
-(void)prepareForReuse;
-(void)stopMonitoring;
-(void)updateProgress;


@end


#endif