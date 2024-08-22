// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LAUNCHSTATECONTROLLER_H
#define LAUNCHSTATECONTROLLER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface LaunchStateController : NSObject {
    NSMutableArray *_actionBlocks;
    BOOL _rootViewIsActive;
}




+(id)sharedController;
-(id)init;
-(void)applicationUIDidBecomeActive;
-(void)doAfterUIBecomesActive:(id)arg0 ;
-(void)forceMarkUIBecomeActiveForTesting;


@end


#endif