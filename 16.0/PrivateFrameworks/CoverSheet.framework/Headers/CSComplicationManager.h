// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSCOMPLICATIONMANAGER_H
#define CSCOMPLICATIONMANAGER_H

@class PRSWallpaperObserver, PRSWallpaperObserverState, CHSWidgetHost, CHSWidgetDescriptorProvider, NSArray, UIColor, PRWidgetMetricsProvider, NSString;
@protocol CSApplicationInformationObserving, CHSWidgetDescriptorProviderObserver, CSApplicationInforming, CSWidgetURLHandling;

#import <Foundation/Foundation.h>

#import "CSComplicationDescriptor.h"

@interface CSComplicationManager : NSObject <CSApplicationInformationObserving, CHSWidgetDescriptorProviderObserver>

 {
    PRSWallpaperObserver *_wallpaperObserver;
    PRSWallpaperObserverState *_wallpaperState;
    CHSWidgetHost *_widgetHost;
    CHSWidgetDescriptorProvider *_widgetDescriptorProvider;
    CSComplicationDescriptor *_inlineComplicationDescriptor;
    NSArray *_graphicComplicationDescriptors;
    UIColor *_tintColor;
    PRWidgetMetricsProvider *_widgetMetricsProvider;
    id<CSApplicationInforming> *_applicationInformer;
    id<CSWidgetURLHandling> *_urlHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *onInlineComplicationUpdate; // ivar: _onInlineComplicationUpdate
@property (copy, nonatomic) id *onTintColorUpdate; // ivar: _onTintColorUpdate
@property (copy, nonatomic) id *onWidgetUpdate; // ivar: _onWidgetUpdate
@property (readonly) Class superclass;


-(BOOL)_bundleHasOpenURLEntitlement:(id)arg0 ;
-(BOOL)_widgetHasMatchingSystemDescriptor:(id)arg0 ;
-(id)initWithApplicationInformer:(id)arg0 urlHandler:(id)arg1 ;
-(void)_createComplicationDescriptorForWidget:(id)arg0 completion:(id)arg1 ;
-(void)_openApplicationWithBundleIdentifier:(id)arg0 action:(id)arg1 ;
-(void)_updateComplicationsForActivePosterConfiguration;
-(void)_updateWidgetHostConfiguration;
-(void)applicationInformer:(id)arg0 updatedApplications:(id)arg1 ;
-(void)dealloc;
-(void)descriptorsDidChangeForDescriptorProvider:(id)arg0 ;
-(void)handleLaunchRequestForViewController:(id)arg0 withAction:(id)arg1 ;


@end


#endif