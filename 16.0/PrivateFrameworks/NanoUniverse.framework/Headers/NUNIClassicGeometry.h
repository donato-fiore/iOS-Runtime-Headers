// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUNICLASSICGEOMETRY_H
#define NUNICLASSICGEOMETRY_H


#import <Foundation/Foundation.h>


@interface NUNIClassicGeometry : NSObject

@property (readonly, nonatomic) int icount; // ivar: _icount
@property (readonly, nonatomic) *unsigned short indices; // ivar: _indices
@property (readonly, nonatomic) int vcount; // ivar: _vcount
@property (readonly, nonatomic) *NUNIClassicVertex vertices; // ivar: _vertices


-(int)addIndices:(*unsigned short)arg0 count:(int)arg1 vbase:(int)arg2 ;
-(int)addVertices:(struct NUNIClassicVertex *)arg0 count:(int)arg1 ;
-(void)dealloc;


@end


#endif