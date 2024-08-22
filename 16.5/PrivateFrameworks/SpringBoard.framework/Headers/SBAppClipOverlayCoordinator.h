// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAPPCLIPOVERLAYCOORDINATOR_H
#define SBAPPCLIPOVERLAYCOORDINATOR_H

@class NSMutableSet, NSMapTable;

#import <Foundation/Foundation.h>


@interface SBAppClipOverlayCoordinator : NSObject {
    NSMutableSet *_overlayViewControllers;
    NSMapTable *_participantForViewController;
}




-(id)_existingOverlayViewControllerForWebClipIdentifier:(id)arg0 ;
-(id)init;
-(id)overlayViewControllerForBundleIdentifier:(id)arg0 webClipIdentifier:(id)arg1 participant:(id)arg2 ;
-(void)participant:(id)arg0 didSurrenderViewController:(id)arg1 ;


@end


#endif