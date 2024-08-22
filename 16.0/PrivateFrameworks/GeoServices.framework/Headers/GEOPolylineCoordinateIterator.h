// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPOLYLINECOORDINATEITERATOR_H
#define GEOPOLYLINECOORDINATEITERATOR_H


#import <Foundation/Foundation.h>


@interface GEOPolylineCoordinateIterator : NSObject {
    ? _end;
}


@property (readonly, nonatomic) ? current; // ivar: _current
@property (readonly, nonatomic) BOOL isCurrentValid;
@property (readonly, nonatomic) ? previous; // ivar: _previous


+(id)iteratorWithRange:(struct GEOPolylineCoordinateRange )arg0 ;
-(id)initWithRange:(struct GEOPolylineCoordinateRange )arg0 ;
-(void)advance;


@end


#endif