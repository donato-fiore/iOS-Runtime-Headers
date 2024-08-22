// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPZONEBORDERNEIGHBOR_H
#define CPZONEBORDERNEIGHBOR_H

@protocol NSCopying, CPCopying;

#import <Foundation/Foundation.h>

#import "CPShape.h"

@interface CPZoneBorderNeighbor : NSObject <NSCopying, CPCopying>

 {
    CPShape *neighborShape;
    int shapeSide;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initSuper;
-(id)neighborShape;
-(int)shapeSide;
-(void)dealloc;
-(void)setNeighborShape:(id)arg0 ;
-(void)setShapeSide:(int)arg0 ;


@end


#endif