// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFDEVICESETUPTVCOLORCALIBRATORSERVICE_H
#define SFDEVICESETUPTVCOLORCALIBRATORSERVICE_H

@class TVLDisplayColorCalibrator;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFService.h"
#import "SFSession.h"

@interface SFDeviceSetupTVColorCalibratorService : NSObject {
    BOOL _eventFinalDelivered;
    BOOL _finished;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    SFService *_sfService;
    SFSession *_sfSession;
    TVLDisplayColorCalibrator *_tvColorCalibrator;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler


-(id)init;
-(void)_handleFinishRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)_handleSessionEnded:(id)arg0 ;
-(void)_handleSessionStarted:(id)arg0 ;
-(void)_handleTVColorCalibratorProgressEvent:(NSUInteger)arg0 info:(id)arg1 ;
-(void)_handleTVLatencyRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)_invalidate;
-(void)_reportProgress:(unsigned int)arg0 info:(id)arg1 ;
-(void)_sfServiceStart;
-(void)activate;
-(void)invalidate;
-(void)sendSetupAction:(unsigned int)arg0 info:(id)arg1 responseHandler:(id)arg2 ;


@end


#endif