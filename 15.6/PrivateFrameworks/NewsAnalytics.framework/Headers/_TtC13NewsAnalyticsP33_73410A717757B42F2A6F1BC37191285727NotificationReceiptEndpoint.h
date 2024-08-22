// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC13NEWSANALYTICSP33_73410A717757B42F2A6F1BC37191285727NOTIFICATIONRECEIPTENDPOINT_H
#define _TTC13NEWSANALYTICSP33_73410A717757B42F2A6F1BC37191285727NOTIFICATIONRECEIPTENDPOINT_H

@class SwiftObject, NSString, NSURL;
@protocol AAEndpointProvider;



@interface _TtC13NewsAnalyticsP33_73410A717757B42F2A6F1BC37191285727NotificationReceiptEndpoint : SwiftObject <AAEndpointProvider>

 {
    ? name;
    ? defaultURL;
    ? notificationReceiptURL;
}


@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *sharedContainerIdentifier;
@property (nonatomic, readonly) NSURL *url;


-(id)endpointURLWithContentType:(NSInteger)arg0 ;


@end


#endif