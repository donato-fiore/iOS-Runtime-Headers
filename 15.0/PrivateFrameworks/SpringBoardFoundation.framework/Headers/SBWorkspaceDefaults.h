// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBWORKSPACEDEFAULTS_H
#define SBWORKSPACEDEFAULTS_H



#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBWorkspaceDefaults : SBAbstractSpringBoardDefaultDomain

@property (readonly, nonatomic, getter=isBreadcrumbDisabled) BOOL breadcrumbDisabled;
@property (readonly, nonatomic) NSInteger medusaDeviceSimulation;
@property (readonly, nonatomic, getter=isMedusaEnabled) BOOL medusaEnabled;


-(void)_bindAndRegisterDefaults;


@end


#endif