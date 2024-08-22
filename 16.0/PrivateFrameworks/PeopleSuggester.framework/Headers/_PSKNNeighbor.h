// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PSKNNEIGHBOR_H
#define _PSKNNEIGHBOR_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface _PSKNNeighbor : NSObject

@property (nonatomic) CGFloat distance; // ivar: _distance
@property (retain, nonatomic) NSArray *nodeData; // ivar: _nodeData


-(id)initWithNodeData:(id)arg0 distance:(CGFloat)arg1 ;


@end


#endif