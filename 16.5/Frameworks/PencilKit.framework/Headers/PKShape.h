// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSHAPE_H
#define PKSHAPE_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "PKStroke.h"

@interface PKShape : NSObject

@property (readonly, nonatomic) BOOL fillable;
@property (readonly, nonatomic) PKStroke *originalStroke; // ivar: _originalStroke
@property (readonly, nonatomic) NSArray *strokes; // ivar: _strokes
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)snapToShapeActionNameForNumShapes:(NSUInteger)arg0 ;
-(id)initWithShapeType:(NSInteger)arg0 strokes:(id)arg1 originalStroke:(id)arg2 ;


@end


#endif