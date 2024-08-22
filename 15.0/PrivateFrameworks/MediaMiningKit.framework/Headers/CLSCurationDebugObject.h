// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSCURATIONDEBUGOBJECT_H
#define CLSCURATIONDEBUGOBJECT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CLSCurationDebugObject : NSObject {
    NSUInteger _tentativeSectionStateHistoryLength;
    NSUInteger _stateAtBeginningOfTentativeSection;
}


@property (readonly) NSUInteger state; // ivar: _state
@property (readonly) NSArray *stateHistory; // ivar: _stateHistory


+(id)stringForState:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)timestamp;
-(void)beginTentativeSection;
-(void)endTentativeSectionWithSuccess:(BOOL)arg0 ;
-(void)resetWithReason:(id)arg0 agent:(id)arg1 stage:(id)arg2 ;


@end


#endif