// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHDRAWINGCONTEXT_H
#define CHDRAWINGCONTEXT_H


#import <Foundation/Foundation.h>

#import "CHClassifiableDrawing.h"

@interface CHDrawingContext : NSObject {
    set<long, std::less<long>, std::allocator<long>> _strokeGroup;
}


@property (readonly, nonatomic) CHClassifiableDrawing *classifiableDrawing; // ivar: _classifiableDrawing
@property (readonly, nonatomic) NSUInteger edgeIndex; // ivar: _edgeIndex
@property (readonly, nonatomic) NSInteger numberOfSegments; // ivar: _numberOfSegments
@property (readonly, nonatomic) NSInteger numberOfSubstrokes; // ivar: _numberOfSubstrokes
@property ? strokeGroup;


-(id)initWithEdgeIndex:(NSUInteger)arg0 numberOfSubstrokes:(NSInteger)arg1 numberOfSegments:(NSInteger)arg2 classifiableDrawing:(id)arg3 strokeGroup:(struct set<long, std::less<long>, std::allocator<long>> )arg4 ;


@end


#endif