// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKVISITMANAGER_H
#define NTKVISITMANAGER_H


#import <Foundation/Foundation.h>


@interface NTKVisitManager : NSObject



+(id)fallbackVisit;
+(id)sharedVisitManager;
-(id)anyVisit;
-(id)currentVisit;
-(id)previousVisit;
-(id)startVisitUpdatesWithIdentifier:(id)arg0 handler:(id)arg1 ;
-(void)stopVisitUpdatesForToken:(id)arg0 ;


@end


#endif