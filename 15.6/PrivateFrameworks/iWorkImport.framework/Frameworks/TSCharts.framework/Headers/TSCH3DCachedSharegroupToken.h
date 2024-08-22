// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DCACHEDSHAREGROUPTOKEN_H
#define TSCH3DCACHEDSHAREGROUPTOKEN_H

@protocol TSCH3DSharegroupDelayCheckerParent;


#import "TSCH3DSharegroupToken.h"
#import "TSCH3DSharegroupDelayChecker.h"
#import "TSCH3DGPUSharegroup.h"

@interface TSCH3DCachedSharegroupToken : TSCH3DSharegroupToken <TSCH3DSharegroupDelayCheckerParent>

 {
    TSCH3DSharegroupDelayChecker *_checker;
    TSCH3DGPUSharegroup *_sharegroup;
}




-(id)init;
-(id)tokenSharegroup;
-(void)dealloc;
-(void)deleteTokenSharegroup;
-(void)didRemoveAllInterests;
-(void)flushTokenSharegroup;
-(void)releaseSharegroup:(id)arg0 ;
-(void)willCheckCondition;


@end


#endif