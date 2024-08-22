// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _KDNODE_H
#define _KDNODE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_KDNode.h"

@interface _KDNode : NSObject <NSSecureCoding>

 {
    _KDBoundingBox _boundingBox;
}


@property ? boundingBox;
@property (nonatomic) NSUInteger count; // ivar: _count
@property (nonatomic) BOOL isLeaf; // ivar: _isLeaf
@property (retain, nonatomic) _KDNode *leftChild; // ivar: _leftChild
@property (retain, nonatomic) _KDNode *rightChild; // ivar: _rightChild
@property (nonatomic) NSUInteger splitDimension; // ivar: _splitDimension
@property (nonatomic) NSUInteger splitIndex; // ivar: _splitIndex
@property (nonatomic) float splitValue; // ivar: _splitValue
@property (nonatomic) NSUInteger startingIndex; // ivar: _startingIndex


-(id)initWithCoder:(id)arg0 ;
-(void)assignSplitsForData:(*float)arg0 indices:(*NSUInteger)arg1 numDimensions:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)findMin:(*float)arg0 andMax:(*float)arg1 alongDimension:(NSUInteger)arg2 data:(*float)arg3 indices:(*NSUInteger)arg4 numDimensions:(NSUInteger)arg5 ;
-(void)partitionDataPoints:(*float)arg0 indices:(*NSUInteger)arg1 numDimensions:(NSUInteger)arg2 ;


@end


#endif