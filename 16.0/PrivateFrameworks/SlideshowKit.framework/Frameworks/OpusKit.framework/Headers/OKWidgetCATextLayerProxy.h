// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OKWIDGETCATEXTLAYERPROXY_H
#define OKWIDGETCATEXTLAYERPROXY_H

@class NSString;
@protocol OKSettingsSupport;


#import "OKWidgetCALayerProxy.h"

@interface OKWidgetCATextLayerProxy : OKWidgetCALayerProxy <OKSettingsSupport>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg0 ;
-(id)init;
-(id)settingObjectForKey:(id)arg0 ;
-(id)settingString;
-(void)dealloc;
-(void)setSettingString:(id)arg0 ;


@end


#endif