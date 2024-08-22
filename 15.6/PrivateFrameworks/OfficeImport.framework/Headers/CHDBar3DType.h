// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHDBAR3DTYPE_H
#define CHDBAR3DTYPE_H



#import "CHDBar2DType.h"

@interface CHDBar3DType : CHDBar2DType {
    int mGapDepth;
    int mShapeType;
}




+(BOOL)is3DType;
+(id)stringWithShapeType:(int)arg0 ;
-(id)initWithChart:(id)arg0 ;
-(int)gapDepth;
-(int)shapeType;
-(void)setGapDepth:(int)arg0 ;
-(void)setShapeType:(int)arg0 ;


@end


#endif