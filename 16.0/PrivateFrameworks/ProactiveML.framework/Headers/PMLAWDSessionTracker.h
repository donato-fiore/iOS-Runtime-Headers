// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PMLAWDSESSIONTRACKER_H
#define PMLAWDSESSIONTRACKER_H



#import "PMLAWDBaseTracker.h"

@interface PMLAWDSessionTracker : PMLAWDBaseTracker



+(id)trackerForModelName:(id)arg0 modelVersion:(id)arg1 ;
-(void)trackSessionWithCovariates:(id)arg0 label:(NSUInteger)arg1 locale:(id)arg2 ;
-(void)trackSessionWithCovariates:(id)arg0 label:(NSUInteger)arg1 locale:(id)arg2 supervisionType:(NSUInteger)arg3 ;


@end


#endif