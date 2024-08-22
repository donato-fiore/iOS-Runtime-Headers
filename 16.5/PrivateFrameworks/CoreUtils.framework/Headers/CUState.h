// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUSTATE_H
#define CUSTATE_H

@class NSPointerArray, NSString;

#import <Foundation/Foundation.h>

#import "CUState.h"

@interface CUState : NSObject {
    NSUInteger _index;
    NSPointerArray *_lcaMap;
    CUState *_parent;
}


@property (copy, nonatomic) id *eventHandler; // ivar: _eventHandler
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


-(id)description;
-(id)initWithName:(id)arg0 parent:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif