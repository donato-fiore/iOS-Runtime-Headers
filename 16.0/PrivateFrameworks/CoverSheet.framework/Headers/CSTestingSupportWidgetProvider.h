// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSTESTINGSUPPORTWIDGETPROVIDER_H
#define CSTESTINGSUPPORTWIDGETPROVIDER_H

@class WGWidgetDiscoveryController, NSString;
@protocol WGWidgetDiscoveryControllerDelegate, CSWidgetGroupViewControllerProviding;

#import <Foundation/Foundation.h>


@interface CSTestingSupportWidgetProvider : NSObject <WGWidgetDiscoveryControllerDelegate, CSWidgetGroupViewControllerProviding>

 {
    WGWidgetDiscoveryController *_widgetDiscoveryController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)newWidgetGroupViewControllerWithSettings:(struct WGWidgetListSettings )arg0 ;
-(id)newWidgetListViewControllerWithSettings:(struct WGWidgetListSettings )arg0 ;


@end


#endif