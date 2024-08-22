// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SRSENSORWRITERCLIENT_H
#define SRSENSORWRITERCLIENT_H

@protocol SRSensorKitServiceClientWriting;

#import <Foundation/Foundation.h>

#import "SRSensorWriter.h"

@interface SRSensorWriterClient : NSObject <SRSensorKitServiceClientWriting>



@property (weak) SRSensorWriter *writer; // ivar: _writer


+(id)sensorWriterClientWithWriter:(id)arg0 ;
-(id)initWithWriter:(id)arg0 ;
-(void)resetDatastoreFiles:(id)arg0 ;
-(void)setMonitoring:(BOOL)arg0 withRequestedConfigurations:(id)arg1 ;


@end


#endif