// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRSENSORREADERCLIENT_H
#define SRSENSORREADERCLIENT_H

@protocol SRSensorKitServiceClientReading;

#import <Foundation/Foundation.h>

#import "SRSensorReader.h"

@interface SRSensorReaderClient : NSObject <SRSensorKitServiceClientReading>



@property (weak) SRSensorReader *reader; // ivar: _reader


+(id)readerClientWithReader:(id)arg0 ;
-(id)initWithReader:(id)arg0 ;
-(void)resetDatastoreFiles:(id)arg0 ;


@end


#endif