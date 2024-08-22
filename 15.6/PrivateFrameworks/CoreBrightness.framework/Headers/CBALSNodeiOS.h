// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CBALSNODEIOS_H
#define CBALSNODEIOS_H

@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "CBALSEvent.h"

@interface CBALSNodeiOS : NSObject {
    NSObject<OS_os_log> *_logHandle;
    int _placement;
    float _superFastIntegrationTime;
    float _fastIntegrationTime;
    float _slowIntegrationTime;
    BOOL _colorSupport;
}


@property *__IOHIDServiceClient alsService; // ivar: _alsService
@property (retain, nonatomic) CBALSEvent *currentALSEvent; // ivar: _currentALSEvent
@property int orientation; // ivar: _orientation


-(BOOL)conformsToHIDServiceClient:(struct __IOHIDServiceClient *)arg0 ;
-(BOOL)handleALSEvent:(id)arg0 ;
-(BOOL)isColorSupported;
-(id)initWithALSServiceClient:(struct __IOHIDServiceClient *)arg0 ;
-(void)dealloc;
-(void)initALSProperties;


@end


#endif