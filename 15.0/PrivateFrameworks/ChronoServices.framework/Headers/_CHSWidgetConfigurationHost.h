// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CHSWIDGETCONFIGURATIONHOST_H
#define _CHSWIDGETCONFIGURATIONHOST_H

@class NSString, NSArray;
@protocol CHSWidgetConfigurationHost;

#import <Foundation/Foundation.h>


@interface _CHSWidgetConfigurationHost : NSObject <CHSWidgetConfigurationHost>

 {
    NSString *_identifier;
    NSArray *_configurations;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *widgetConfigurations;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdentifier:(id)arg0 configurations:(id)arg1 ;
-(id)widgetConfigurationsForApplicationContainerBundleIdentifier:(id)arg0 ;


@end


#endif