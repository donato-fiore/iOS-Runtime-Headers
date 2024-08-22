// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKUWBSECURERANGINGCOORDINATOR_H
#define NPKUWBSECURERANGINGCOORDINATOR_H


#import <Foundation/Foundation.h>


@interface NPKUWBSecureRangingCoordinator : NSObject



+(id)sharedInstance;
-(id)init;
-(id)pauseRangingForPass:(id)arg0 durationInSeconds:(id)arg1 ;
-(id)resumeRangingForPass:(id)arg0 ;
-(void)_handleCarKeyRangingDidResumeNotification:(id)arg0 ;
-(void)_handleCarKeyRangingDidSuspendNotification:(id)arg0 ;
-(void)_parseNearFieldNotificationObject:(id)arg0 outApplicationIdentifier:(*id)arg1 outApplicationKeyIdentifier:(*id)arg2 ;


@end


#endif