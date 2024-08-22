// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPUITEMPLATEAPPLICATIONSCENESETTINGS_H
#define CPUITEMPLATEAPPLICATIONSCENESETTINGS_H

@class UIApplicationSceneSettings, NSString;
@protocol CPUITemplateApplicationSceneSettings, OS_xpc_object;



@interface CPUITemplateApplicationSceneSettings : UIApplicationSceneSettings <CPUITemplateApplicationSceneSettings>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSObject<OS_xpc_object> *endpoint;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger mapStyle;
@property (readonly) Class superclass;


-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif