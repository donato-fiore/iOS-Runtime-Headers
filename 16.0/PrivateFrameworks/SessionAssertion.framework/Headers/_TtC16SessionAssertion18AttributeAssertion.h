// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC16SESSIONASSERTION18ATTRIBUTEASSERTION_H
#define _TTC16SESSIONASSERTION18ATTRIBUTEASSERTION_H

@class SwiftObject;



@interface _TtC16SessionAssertion18AttributeAssertion : SwiftObject {
    ? target;
    ? explanation;
    ? duration;
    ? acquisitionDate;
    ? attribute;
    ? identifier;
    ? invalidationHandler;
    ? lock;
    ? manager;
    ? _lock_state;
    ? _lock_invalidationState;
}




-(void)invalidate;


@end


#endif