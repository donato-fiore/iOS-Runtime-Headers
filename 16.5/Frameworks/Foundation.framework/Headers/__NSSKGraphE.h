// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef __NSSKGRAPHE_H
#define __NSSKGRAPHE_H


#import <Foundation/Foundation.h>


@interface __NSSKGraphE : NSObject {
    *edge _edges;
    *vertex _vertices;
    NSUInteger _numV;
    NSUInteger _numE;
    NSUInteger _currE;
    NSUInteger _dump;
    NSUInteger _l_end;
}




-(void)dealloc;


@end


#endif