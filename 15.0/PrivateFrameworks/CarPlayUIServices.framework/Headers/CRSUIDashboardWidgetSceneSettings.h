// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRSUIDASHBOARDWIDGETSCENESETTINGS_H
#define CRSUIDASHBOARDWIDGETSCENESETTINGS_H

@class UICarPlayApplicationSceneSettings, NSString;
@protocol CRSUIDashboardWidgetSceneSettings, OS_xpc_object;



@interface CRSUIDashboardWidgetSceneSettings : UICarPlayApplicationSceneSettings <CRSUIDashboardWidgetSceneSettings>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSObject<OS_xpc_object> *endpoint;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger mapStyle;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger widgetStyle;


-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif