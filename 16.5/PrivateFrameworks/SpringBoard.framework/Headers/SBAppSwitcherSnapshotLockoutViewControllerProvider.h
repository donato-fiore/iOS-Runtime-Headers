// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAPPSWITCHERSNAPSHOTLOCKOUTVIEWCONTROLLERPROVIDER_H
#define SBAPPSWITCHERSNAPSHOTLOCKOUTVIEWCONTROLLERPROVIDER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface SBAppSwitcherSnapshotLockoutViewControllerProvider : NSObject {
    NSMutableArray *_availableControllers;
}




-(id)blockingViewControllerForBundleIdentifier:(id)arg0 screenTimePolicy:(NSInteger)arg1 ;
-(id)init;
-(void)_receivedMemoryWarning:(id)arg0 ;
-(void)dealloc;
-(void)recycleBlockingViewController:(id)arg0 ;


@end


#endif