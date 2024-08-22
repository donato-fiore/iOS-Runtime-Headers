// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MIOIMAGESIZECONSTRAINT_H
#define MIOIMAGESIZECONSTRAINT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MIOImageSizeConstraint : NSObject

@property (readonly, copy, nonatomic) NSArray *enumeratedImageSizes; // ivar: _enumeratedImageSizes
@property (readonly, nonatomic) _MIORange pixelsHighRange; // ivar: _pixelsHighRange
@property (readonly, nonatomic) _MIORange pixelsWideRange; // ivar: _pixelsWideRange
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(BOOL)allowsImageSize:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithEnumeratedImageSizes:(id)arg0 ;
-(id)initWithPixelsWideRange:(struct _MIORange )arg0 pixelsHighRange:(struct _MIORange )arg1 ;
-(id)initWithSpecification:(*void)arg0 ;


@end


#endif