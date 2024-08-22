// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXDEMOSTACKANDWIDGETPROVIDER_H
#define ATXDEMOSTACKANDWIDGETPROVIDER_H


#import <Foundation/Foundation.h>


@interface ATXDemoStackAndWidgetProvider : NSObject



+(BOOL)_shouldShowStackInGallery;
+(BOOL)isDemoModeEnabled;
+(id)_widgetArrayForPrefixKey:(id)arg0 countKey:(id)arg1 defaults:(id)arg2 descriptors:(id)arg3 ;
+(id)_widgetFromDictionary:(id)arg0 descriptors:(id)arg1 ;
+(id)demoStackAndWidgets;
+(void)startYourEngines;


@end


#endif