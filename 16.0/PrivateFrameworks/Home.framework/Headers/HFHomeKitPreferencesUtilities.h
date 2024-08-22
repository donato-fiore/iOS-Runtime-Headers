// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFHOMEKITPREFERENCESUTILITIES_H
#define HFHOMEKITPREFERENCESUTILITIES_H

@protocol HFHomeConfigurationStatus;

#import <Foundation/Foundation.h>


@interface HFHomeKitPreferencesUtilities : NSObject <HFHomeConfigurationStatus>





-(BOOL)areAnyAccessoriesConfigured;
-(BOOL)areHomesConfigured;


@end


#endif