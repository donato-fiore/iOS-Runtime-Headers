// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCONFIGUREDTRIGGERRECORD_H
#define WFCONFIGUREDTRIGGERRECORD_H

@class NSData;


#import "WFRecord.h"

@interface WFConfiguredTriggerRecord : WFRecord

@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (nonatomic) BOOL shouldPrompt; // ivar: _shouldPrompt
@property (nonatomic) int source; // ivar: _source
@property (copy, nonatomic) NSData *suggestionData; // ivar: _suggestionData
@property (copy, nonatomic) NSData *triggerData; // ivar: _triggerData




@end


#endif