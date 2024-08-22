// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTTIMERMANAGEREXPORTEDOBJECT_H
#define MTTIMERMANAGEREXPORTEDOBJECT_H

@class NSString;
@protocol MTTimerClient;

#import <Foundation/Foundation.h>

#import "MTTimerManager.h"

@interface MTTimerManagerExportedObject : NSObject <MTTimerClient>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) MTTimerManager *timerManager; // ivar: _timerManager


-(id)initWithTimerManager:(id)arg0 ;
-(void)_didReceiveTimerServerReadyNotification:(id)arg0 ;
-(void)dealloc;
-(void)nextTimerChanged:(id)arg0 ;
-(void)timerDismissed:(id)arg0 ;
-(void)timerFired:(id)arg0 ;
-(void)timersAdded:(id)arg0 ;
-(void)timersRemoved:(id)arg0 ;
-(void)timersUpdated:(id)arg0 ;


@end


#endif