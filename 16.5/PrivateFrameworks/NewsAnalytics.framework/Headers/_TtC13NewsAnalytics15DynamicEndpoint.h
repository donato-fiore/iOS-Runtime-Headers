// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC13NEWSANALYTICS15DYNAMICENDPOINT_H
#define _TTC13NEWSANALYTICS15DYNAMICENDPOINT_H

@class SwiftObject, NSString, NSURL;
@protocol AAEndpointProvider;



@interface _TtC13NewsAnalytics15DynamicEndpoint : SwiftObject <AAEndpointProvider>

 {
    ? appConfigurationManager;
    ? environment;
}


@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *sharedContainerIdentifier;
@property (nonatomic, readonly) NSURL *url;


-(id)endpointURLWithContentType:(NSInteger)arg0 ;


@end


#endif