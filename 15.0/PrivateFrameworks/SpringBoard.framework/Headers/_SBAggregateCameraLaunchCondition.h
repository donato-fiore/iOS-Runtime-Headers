// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SBAGGREGATECAMERALAUNCHCONDITION_H
#define _SBAGGREGATECAMERALAUNCHCONDITION_H

@class SBCameraLaunchCondition, NSArray;



@interface _SBAggregateCameraLaunchCondition : SBCameraLaunchCondition

@property (retain, nonatomic) NSArray *conditions; // ivar: _conditions


-(BOOL)isMet;


@end


#endif