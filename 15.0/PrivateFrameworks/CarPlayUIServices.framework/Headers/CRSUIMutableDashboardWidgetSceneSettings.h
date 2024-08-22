// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRSUIMUTABLEDASHBOARDWIDGETSCENESETTINGS_H
#define CRSUIMUTABLEDASHBOARDWIDGETSCENESETTINGS_H

@class UIMutableCarPlayApplicationSceneSettings, NSString;
@protocol CRSUIDashboardWidgetSceneSettings, CRSUIMutableMapStyleProviding, OS_xpc_object;



@interface CRSUIMutableDashboardWidgetSceneSettings : UIMutableCarPlayApplicationSceneSettings <CRSUIDashboardWidgetSceneSettings, CRSUIMutableMapStyleProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSObject<OS_xpc_object> *endpoint;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger mapStyle;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger widgetStyle;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif