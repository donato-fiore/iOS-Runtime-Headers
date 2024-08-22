// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OKWIDGETLINEARGRADIENTVIEW_H
#define OKWIDGETLINEARGRADIENTVIEW_H

@class OFLinearGradientView, NSArray;
@protocol OKWidgetLinearGradientViewProxyExports;


#import "OKWidgetView.h"

@interface OKWidgetLinearGradientView : OKWidgetView <OKWidgetLinearGradientViewProxyExports>

 {
    OFLinearGradientView *_gradientView;
    NSArray *_gradientColors;
    NSArray *_gradientLocations;
}




+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg0 ;
-(BOOL)prepareForDisplay:(BOOL)arg0 ;
-(BOOL)prepareForUnload:(BOOL)arg0 ;
-(BOOL)prepareForWarmup:(BOOL)arg0 ;
-(BOOL)settingOpaque;
-(id)initWithWidget:(id)arg0 ;
-(id)settingGradientColors;
-(id)settingGradientLocations;
-(id)settingObjectForKey:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(struct CGPoint )settingEndPoint;
-(struct CGPoint )settingStartPoint;
-(void)dealloc;
-(void)setAntialiasing:(BOOL)arg0 ;
-(void)setSettingEndPoint:(struct CGPoint )arg0 ;
-(void)setSettingGradientColors:(id)arg0 ;
-(void)setSettingGradientLocations:(id)arg0 ;
-(void)setSettingOpaque:(BOOL)arg0 ;
-(void)setSettingStartPoint:(struct CGPoint )arg0 ;
-(void)updateGradient;


@end


#endif