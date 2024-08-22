// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VEIOSSHAREDOBJECT_H
#define VEIOSSHAREDOBJECT_H


#import <Foundation/Foundation.h>


@interface VEiOSSharedObject : NSObject



+(BOOL)sharedInstanceExists;
+(id)sharedInstance;
+(void)purgeSharedInstance;


@end


#endif