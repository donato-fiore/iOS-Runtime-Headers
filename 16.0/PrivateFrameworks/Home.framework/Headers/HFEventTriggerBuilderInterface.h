// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFEVENTTRIGGERBUILDERINTERFACE_H
#define HFEVENTTRIGGERBUILDERINTERFACE_H


#import <Foundation/Foundation.h>

#import "HFEventTriggerBuilder.h"

@interface HFEventTriggerBuilderInterface : NSObject

@property (readonly, weak, nonatomic) HFEventTriggerBuilder *triggerBuilder; // ivar: _triggerBuilder


+(id)interfaceWithBuilder:(id)arg0 ;
-(id)initWithTriggerBuilder:(id)arg0 ;


@end


#endif