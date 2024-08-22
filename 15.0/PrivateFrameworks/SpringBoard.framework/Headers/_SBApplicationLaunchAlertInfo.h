// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SBAPPLICATIONLAUNCHALERTINFO_H
#define _SBAPPLICATIONLAUNCHALERTINFO_H

@class NSString, NSMutableSet;

#import <Foundation/Foundation.h>


@interface _SBApplicationLaunchAlertInfo : NSObject {
    NSString *_bundleID;
    NSMutableSet *_foregroundScenes;
    NSMutableSet *_alertItems;
}




-(id)description;


@end


#endif