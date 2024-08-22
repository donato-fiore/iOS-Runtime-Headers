// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKTRANSITPOLYLINEPATH_H
#define VKTRANSITPOLYLINEPATH_H



#import "VKPolylinePath.h"

@interface VKTransitPolylinePath : VKPolylinePath {
    NSUInteger _lineID;
}


@property (readonly, nonatomic) CGFloat vertexEqualityTolerance; // ivar: _vertexEqualityTolerance


-(id)description;
-(id)initWithOverlay:(id)arg0 section:(id)arg1 points:(*void)arg2 pointCount:(NSUInteger)arg3 reversePoints:(BOOL)arg4 transform:(*void)arg5 routeStartIndex:(unsigned int)arg6 routeEndIndex:(unsigned int)arg7 lineID:(NSUInteger)arg8 ;
-(id)initWithOverlay:(id)arg0 section:(id)arg1 points:(*void)arg2 pointCount:(NSUInteger)arg3 reversePoints:(BOOL)arg4 transform:(*void)arg5 routeStartIndex:(unsigned int)arg6 routeEndIndex:(unsigned int)arg7 lineID:(NSUInteger)arg8 tileZ:(unsigned int)arg9 vertexPrecision:(unsigned char)arg10 ;


@end


#endif