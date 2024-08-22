// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFBLACKLISTSTATENODE_H
#define WFBLACKLISTSTATENODE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WFBlacklistStateNode : NSObject

@property NSUInteger blacklistedReason; // ivar: _blacklistedReason
@property NSInteger blacklistedReasonData; // ivar: _blacklistedReasonData
@property (copy) NSString *blacklistedReasonString; // ivar: _blacklistedReasonString
@property NSUInteger blacklistedState; // ivar: _blacklistedState
@property (copy) NSString *blacklistedStateString; // ivar: _blacklistedStateString
@property CGFloat blacklistedStateTimestamp; // ivar: _blacklistedStateTimestamp


-(id)init;


@end


#endif