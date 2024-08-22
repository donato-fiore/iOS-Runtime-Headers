// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXPHOENIXMETADATALOGGER_H
#define AXPHOENIXMETADATALOGGER_H

@class NSDateFormatter, NSString, NSDate;

#import <Foundation/Foundation.h>


@interface AXPhoenixMetadataLogger : NSObject

@property (retain, nonatomic) NSDateFormatter *dateFormatter; // ivar: _dateFormatter
@property (retain, nonatomic) NSString *metadataFilePath; // ivar: _metadataFilePath
@property (retain, nonatomic) NSDate *startTimestamp; // ivar: _startTimestamp


-(id)_deviceModelName;
-(id)_fullHardwareConfigurationString;
-(id)_orientationString;
-(id)initWithMetadata:(id)arg0 ;
-(void)writeMetadataToFileWithSensors:(id)arg0 withAnnotations:(id)arg1 withFalsePositivesMetadata:(id)arg2 ;


@end


#endif