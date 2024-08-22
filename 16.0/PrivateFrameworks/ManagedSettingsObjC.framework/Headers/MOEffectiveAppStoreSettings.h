// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MOEFFECTIVEAPPSTORESETTINGS_H
#define MOEFFECTIVEAPPSTORESETTINGS_H


#import <Foundation/Foundation.h>

#import "MOEffectiveBool.h"
#import "MOEffectiveInteger.h"

@interface MOEffectiveAppStoreSettings : NSObject

@property (readonly) MOEffectiveBool *denyInAppPurchases;
@property (readonly) MOEffectiveInteger *maximumRating;
@property (readonly) MOEffectiveBool *requirePasswordForPurchases;




@end


#endif