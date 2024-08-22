// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GPSDEVICE_H
#define GPSDEVICE_H


#import <Foundation/Foundation.h>


@interface GpsDevice : NSObject {
    Options _fTestOptions;
}


@property *void fTestDevice; // ivar: _fTestDevice
@property ? fTestOptions;


-(BOOL)getGpsConfiguration:(struct ? *)arg0 error:(*id)arg1 ;
-(BOOL)testApSignalGpio:(*id)arg0 ;
-(BOOL)testCommPing:(*id)arg0 id:(*id)arg1 error:(*id)arg2 ;
-(BOOL)testCommPing:(id)arg0 error:(*id)arg1 ;
-(BOOL)testExternalFreqAssistance:(*id)arg0 ;
-(BOOL)testGpsCw:(id)arg0 error:(*id)arg1 ;
-(BOOL)testGpsModulated:(id)arg0 gpsPrn:(int)arg1 error:(*id)arg2 ;
-(BOOL)testPeriodic:(id)arg0 error:(*id)arg1 ;
-(BOOL)testPowerMode:(unsigned char)arg0 error:(*id)arg1 ;
-(BOOL)testTimeMarkGpio:(*id)arg0 ;
-(id)init:(*id)arg0 ;


@end


#endif