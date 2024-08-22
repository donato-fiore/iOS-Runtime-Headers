// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDCONTAINERSPECIFICINFOOPERATION_H
#define CKDCONTAINERSPECIFICINFOOPERATION_H

@protocol OS_dispatch_group;


#import "CKDOperation.h"
#import "CKDContainerServerInfo.h"

@interface CKDContainerSpecificInfoOperation : CKDOperation

@property (copy, nonatomic) CKDContainerServerInfo *containerServerInfo; // ivar: _containerServerInfo
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *infoFetchedGroup; // ivar: _infoFetchedGroup
@property (nonatomic) BOOL requireUserIDs; // ivar: _requireUserIDs


-(BOOL)shouldCheckAppVersion;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(void)main;
-(void)setCompletionBlock:(id)arg0 ;


@end


#endif