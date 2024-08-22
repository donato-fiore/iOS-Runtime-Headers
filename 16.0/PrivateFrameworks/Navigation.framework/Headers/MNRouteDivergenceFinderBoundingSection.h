// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNROUTEDIVERGENCEFINDERBOUNDINGSECTION_H
#define MNROUTEDIVERGENCEFINDERBOUNDINGSECTION_H


#import <Foundation/Foundation.h>

#import "MNRouteDivergenceFinderBoundingSection.h"

@interface MNRouteDivergenceFinderBoundingSection : NSObject

@property (nonatomic) ? boundingRect; // ivar: _boundingRect
@property (readonly, nonatomic) BOOL isLeaf;
@property (nonatomic) NSUInteger leafIndex; // ivar: _leafIndex
@property (retain, nonatomic) MNRouteDivergenceFinderBoundingSection *left; // ivar: _left
@property (nonatomic) CGFloat length; // ivar: _length
@property (nonatomic) GEOPolylineCoordinateRange range; // ivar: _range
@property (retain, nonatomic) MNRouteDivergenceFinderBoundingSection *right; // ivar: _right


-(id)boundsDescription;
-(id)description;
-(id)leafSectionsIntersectingSection:(id)arg0 paddingMapPoints:(CGFloat)arg1 ;
-(id)treeDescription;
-(void)_appendDescription:(id)arg0 indent:(NSUInteger)arg1 ;
-(void)traverseWithHandler:(id)arg0 ;


@end


#endif