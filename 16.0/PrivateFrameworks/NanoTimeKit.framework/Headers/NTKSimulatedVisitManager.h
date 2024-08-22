// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKSIMULATEDVISITMANAGER_H
#define NTKSIMULATEDVISITMANAGER_H



#import "NTKVisitManager.h"

@interface NTKSimulatedVisitManager : NTKVisitManager



-(id)currentVisit;
-(id)init;
-(id)previousVisit;
-(id)startVisitUpdatesWithIdentifier:(id)arg0 handler:(id)arg1 ;
-(void)stopVisitUpdatesForToken:(id)arg0 ;


@end


#endif