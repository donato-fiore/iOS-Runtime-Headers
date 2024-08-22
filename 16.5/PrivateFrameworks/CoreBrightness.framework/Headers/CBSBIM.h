// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBSBIM_H
#define CBSBIM_H

@protocol OS_dispatch_queue, OS_os_log, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "CBDisplayModuleiOS.h"
#import "CBEDR.h"

@interface CBSBIM : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_os_log> *_log;
    CBDisplayModuleiOS *_displayModule;
    BOOL _sbimEnabled;
    BOOL _isMonitoring;
    CBEDR *_edr;
    BOOL _edrOn;
    *__IOMobileFramebuffer _iomfb;
    unsigned int _iomfbService;
    NSObject<OS_dispatch_source> *_dataTimer;
    NSObject<OS_dispatch_source> *_mitigationTimer;
    *float _limits;
    unsigned int _limitsSize;
    MitigationState mitigation;
}


@property (readonly) float cap; // ivar: _cap
@property float currentHeadroom; // ivar: _currentHeadroom
@property float currentHeadroomRequest; // ivar: _currentHeadroomRequest
@property float sdrBrightness; // ivar: _sdrBrightness


+(BOOL)needsSBIM;
-(char *)mitigationStageToString:(int)arg0 ;
-(float)mitigatedHeadroomFromRequestedHeadroom;
-(id)initWithQueue:(id)arg0 andDisplayModule:(id)arg1 andEDRModule:(id)arg2 ;
-(void)dataTimerHandler;
-(void)dealloc;
-(void)disable;
-(void)enable;
-(void)enableSBIM:(BOOL)arg0 ;
-(void)enterEDR;
-(void)exitEDR;
-(void)initialiseLimits;
-(void)mitigationTimerHandler;
-(void)resetMitigationState;
-(void)sendEDRHeadroomRequest:(float)arg0 ;
-(void)startMonitoring;
-(void)stopMonitoring;
-(void)updateMitigationStateWithData:(struct IOMFBShortTermBIM )arg0 andCurrentHeadroom:(float)arg1 andRequestedHeadroom:(float)arg2 andSDRBrightness:(float)arg3 andReset:(BOOL)arg4 ;


@end


#endif