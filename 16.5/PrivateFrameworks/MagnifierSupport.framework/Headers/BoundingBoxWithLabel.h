// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BOUNDINGBOXWITHLABEL_H
#define BOUNDINGBOXWITHLABEL_H


#import <Foundation/Foundation.h>


@interface BoundingBoxWithLabel : NSObject

@property unsigned short alias; // ivar: _alias
@property float depth; // ivar: _depth
@property (readonly) unsigned short label; // ivar: _label
@property NSUInteger maxX; // ivar: _maxX
@property NSUInteger maxY; // ivar: _maxY
@property NSUInteger minX; // ivar: _minX
@property NSUInteger minY; // ivar: _minY


-(NSUInteger)computeArea;
-(id)initWithLabel:(unsigned short)arg0 ;


@end


#endif