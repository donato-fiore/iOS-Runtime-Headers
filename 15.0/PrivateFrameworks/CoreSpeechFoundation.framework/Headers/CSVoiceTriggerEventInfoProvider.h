// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSVOICETRIGGEREVENTINFOPROVIDER_H
#define CSVOICETRIGGEREVENTINFOPROVIDER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface CSVoiceTriggerEventInfoProvider : NSObject

@property (copy, nonatomic) NSDictionary *rtsTriggerInfo; // ivar: _rtsTriggerInfo
@property (nonatomic) NSUInteger triggerNotifiedMachTime; // ivar: _triggerNotifiedMachTime
@property (copy, nonatomic) NSDictionary *voiceTriggerInfo; // ivar: _voiceTriggerInfo


+(id)sharedInstance;


@end


#endif