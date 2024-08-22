// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MANAGEDSETTINGSOBSERVER_H
#define MANAGEDSETTINGSOBSERVER_H


#import <Foundation/Foundation.h>


@interface ManagedSettingsObserver : NSObject

@property (readonly, nonatomic) BOOL isSharingPolicyActive;


+(id)sharedInstance;
-(void)start;


@end


#endif