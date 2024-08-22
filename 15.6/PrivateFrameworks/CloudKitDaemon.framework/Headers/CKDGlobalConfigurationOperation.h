// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDGLOBALCONFIGURATIONOPERATION_H
#define CKDGLOBALCONFIGURATIONOPERATION_H

@protocol OS_dispatch_group;


#import "CKDOperation.h"
#import "CKDServerConfiguration.h"

@interface CKDGlobalConfigurationOperation : CKDOperation

@property (retain, nonatomic) CKDServerConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) NSObject<OS_dispatch_group> *configurationFetchedGroup; // ivar: _configurationFetchedGroup


-(BOOL)shouldCheckAppVersion;
-(id)activityCreate;
-(void)main;


@end


#endif