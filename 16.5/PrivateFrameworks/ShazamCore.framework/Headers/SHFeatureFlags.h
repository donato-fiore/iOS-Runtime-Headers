// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHFEATUREFLAGS_H
#define SHFEATUREFLAGS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface SHFeatureFlags : NSObject

@property (readonly, nonatomic) BOOL appClipAppendsSubscriptionStatus;
@property (readonly, nonatomic) NSDictionary *featureFlags; // ivar: _featureFlags
@property (readonly, nonatomic) BOOL isAppClipEnabled;
@property (readonly, nonatomic) BOOL isTrackPageEnabled;
@property (readonly, nonatomic) BOOL trackPageDisplaysShazamUpsell;


-(id)initWithConfiguration:(id)arg0 ;


@end


#endif