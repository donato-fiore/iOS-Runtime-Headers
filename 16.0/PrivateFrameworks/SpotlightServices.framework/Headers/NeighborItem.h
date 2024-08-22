// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEIGHBORITEM_H
#define NEIGHBORITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NeighborItem : NSObject

@property (nonatomic) CGFloat distance; // ivar: _distance
@property (retain, nonatomic) NSString *neighbor; // ivar: _neighbor
@property (nonatomic) NSUInteger position; // ivar: _position
@property (nonatomic) NSInteger type; // ivar: _type


-(id)initWithNeighbor:(id)arg0 type:(NSInteger)arg1 distance:(CGFloat)arg2 position:(NSUInteger)arg3 ;


@end


#endif