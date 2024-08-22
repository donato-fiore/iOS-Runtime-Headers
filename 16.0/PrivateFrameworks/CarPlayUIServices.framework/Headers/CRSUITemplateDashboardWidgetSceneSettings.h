// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRSUITEMPLATEDASHBOARDWIDGETSCENESETTINGS_H
#define CRSUITEMPLATEDASHBOARDWIDGETSCENESETTINGS_H

@class NSString;
@protocol CRSUITemplateDashboardWidgetSceneSettings, OS_xpc_object;


#import "CRSUIDashboardWidgetSceneSettings.h"

@interface CRSUITemplateDashboardWidgetSceneSettings : CRSUIDashboardWidgetSceneSettings <CRSUITemplateDashboardWidgetSceneSettings>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSObject<OS_xpc_object> *endpoint;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger mapStyle;
@property (readonly, copy, nonatomic) NSString *proxiedApplicationBundleIdentifier;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSObject<OS_xpc_object> *templateEndpoint;
@property (readonly, nonatomic) NSUInteger widgetStyle;


-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif