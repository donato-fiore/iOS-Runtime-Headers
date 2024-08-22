// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSVOICETRIGGERSECONDPASSREQUESTOPTION_H
#define CSVOICETRIGGERSECONDPASSREQUESTOPTION_H

@class NSString, NSDictionary, NSUUID;

#import <Foundation/Foundation.h>

#import "CSVoiceTriggerFirstPassMetrics.h"

@interface CSVoiceTriggerSecondPassRequestOption : NSObject

@property (readonly, nonatomic) NSString *audioProviderUUID; // ivar: _audioProviderUUID
@property (readonly, nonatomic) NSString *deviceId; // ivar: _deviceId
@property (readonly, nonatomic) NSUInteger firstPassSource; // ivar: _firstPassSource
@property (readonly, nonatomic) NSDictionary *firstPassTriggerInfo; // ivar: _firstPassTriggerInfo
@property (readonly, nonatomic) CSVoiceTriggerFirstPassMetrics *firstpassMetrics; // ivar: _firstpassMetrics
@property (readonly, nonatomic) BOOL isSecondChanceRun; // ivar: _isSecondChanceRun
@property (readonly, nonatomic) NSUUID *rejectionMHUUID; // ivar: _rejectionMHUUID


-(id)initWithFirstPassSource:(NSUInteger)arg0 deviceId:(id)arg1 audioProviderUUID:(id)arg2 firstPassInfo:(id)arg3 rejectionMHUUID:(id)arg4 isSecondChanceRun:(BOOL)arg5 firstpassMetrics:(id)arg6 ;


@end


#endif