// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LAUNCHSTATECONTROLLER_H
#define LAUNCHSTATECONTROLLER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface LaunchStateController : NSObject {
    NSMutableArray *_actionBlocks;
}


@property (readonly, nonatomic) BOOL hasCompletedLaunch; // ivar: _hasCompletedLaunch


+(id)sharedController;
-(id)init;
-(void)applicationUIDidBecomeActive;
-(void)doAfterUIBecomesActive:(id)arg0 ;
-(void)forceMarkUIBecomeActiveForTesting;


@end


#endif