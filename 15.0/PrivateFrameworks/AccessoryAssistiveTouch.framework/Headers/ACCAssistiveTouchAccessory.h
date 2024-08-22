// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACCASSISTIVETOUCHACCESSORY_H
#define ACCASSISTIVETOUCHACCESSORY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ACCAssistiveTouchAccessory : NSObject

@property (retain, nonatomic) NSString *accessoryUID; // ivar: _accessoryUID
@property (nonatomic) BOOL desiredAssistiveTouchState; // ivar: _desiredAssistiveTouchState


-(id)initWithAccessoryUID:(id)arg0 ;


@end


#endif