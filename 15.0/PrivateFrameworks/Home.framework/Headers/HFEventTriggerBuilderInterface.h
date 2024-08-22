// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFEVENTTRIGGERBUILDERINTERFACE_H
#define HFEVENTTRIGGERBUILDERINTERFACE_H


#import <Foundation/Foundation.h>

#import "HFEventTriggerBuilder.h"

@interface HFEventTriggerBuilderInterface : NSObject

@property (readonly, nonatomic) HFEventTriggerBuilder *triggerBuilder; // ivar: _triggerBuilder


+(id)interfaceWithBuilder:(id)arg0 ;
-(id)initWithHome:(id)arg0 context:(id)arg1 ;
-(id)initWithTriggerBuilder:(id)arg0 ;


@end


#endif