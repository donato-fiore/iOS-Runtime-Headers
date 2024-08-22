// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRSUIMUTABLETEMPLATEDASHBOARDWIDGETSCENESETTINGS_H
#define CRSUIMUTABLETEMPLATEDASHBOARDWIDGETSCENESETTINGS_H

@class NSString;
@protocol CRSUITemplateDashboardWidgetSceneSettings, OS_xpc_object;


#import "CRSUIMutableDashboardWidgetSceneSettings.h"

@interface CRSUIMutableTemplateDashboardWidgetSceneSettings : CRSUIMutableDashboardWidgetSceneSettings <CRSUITemplateDashboardWidgetSceneSettings>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSObject<OS_xpc_object> *endpoint;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger mapStyle;
@property (copy, nonatomic) NSString *proxiedApplicationBundleIdentifier;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSObject<OS_xpc_object> *templateEndpoint;
@property (readonly, nonatomic) NSUInteger widgetStyle;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif