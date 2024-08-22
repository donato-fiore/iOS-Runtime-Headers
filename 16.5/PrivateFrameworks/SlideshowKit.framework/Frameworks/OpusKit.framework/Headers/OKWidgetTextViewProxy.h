// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKWIDGETTEXTVIEWPROXY_H
#define OKWIDGETTEXTVIEWPROXY_H

@protocol OKWidgetTextViewProxyExports;


#import "OKWidgetView.h"

@interface OKWidgetTextViewProxy : OKWidgetView <OKWidgetTextViewProxyExports>

 {
    UIEdgeInsets _textEdgeInsets;
}




+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg0 ;
-(BOOL)prepareForDisplay:(BOOL)arg0 ;
-(BOOL)prepareForUnload:(BOOL)arg0 ;
-(BOOL)prepareForWarmup:(BOOL)arg0 ;
-(id)initWithWidget:(id)arg0 ;
-(id)layoutSettingsKeys;
-(id)settingObjectForKey:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(struct CGRect )textViewFrame;
-(struct UIEdgeInsets )settingTextEdgeInsets;
-(struct UIEdgeInsets )textEdgeInsets;
-(void)dealloc;
-(void)setSettingTextEdgeInsets:(struct UIEdgeInsets )arg0 ;


@end


#endif