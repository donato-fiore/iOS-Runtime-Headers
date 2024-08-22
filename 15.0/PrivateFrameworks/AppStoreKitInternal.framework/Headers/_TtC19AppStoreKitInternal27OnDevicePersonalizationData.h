// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC19APPSTOREKITINTERNAL27ONDEVICEPERSONALIZATIONDATA_H
#define _TTC19APPSTOREKITINTERNAL27ONDEVICEPERSONALIZATIONDATA_H

@class NSString, NSArray;
@protocol _TtP19AppStoreKitInternalP33_AB979C80E184FB007CB4BE4954BA89A634OnDevicePersonalizationDataExports_;

#import <Foundation/Foundation.h>


@interface _TtC19AppStoreKitInternal27OnDevicePersonalizationData : NSObject <_TtP19AppStoreKitInternalP33_AB979C80E184FB007CB4BE4954BA89A634OnDevicePersonalizationDataExports_>

 {
    ? appId;
    ? userSegments;
}


@property (nonatomic, readonly) NSString *appId;
@property (nonatomic, readonly) NSArray *userSegments;


-(id)init;


@end


#endif