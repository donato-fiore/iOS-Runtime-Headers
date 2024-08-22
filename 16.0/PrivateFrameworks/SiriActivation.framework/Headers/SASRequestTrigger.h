// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASREQUESTTRIGGER_H
#define SASREQUESTTRIGGER_H

@class NSMapTable;

#import <Foundation/Foundation.h>

#import "SASRequestOptions.h"

@interface SASRequestTrigger : NSObject {
    NSMapTable *_observers;
}


@property (readonly, nonatomic) SASRequestOptions *options; // ivar: _options
@property (readonly, nonatomic) NSInteger state; // ivar: _state


-(id)initWithRequestOptions:(id)arg0 updateHandle:(*id)arg1 ;
-(void)_updateState:(NSInteger)arg0 ;
-(void)addTriggerTarget:(id)arg0 action:(SEL)arg1 ;
-(void)removeTriggerTarget:(id)arg0 ;


@end


#endif