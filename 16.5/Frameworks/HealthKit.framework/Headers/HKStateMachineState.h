// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSTATEMACHINESTATE_H
#define HKSTATEMACHINESTATE_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface HKStateMachineState : NSObject

@property (copy, nonatomic) NSDictionary *incomingTransitions; // ivar: _incomingTransitions
@property (readonly, nonatomic) NSInteger index; // ivar: _index
@property (readonly, copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSDictionary *outgoingTransitions; // ivar: _outgoingTransitions


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithIndex:(NSInteger)arg0 label:(id)arg1 ;


@end


#endif