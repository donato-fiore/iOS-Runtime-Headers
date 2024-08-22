// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AEFEATUREFLAGSPROVIDER_H
#define AEFEATUREFLAGSPROVIDER_H


#import <Foundation/Foundation.h>

#import "AEOSGestalt.h"

@interface AEFeatureFlagsProvider : NSObject {
    AEOSGestalt *_OSGestalt;
}




-(id)init;
-(id)makeFeatureFlags;


@end


#endif