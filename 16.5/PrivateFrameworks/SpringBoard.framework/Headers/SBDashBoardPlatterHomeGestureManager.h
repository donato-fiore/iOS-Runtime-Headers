// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDASHBOARDPLATTERHOMEGESTUREMANAGER_H
#define SBDASHBOARDPLATTERHOMEGESTUREMANAGER_H

@class NSString;
@protocol SBPlatterHomeGestureManagerDelegate, CSPlatterHomeGestureManaging;

#import <Foundation/Foundation.h>

#import "SBPlatterHomeGestureManager.h"

@interface SBDashBoardPlatterHomeGestureManager : NSObject <SBPlatterHomeGestureManagerDelegate, CSPlatterHomeGestureManaging>

 {
    SBPlatterHomeGestureManager *_platterHomeGestureManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isViewControllerPlatterHomeGestureParticipant:(id)arg0 ;
-(NSInteger)platterHomeGestureManager:(id)arg0 zStackParticipantIdentifierForParticipant:(id)arg1 ;
-(id)_platterHomeGestureManager;
-(id)homeGestureContextForViewController:(id)arg0 ;
-(id)platterHomeGestureManager:(id)arg0 windowForParticipant:(id)arg1 ;
-(void)unregisterHomeGestureContextForViewController:(id)arg0 ;


@end


#endif