// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPUIMUTABLETEMPLATEAPPLICATIONSCENESETTINGS_H
#define CPUIMUTABLETEMPLATEAPPLICATIONSCENESETTINGS_H

@class UIMutableApplicationSceneSettings, NSString;
@protocol CPUITemplateApplicationSceneSettings, OS_xpc_object;



@interface CPUIMutableTemplateApplicationSceneSettings : UIMutableApplicationSceneSettings <CPUITemplateApplicationSceneSettings>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSObject<OS_xpc_object> *endpoint;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif