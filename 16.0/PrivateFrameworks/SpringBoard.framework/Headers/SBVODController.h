// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBVODCONTROLLER_H
#define SBVODCONTROLLER_H


#import <Foundation/Foundation.h>


@interface SBVODController : NSObject



+(id)sharedInstance;
-(id)init;
-(void)_launchIPodIfNecessary;
-(void)dealloc;


@end


#endif