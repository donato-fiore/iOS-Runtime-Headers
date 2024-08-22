// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBINCALLTRANSIENTOVERLAYMANAGER_H
#define SBINCALLTRANSIENTOVERLAYMANAGER_H


#import <Foundation/Foundation.h>


@interface SBInCallTransientOverlayManager : NSObject



-(id)_newAlertDefinition;
-(id)_remoteTransientOverlaySessionManager;
-(void)presentTransientOverlay;
-(void)presentTransientOverlayForActivityContinuationWithActivityIdentifier:(id)arg0 ;
-(void)presentTransientOverlayForUILock;


@end


#endif