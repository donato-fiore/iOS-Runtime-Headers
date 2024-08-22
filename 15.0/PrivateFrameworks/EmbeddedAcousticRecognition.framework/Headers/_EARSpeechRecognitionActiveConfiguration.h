// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _EARSPEECHRECOGNITIONACTIVECONFIGURATION_H
#define _EARSPEECHRECOGNITIONACTIVECONFIGURATION_H

@class NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _EARSpeechRecognitionActiveConfiguration : NSObject <NSCopying>



@property (copy, nonatomic) NSSet *bluetoothDeviceIdFilter; // ivar: _bluetoothDeviceIdFilter
@property (copy, nonatomic) NSSet *deviceIdFilter; // ivar: _deviceIdFilter
@property (copy, nonatomic) NSSet *farFieldFilter; // ivar: _farFieldFilter
@property (copy, nonatomic) NSSet *samplingRateFilter; // ivar: _samplingRateFilter
@property (copy, nonatomic) NSSet *taskTypeFilter; // ivar: _taskTypeFilter


+(id)activeConfigurationForEverything;
+(id)activeConfigurationForNothing;
-(id)_initWithActiveConfiguration:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(struct SpeechRecognizerActiveConfiguration )speechRecognizerActiveConfiguration;


@end


#endif