// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OKWIDGETLABELVIEWPROXY_H
#define OKWIDGETLABELVIEWPROXY_H

@protocol OKWidgetLabelViewProxyExports;


#import "OKWidgetView.h"

@interface OKWidgetLabelViewProxy : OKWidgetView <OKWidgetLabelViewProxyExports>

 {
    id *_label;
}




+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg0 ;
-(BOOL)prepareForDisplay:(BOOL)arg0 ;
-(BOOL)prepareForUnload:(BOOL)arg0 ;
-(BOOL)prepareForWarmup:(BOOL)arg0 ;
-(NSInteger)settingTextAlignment;
-(float)settingFontSize;
-(id)initWithWidget:(id)arg0 ;
-(id)label;
-(id)layoutSettingsKeys;
-(id)settingFontName;
-(id)settingObjectForKey:(id)arg0 ;
-(id)settingText;
-(id)settingTextColor;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)dealloc;
-(void)setSettingFontName:(id)arg0 ;
-(void)setSettingFontSize:(float)arg0 ;
-(void)setSettingText:(id)arg0 ;
-(void)setSettingTextAlignment:(NSInteger)arg0 ;
-(void)setSettingTextBackgroundColor:(id)arg0 ;
-(void)setSettingTextColor:(id)arg0 ;


@end


#endif