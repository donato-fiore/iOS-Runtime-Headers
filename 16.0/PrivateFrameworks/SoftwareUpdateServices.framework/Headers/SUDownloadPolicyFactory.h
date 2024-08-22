// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUDOWNLOADPOLICYFACTORY_H
#define SUDOWNLOADPOLICYFACTORY_H


#import <Foundation/Foundation.h>


@interface SUDownloadPolicyFactory : NSObject



+(id)_userDownloadPolicyFromCurrentPolicy:(id)arg0 descriptor:(id)arg1 networkMonitor:(id)arg2 allowCellularOverride:(BOOL)arg3 ;
+(id)downloadPolicyForType:(int)arg0 forDescriptor:(id)arg1 ;
+(id)userDownloadPolicyForDescriptor:(id)arg0 ;
+(id)userDownloadPolicyForDescriptor:(id)arg0 existingPolicy:(id)arg1 ;
+(id)userDownloadPolicyForDescriptor:(id)arg0 existingPolicy:(id)arg1 allowCellularOverride:(BOOL)arg2 ;
+(id)userDownloadPolicyForDescriptor:(id)arg0 existingPolicy:(id)arg1 networkMonitor:(id)arg2 allowCellularOverride:(BOOL)arg3 ;
+(int)downloadPolicyTypeForClass:(id)arg0 ;


@end


#endif