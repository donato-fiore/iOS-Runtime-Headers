// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUINSTALLATIONCONSTRAINTMONITORCARPLAY_H
#define SUINSTALLATIONCONSTRAINTMONITORCARPLAY_H

@class CARSessionStatus, NSString;
@protocol CARSessionObserving;


#import "SUInstallationConstraintMonitorBase.h"

@interface SUInstallationConstraintMonitorCarplay : SUInstallationConstraintMonitorBase <CARSessionObserving>

 {
    BOOL _queue_CarplayConnected;
    CARSessionStatus *_queue_carSessionStatus;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)unsatisfiedConstraints;
-(id)initOnQueue:(id)arg0 withDownload:(id)arg1 ;
-(void)_queue_carplayDidChange;
-(void)dealloc;
-(void)sessionDidConnect:(id)arg0 ;
-(void)sessionDidDisconnect:(id)arg0 ;


@end


#endif