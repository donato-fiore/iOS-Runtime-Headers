// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDASHBOARDORIENTATIONCONTROLLER_H
#define SBDASHBOARDORIENTATIONCONTROLLER_H

@class NSString;
@protocol CSOrientationUpdateControlling, BSInvalidatable;

#import <Foundation/Foundation.h>


@interface SBDashBoardOrientationController : NSObject <CSOrientationUpdateControlling>

 {
    id<BSInvalidatable> *_deferOrientationUpdatesAssertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)cancelOrientationUpdateDeferral;
-(void)deferOrientationUpdatesWithReason:(id)arg0 ;
-(void)noteInterfaceOrientationChanged:(NSInteger)arg0 duration:(CGFloat)arg1 logMessage:(id)arg2 ;


@end


#endif