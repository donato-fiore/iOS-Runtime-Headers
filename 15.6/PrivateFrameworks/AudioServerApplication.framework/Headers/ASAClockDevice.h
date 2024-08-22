// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASACLOCKDEVICE_H
#define ASACLOCKDEVICE_H

@class NSArray, NSString;


#import "ASAObject.h"

@interface ASAClockDevice : ASAObject

@property (readonly, nonatomic, getter=isAlive) BOOL alive;
@property (readonly, nonatomic) unsigned int clockDomain;
@property (readonly, copy, nonatomic) NSArray *controlObjectIDs;
@property (readonly, copy, nonatomic) NSArray *controls;
@property (readonly, copy, nonatomic) NSString *deviceUID;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) unsigned int inputLatency;
@property (readonly, copy, nonatomic) NSString *manufacturer;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) CGFloat nominalSampleRate;
@property (readonly, copy, nonatomic) NSArray *nominalSampleRates;
@property (readonly, nonatomic) unsigned int outputLatency;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly, nonatomic) unsigned int transportType;
@property (readonly, nonatomic) unsigned int zeroTimestampPeriod;


-(id)coreAudioClassName;
-(id)diagnosticDescriptionWithIndent:(id)arg0 walkTree:(BOOL)arg1 ;


@end


#endif