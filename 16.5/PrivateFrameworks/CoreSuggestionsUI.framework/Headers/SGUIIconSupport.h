// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGUIICONSUPPORT_H
#define SGUIICONSUPPORT_H


#import <Foundation/Foundation.h>


@interface SGUIIconSupport : NSObject



+(id)_homeScreenDescriptorWithBorder:(BOOL)arg0 ;
+(id)_iconImageWithBundleIdentifier:(id)arg0 imageDescriptor:(id)arg1 ;
+(id)_imageWithIcon:(id)arg0 imageDescriptor:(id)arg1 ;
+(id)_spotlightDescriptorWithBorder:(BOOL)arg0 ;
+(id)homeScreenIconImageWithBundleIdentifier:(id)arg0 ;
+(id)homeScreenIconImageWithBundleIdentifier:(id)arg0 drawBorder:(BOOL)arg1 ;
+(id)iconForCalendarDate:(id)arg0 ;
+(id)iconForCalendarDate:(id)arg0 drawBorder:(BOOL)arg1 ;
+(id)spotlightIconImageWithBundleIdentifier:(id)arg0 ;
+(id)spotlightIconImageWithBundleIdentifier:(id)arg0 drawBorder:(BOOL)arg1 ;


@end


#endif