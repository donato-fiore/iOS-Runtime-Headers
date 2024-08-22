// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSNONCHANNELAPPDECIDER_H
#define VSNONCHANNELAPPDECIDER_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface VSNonChannelAppDecider : NSObject

@property (copy, nonatomic) NSArray *appDescriptions; // ivar: _appDescriptions
@property (copy, nonatomic) NSString *preferredAppBundleOrAdamID; // ivar: _preferredAppBundleOrAdamID
@property (copy, nonatomic) NSString *preferredDeviceFamily; // ivar: _preferredDeviceFamily


-(id)decidedNonChannelApps;
-(id)init;


@end


#endif