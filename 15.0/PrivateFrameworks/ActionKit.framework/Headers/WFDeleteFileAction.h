// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFDELETEFILEACTION_H
#define WFDELETEFILEACTION_H



#import "WFStorageServiceInputAction.h"

@interface WFDeleteFileAction : WFStorageServiceInputAction



-(id)parameterDefinitions;
-(void)confirmDeletionAtLevel:(NSUInteger)arg0 deleteImmediately:(BOOL)arg1 withService:(id)arg2 input:(id)arg3 ;
-(void)runAsynchronouslyWithInput:(id)arg0 storageService:(id)arg1 ;


@end


#endif