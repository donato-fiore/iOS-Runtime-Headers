// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IFIMAGESPECIFICATION_H
#define IFIMAGESPECIFICATION_H

@class NSSet;

#import <Foundation/Foundation.h>

#import "IFImageSpecification.h"

@interface IFImageSpecification : NSObject

@property (retain, nonatomic) IFImageSpecification *largerSpecification; // ivar: _largerSpecification
@property (readonly) CGSize pixelsSize; // ivar: _pixelsSize
@property (readonly) CGFloat scale; // ivar: _scale
@property (readonly) CGSize size; // ivar: _size
@property (retain, nonatomic) IFImageSpecification *smallerSpecification; // ivar: _smallerSpecification
@property (readonly) NSSet *tags; // ivar: _tags


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToImageSpecification:(id)arg0 ;
-(CGFloat)dimension;
-(NSUInteger)hash;
-(id)description;
-(id)initWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 tags:(id)arg2 ;
-(struct CGSize )minimumSize;
-(struct CGSize )pixelSize;


@end


#endif