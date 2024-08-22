// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AEPREFERENCESPROVIDER_H
#define AEPREFERENCESPROVIDER_H


#import <Foundation/Foundation.h>

#import "AEOSGestalt.h"

@interface AEPreferencesProvider : NSObject {
    AEOSGestalt *_OSGestalt;
}




-(id)init;
-(id)makePreferences;


@end


#endif