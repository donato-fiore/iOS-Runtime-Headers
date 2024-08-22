// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFBLACKLISTTRIGGERNODE_H
#define WFBLACKLISTTRIGGERNODE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WFBlacklistTriggerNode : NSObject

@property (copy) NSString *bssid; // ivar: _bssid
@property NSUInteger triggerReason; // ivar: _triggerReason
@property NSInteger triggerReasonData; // ivar: _triggerReasonData
@property (copy) NSString *triggerReasonString; // ivar: _triggerReasonString
@property CGFloat triggerReasonTimestamp; // ivar: _triggerReasonTimestamp


-(id)init;


@end


#endif