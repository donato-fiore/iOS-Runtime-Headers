// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APPCMETRIC_H
#define APPCMETRIC_H

@class NSString, NSDictionary, NSDate;
@protocol APPCMetricable;

#import <Foundation/Foundation.h>


@interface APPCMetric : NSObject <APPCMetricable>

 {
    ? timestamp;
    ? contentId;
    ? clientBundleIdentifier;
    ? deviceIdentifier;
    ? userIdentifier;
    ? properties;
}


@property (nonatomic, copy) NSString *clientBundleIdentifier;
@property (nonatomic, copy) NSString *contentId;
@property (nonatomic, copy) NSString *deviceIdentifier;
@property (nonatomic) NSInteger metric; // ivar: metric
@property (nonatomic, copy) NSDictionary *properties;
@property (nonatomic) NSInteger route; // ivar: route
@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic, copy) NSString *userIdentifier;


-(id)init;


@end


#endif