// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICNASAMPLINGCONTROLLER_H
#define ICNASAMPLINGCONTROLLER_H


#import <Foundation/Foundation.h>


@interface ICNASamplingController : NSObject

@property (readonly, nonatomic) BOOL shouldTrackSyncHealth; // ivar: _shouldTrackSyncHealth


+(id)sharedController;
-(id)init;


@end


#endif