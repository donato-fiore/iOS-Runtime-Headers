// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFUIREQUESTTRIGGER_H
#define AFUIREQUESTTRIGGER_H

@class NSMapTable, SASRequestOptions;

#import <Foundation/Foundation.h>


@interface AFUIRequestTrigger : NSObject {
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