// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAGRAPHREFERENCE_H
#define MAGRAPHREFERENCE_H

@protocol MAGraphProxy;

#import <Foundation/Foundation.h>

#import "MABaseGraph.h"

@interface MAGraphReference : NSObject {
    NSUInteger _hash;
}


@property (readonly, weak) MABaseGraph *concreteGraph; // ivar: _concreteGraph
@property (readonly, weak) NSObject<MAGraphProxy> *graph;


-(NSUInteger)hash;
-(id)initWithGraph:(id)arg0 ;


@end


#endif