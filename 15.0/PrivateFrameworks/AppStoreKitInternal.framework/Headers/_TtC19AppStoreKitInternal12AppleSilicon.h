// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC19APPSTOREKITINTERNAL12APPLESILICON_H
#define _TTC19APPSTOREKITINTERNAL12APPLESILICON_H

@protocol _TtP19AppStoreKitInternalP33_F0F5E0F82971E7EAFD6A505989D796F919AppleSiliconExports_;

#import <Foundation/Foundation.h>


@interface _TtC19AppStoreKitInternal12AppleSilicon : NSObject <_TtP19AppStoreKitInternalP33_F0F5E0F82971E7EAFD6A505989D796F919AppleSiliconExports_>

 {
    ? isRosettaAvailableBox;
    ? rosettaAvailabilityConditionLock;
}


@property (nonatomic, readonly) BOOL isRosettaAvailable;
@property (nonatomic) BOOL isSupportEnabled; // ivar: isSupportEnabled


-(id)init;


@end


#endif