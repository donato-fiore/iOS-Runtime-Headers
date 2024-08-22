// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFARBITRATIONPARTICIPATIONCONTEXT_H
#define AFARBITRATIONPARTICIPATIONCONTEXT_H

@class NSArray, NSDate, CDASchemaCDAScoreBoosters, NSNumber;

#import <Foundation/Foundation.h>

#import "AFMyriadRecord.h"

@interface AFArbitrationParticipationContext : NSObject

@property (copy, nonatomic) NSArray *advertisements; // ivar: _advertisements
@property (nonatomic) BOOL decisionIsWon; // ivar: _decisionIsWon
@property (nonatomic) unsigned char deviceClass; // ivar: _deviceClass
@property (nonatomic) CGFloat lastActivationTime; // ivar: _lastActivationTime
@property (copy, nonatomic) AFMyriadRecord *ownAdvertisement; // ivar: _ownAdvertisement
@property (copy, nonatomic) NSDate *requestStartDate; // ivar: _requestStartDate
@property (retain, nonatomic) CDASchemaCDAScoreBoosters *scoreBoosters; // ivar: _scoreBoosters
@property (copy, nonatomic) NSNumber *triggerType; // ivar: _triggerType
@property (copy, nonatomic) NSDate *voiceTriggerDate; // ivar: _voiceTriggerDate




@end


#endif