// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC16WEATHERANALYTICS15DYNAMICENDPOINT_H
#define _TTC16WEATHERANALYTICS15DYNAMICENDPOINT_H

@class SwiftObject, NSString, NSURL;
@protocol AAEndpointType;



@interface _TtC16WeatherAnalytics15DynamicEndpoint : SwiftObject <AAEndpointType>

 {
    ? $__lazy_storage_$_contentEnvironment;
    ? appConfigurationManager;
}


@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *sharedContainerIdentifier;
@property (nonatomic, readonly) NSURL *url;




@end


#endif