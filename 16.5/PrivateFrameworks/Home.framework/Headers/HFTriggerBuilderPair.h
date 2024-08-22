// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFTRIGGERBUILDERPAIR_H
#define HFTRIGGERBUILDERPAIR_H

@class HMTriggerBuilder, HMTrigger;

#import <Foundation/Foundation.h>


@interface HFTriggerBuilderPair : NSObject

@property (readonly, nonatomic) HMTriggerBuilder *builder; // ivar: _builder
@property (readonly, nonatomic) HMTrigger *trigger; // ivar: _trigger


+(id)creatingTriggerWithBuilder:(id)arg0 ;
+(id)updatingTrigger:(id)arg0 withBuilder:(id)arg1 ;
-(id)commitBuilderInHome:(id)arg0 ;
-(id)initWithTrigger:(id)arg0 builder:(id)arg1 ;
-(void)_notifyObserversOfAddingTrigger:(id)arg0 inHome:(id)arg1 ;
-(void)_notifyObserversOfChangingTrigger:(id)arg0 inHome:(id)arg1 ;


@end


#endif