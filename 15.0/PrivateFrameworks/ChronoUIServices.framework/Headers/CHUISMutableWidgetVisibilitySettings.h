// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHUISMUTABLEWIDGETVISIBILITYSETTINGS_H
#define CHUISMUTABLEWIDGETVISIBILITYSETTINGS_H



#import "CHUISWidgetVisibilitySettings.h"

@interface CHUISMutableWidgetVisibilitySettings : CHUISWidgetVisibilitySettings

@property (nonatomic, getter=isSettled) BOOL settled;
@property (nonatomic) CGRect visibleBounds;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif