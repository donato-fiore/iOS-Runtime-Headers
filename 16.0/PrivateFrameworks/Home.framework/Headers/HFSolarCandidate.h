// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFSOLARCANDIDATE_H
#define HFSOLARCANDIDATE_H


#import <Foundation/Foundation.h>

#import "HFSolarCoordinate.h"

@interface HFSolarCandidate : NSObject

@property (readonly, nonatomic) HFSolarCoordinate *coordinate; // ivar: _coordinate
@property (readonly, nonatomic) NSUInteger index; // ivar: _index
@property (readonly, nonatomic) CGFloat separation; // ivar: _separation


-(CGFloat)_calculateSeparationBetweenCoordinateA:(id)arg0 andCoordinateB:(id)arg1 ;
-(id)initWithIndex:(NSUInteger)arg0 currentCoordinate:(id)arg1 referenceCoordinate:(id)arg2 ;


@end


#endif