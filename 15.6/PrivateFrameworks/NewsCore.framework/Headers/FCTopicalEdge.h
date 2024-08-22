// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCTOPICALEDGE_H
#define FCTOPICALEDGE_H


#import <Foundation/Foundation.h>

#import "FCTopicalNode.h"

@interface FCTopicalEdge : NSObject {
    NSUInteger _containsAButNotB;
    NSUInteger _containsAAndB;
    NSUInteger _containsBButNotA;
}


@property (retain, nonatomic) FCTopicalNode *a; // ivar: _a
@property (retain, nonatomic) FCTopicalNode *b; // ivar: _b
@property (nonatomic) BOOL relatednessCalculated; // ivar: _relatednessCalculated


-(BOOL)isEqual:(id)arg0 ;
-(id)description;


@end


#endif