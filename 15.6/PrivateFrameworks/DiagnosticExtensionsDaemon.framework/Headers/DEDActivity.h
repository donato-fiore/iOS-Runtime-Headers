// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DEDACTIVITY_H
#define DEDACTIVITY_H

@protocol OS_os_activity;

#import <Foundation/Foundation.h>


@interface DEDActivity : NSObject

@property (retain) NSObject<OS_os_activity> *cleanup; // ivar: _cleanup


+(id)sharedInstance;
-(id)currentCleanupActivity;
-(id)newCleanupActivity;


@end


#endif