// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MNMAPPOINTWITHINDEX_H
#define _MNMAPPOINTWITHINDEX_H


#import <Foundation/Foundation.h>


@interface _MNMapPointWithIndex : NSObject {
    Matrix<double, 2, 1> _point;
    LineSegment<double, 2> _segment;
}


@property (nonatomic) NSUInteger index; // ivar: _index
@property (nonatomic) BOOL isFlipped; // ivar: _isFlipped
@property (nonatomic) BOOL isPolylineA; // ivar: _isPolylineA
@property (nonatomic) BOOL isStartOfSegment; // ivar: _isStartOfSegment
@property ? point;
@property ? segment;




@end


#endif