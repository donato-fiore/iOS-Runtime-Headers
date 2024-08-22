// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC17MEDIAPLAYBACKCORE9PLAYERFSM_H
#define _TTC17MEDIAPLAYBACKCORE9PLAYERFSM_H

@class SwiftObject, NSDictionary;
@protocol MFStateDumpable, MFResettable;



@interface _TtC17MediaPlaybackCore9PlayerFSM : SwiftObject <MFStateDumpable, MFResettable>

 {
    ? delegate;
    ? states;
    ? controller;
}


@property (nonatomic, readonly) NSDictionary *stateDictionary;


-(void)resetWithReason:(id)arg0 ;


@end


#endif