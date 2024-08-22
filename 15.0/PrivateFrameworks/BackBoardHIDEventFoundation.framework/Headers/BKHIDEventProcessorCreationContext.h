// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKHIDEVENTPROCESSORCREATIONCONTEXT_H
#define BKHIDEVENTPROCESSORCREATIONCONTEXT_H

@protocol BKHIDEventProcessorRegistering, BKIOHIDServiceMatcherDataProviding, BKHIDSystemInterfacing;

#import <Foundation/Foundation.h>


@interface BKHIDEventProcessorCreationContext : NSObject

@property (retain, nonatomic) NSObject<BKHIDEventProcessorRegistering> *eventProcessorRegistry; // ivar: _eventProcessorRegistry
@property (retain, nonatomic) NSObject<BKIOHIDServiceMatcherDataProviding> *serviceMatcherDataProvider; // ivar: _serviceMatcherDataProvider
@property (retain, nonatomic) NSObject<BKHIDSystemInterfacing> *systemInterface; // ivar: _systemInterface




@end


#endif