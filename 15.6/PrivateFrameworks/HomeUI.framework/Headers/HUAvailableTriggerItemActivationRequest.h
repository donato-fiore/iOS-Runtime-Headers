// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUAVAILABLETRIGGERITEMACTIVATIONREQUEST_H
#define HUAVAILABLETRIGGERITEMACTIVATIONREQUEST_H

@class NAFuture;

#import <Foundation/Foundation.h>

#import "HUAvailableTriggerItem.h"

@interface HUAvailableTriggerItemActivationRequest : NSObject

@property (nonatomic) BOOL active; // ivar: _active
@property (retain, nonatomic) NAFuture *completionFuture; // ivar: _completionFuture
@property (weak, nonatomic) HUAvailableTriggerItem *item; // ivar: _item


-(BOOL)isSameAsRequest:(id)arg0 ;
-(id)initWithItem:(id)arg0 active:(BOOL)arg1 ;


@end


#endif