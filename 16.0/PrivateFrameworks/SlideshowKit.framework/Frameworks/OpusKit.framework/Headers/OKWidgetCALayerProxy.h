// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OKWIDGETCALAYERPROXY_H
#define OKWIDGETCALAYERPROXY_H

@class NSString, CALayer;
@protocol OKSettingsSupport;

#import <Foundation/Foundation.h>

#import "OKWidgetMicaDocument.h"

@interface OKWidgetCALayerProxy : NSObject <OKSettingsSupport>

 {
    OKWidgetMicaDocument *_widgetMicaDocument;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) CALayer *layer; // ivar: _layer
@property (readonly) Class superclass;
@property (nonatomic) OKWidgetMicaDocument *widgetMicaDocument;


+(id)proxyForLayer:(id)arg0 ;
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg0 ;
-(id)init;
-(id)initWithLayer:(id)arg0 ;
-(id)settingObjectForKey:(id)arg0 ;
-(void)dealloc;
-(void)setSettingContents:(id)arg0 ;
-(void)setUserSettingObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif