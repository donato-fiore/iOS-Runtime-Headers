// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BSCOMPOUNDASSERTIONSTATE_H
#define _BSCOMPOUNDASSERTIONSTATE_H

@class NSOrderedSet, NSSet;
@protocol BSCompoundAssertionState;

#import <Foundation/Foundation.h>


@interface _BSCompoundAssertionState : NSObject <BSCompoundAssertionState>

 {
    BOOL _active;
    NSOrderedSet *_context;
}


@property (readonly, getter=isActive) BOOL active;
@property (readonly) NSSet *context;
@property (readonly) NSOrderedSet *orderedContext;


-(id)description;


@end


#endif