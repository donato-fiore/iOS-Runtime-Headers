// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPREFERENCES_H
#define HAPREFERENCES_H

@class NSUserDefaults;

#import <Foundation/Foundation.h>


@interface HAPreferences : NSObject {
    NSUserDefaults *_globalDefaults;
}


@property (readonly) BOOL sensitiveLoggingEnabled; // ivar: _sensitiveLoggingEnabled


+(id)sharedPreferences;
-(id)init;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif