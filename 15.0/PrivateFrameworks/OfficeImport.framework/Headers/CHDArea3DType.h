// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHDAREA3DTYPE_H
#define CHDAREA3DTYPE_H



#import "CHDArea2DType.h"

@interface CHDArea3DType : CHDArea2DType {
    int mGapDepth;
}




+(BOOL)is3DType;
-(id)initWithChart:(id)arg0 ;
-(int)gapDepth;
-(void)setGapDepth:(int)arg0 ;


@end


#endif