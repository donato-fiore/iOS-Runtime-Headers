// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXTIMELINERELEVANCEPERSONALIZEDCONFIG_H
#define ATXTIMELINERELEVANCEPERSONALIZEDCONFIG_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface ATXTimelineRelevancePersonalizedConfig : NSObject {
    NSDictionary *_personalizedConfiguration;
}




-(id)_readPersonalizedConfiguration;
-(id)init;
-(id)initWithPersonalizedConfiguration:(id)arg0 ;
-(id)personalizedValueForParameter:(id)arg0 forWidgetBundleIdentifier:(id)arg1 kind:(id)arg2 ;


@end


#endif