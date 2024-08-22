// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRLATTICEEDGE_H
#define CRLATTICEEDGE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CRLatticeEdge : NSObject

@property (readonly) NSUInteger edgeIndex; // ivar: _edgeIndex
@property (readonly) NSUInteger endNode; // ivar: _endNode
@property (readonly) CGFloat score; // ivar: _score
@property (readonly) NSUInteger startNode; // ivar: _startNode
@property (readonly, nonatomic) NSString *symbol; // ivar: _symbol


-(id)initWithSymbol:(id)arg0 index:(NSUInteger)arg1 score:(CGFloat)arg2 startNode:(NSUInteger)arg3 endNode:(NSUInteger)arg4 ;


@end


#endif