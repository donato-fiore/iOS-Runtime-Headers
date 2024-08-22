// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFTIMERTRIGGERTIMEEVENTADAPTER_H
#define HFTIMERTRIGGERTIMEEVENTADAPTER_H

@class HFEventBuilder<HFTimeEventBuilder>;

#import <Foundation/Foundation.h>


@interface HFTimerTriggerTimeEventAdapter : NSObject

@property (readonly, nonatomic) HFEventBuilder<HFTimeEventBuilder> *eventBuilder; // ivar: _eventBuilder


+(id)adapterWithEventBuilder:(id)arg0 ;
-(id)createTriggerWithName:(id)arg0 timeZone:(id)arg1 recurrences:(id)arg2 ;
-(id)init;
-(id)initWithEventBuilder:(id)arg0 ;
-(id)updateTrigger:(id)arg0 ;
-(void)updateTriggerBuilder:(id)arg0 recurrences:(id)arg1 inHome:(id)arg2 ;


@end


#endif