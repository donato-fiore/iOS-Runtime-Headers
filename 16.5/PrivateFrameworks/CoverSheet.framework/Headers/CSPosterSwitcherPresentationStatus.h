// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSPOSTERSWITCHERPRESENTATIONSTATUS_H
#define CSPOSTERSWITCHERPRESENTATIONSTATUS_H


#import <Foundation/Foundation.h>


@interface CSPosterSwitcherPresentationStatus : NSObject

@property (readonly, nonatomic) NSUInteger notReadyReason; // ivar: _notReadyReason
@property (readonly, nonatomic) BOOL shouldProvideNotReadyFeedback;
@property (readonly, nonatomic) NSUInteger state; // ivar: _state


-(id)initWithState:(NSUInteger)arg0 notReadyReason:(NSUInteger)arg1 ;


@end


#endif