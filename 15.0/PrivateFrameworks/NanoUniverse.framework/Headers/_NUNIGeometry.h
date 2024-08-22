// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NUNIGEOMETRY_H
#define _NUNIGEOMETRY_H


#import <Foundation/Foundation.h>


@interface _NUNIGeometry : NSObject

@property (readonly, nonatomic) int icount; // ivar: _icount
@property (readonly, nonatomic) *unsigned short indices; // ivar: _indices
@property (readonly, nonatomic) int vcount; // ivar: _vcount
@property (readonly, nonatomic) *_NUNIVertex vertices; // ivar: _vertices


-(int)addIndices:(*unsigned short)arg0 count:(int)arg1 vbase:(int)arg2 ;
-(int)addVertices:(struct _NUNIVertex *)arg0 count:(int)arg1 ;
-(void)dealloc;


@end


#endif