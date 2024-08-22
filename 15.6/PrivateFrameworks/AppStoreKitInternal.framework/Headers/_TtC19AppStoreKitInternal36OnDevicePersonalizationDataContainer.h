// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC19APPSTOREKITINTERNAL36ONDEVICEPERSONALIZATIONDATACONTAINER_H
#define _TTC19APPSTOREKITINTERNAL36ONDEVICEPERSONALIZATIONDATACONTAINER_H

@class NSDictionary;
@protocol _TtP19AppStoreKitInternalP33_AB979C80E184FB007CB4BE4954BA89A643OnDevicePersonalizationDataContainerExports_;

#import <Foundation/Foundation.h>


@interface _TtC19AppStoreKitInternal36OnDevicePersonalizationDataContainer : NSObject <_TtP19AppStoreKitInternalP33_AB979C80E184FB007CB4BE4954BA89A643OnDevicePersonalizationDataContainerExports_>

 {
    ? personalizationData;
    ? metricsData;
}


@property (nonatomic, readonly) NSDictionary *metricsData;
@property (nonatomic, readonly) NSDictionary *personalizationData;


-(id)init;


@end


#endif