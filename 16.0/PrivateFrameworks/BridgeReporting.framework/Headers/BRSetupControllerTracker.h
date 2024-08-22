// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRSETUPCONTROLLERTRACKER_H
#define BRSETUPCONTROLLERTRACKER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "BRSetupControllerDetails.h"

@interface BRSetupControllerTracker : NSObject

@property (retain, nonatomic) BRSetupControllerDetails *holdControllerDetails; // ivar: _holdControllerDetails
@property (retain, nonatomic) NSMutableArray *setupControllers; // ivar: _setupControllers


-(id)init;
-(id)lastPushedSetupController;
-(void)addSetupController:(id)arg0 action:(NSUInteger)arg1 ;
-(void)clearControllerHold;


@end


#endif