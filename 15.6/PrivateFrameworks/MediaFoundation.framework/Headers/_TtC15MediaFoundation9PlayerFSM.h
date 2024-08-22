// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC15MEDIAFOUNDATION9PLAYERFSM_H
#define _TTC15MEDIAFOUNDATION9PLAYERFSM_H

@class SwiftObject, NSDictionary;
@protocol MFStateDumpable, MFResettable;



@interface _TtC15MediaFoundation9PlayerFSM : SwiftObject <MFStateDumpable, MFResettable>

 {
    ? delegate;
    ? states;
    ? controller;
}


@property (nonatomic, readonly) NSDictionary *stateDictionary;


-(void)reset;


@end


#endif